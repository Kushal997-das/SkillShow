#include <iostream>
#include <fstream>
#include <string>
#include <unordered_map>
#include <vector>
#include <queue>
#include <limits>
#include <sstream>

using namespace std;

// Structure to represent an edge in the graph
struct Edge {
    string to;
    int weight;
};

// Function to read the transit data from a file and build the graph
unordered_map<string, vector<Edge>> buildGraph(const string& filename) {
    unordered_map<string, vector<Edge>> graph;
    ifstream infile(filename);
    
    if (!infile.is_open()) {
        cerr << "Error: Unable to open file " << filename << endl;
        return graph;
    }
    
    string line;
    while (getline(infile, line)) {
        if(line.empty()) continue; // Skip empty lines
        stringstream ss(line);
        string from, to;
        int weight;
        ss >> from >> to >> weight;
        graph[from].push_back(Edge{to, weight});
        graph[to].push_back(Edge{from, weight}); // Assuming undirected graph
    }
    
    infile.close();
    return graph;
}

// Function to perform Dijkstra's algorithm
pair<vector<string>, int> dijkstra(const unordered_map<string, vector<Edge>>& graph, const string& source, const string& destination) {
    // Priority queue to select the node with the smallest distance
    priority_queue<pair<int, string>, vector<pair<int, string>>, std::greater<pair<int, string>>> pq;
    
    // Distance map
    unordered_map<string, int> distances;
    // Previous node map to reconstruct the path
    unordered_map<string, string> previous;
    
    // Initialize distances to infinity
    for (const auto& pair : graph) {
        distances[pair.first] = numeric_limits<int>::max();
    }
    
    // Distance to source is 0
    distances[source] = 0;
    pq.push({0, source});
    
    while (!pq.empty()) {
        auto current = pq.top();
        pq.pop();
        
        int currentDist = current.first;
        string currentNode = current.second;
        
        // If we reached the destination, stop
        if (currentNode == destination) {
            break;
        }
        
        // Explore neighbors
        for (const auto& edge : graph.at(currentNode)) {
            int newDist = currentDist + edge.weight;
            // If a shorter path to neighbor is found
            if (newDist < distances[edge.to]) {
                distances[edge.to] = newDist;
                previous[edge.to] = currentNode;
                pq.push({newDist, edge.to});
            }
        }
    }
    
    // Reconstruct the path
    vector<string> path;
    if (distances.find(destination) == distances.end() || distances[destination] == numeric_limits<int>::max()) {
        // No path found
        return {path, -1};
    }
    
    string current = destination;
    while (current != source) {
        path.push_back(current);
        if (previous.find(current) == previous.end()) {
            // No path exists
            return {vector<string>(), -1};
        }
        current = previous[current];
    }
    path.push_back(source);
    
    // Reverse the path to start from the source
    reverse(path.begin(), path.end());
    
    return {path, distances[destination]};
}

int main() {
    string filename = "transit.txt";
    unordered_map<string, vector<Edge>> graph = buildGraph(filename);
    
    if (graph.empty()) {
        cerr << "The graph is empty. Please check the transit data file." << endl;
        return 1;
    }
    
    cout << "Welcome to the City Transit Shortest Path Finder!\n" << endl;
    
    string source, destination;
    while (true) {
        cout << "Please enter the source stop: ";
        getline(cin, source);
        if (graph.find(source) != graph.end()) {
            break;
        } else {
            cout << "Source stop \"" << source << "\" does not exist. Please try again.\n";
        }
    }
    
    while (true) {
        cout << "Please enter the destination stop: ";
        getline(cin, destination);
        if (graph.find(destination) != graph.end()) {
            break;
        } else {
            cout << "Destination stop \"" << destination << "\" does not exist. Please try again.\n";
        }
    }
    
    pair<vector<string>, int> result = dijkstra(graph, source, destination);
    
    if (result.second == -1) {
        cout << "\nNo path exists between " << source << " and " << destination << "." << endl;
    } else {
        cout << "\nShortest Path: ";
        for (size_t i = 0; i < result.first.size(); ++i) {
            cout << result.first[i];
            if (i != result.first.size() - 1) cout << " -> ";
        }
        cout << "\nTotal Travel Time: " << result.second << " minutes" << endl;
    }
    
    return 0;
}
