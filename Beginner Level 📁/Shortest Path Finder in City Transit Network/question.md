### **Project Title: Shortest Path Finder in City Transit Network**

#### **Problem Statement**

**Background:**
Urban areas often have complex transit networks comprising various modes of transportation like buses, trains, and trams. Efficiently navigating these networks to find the shortest or least time-consuming path between two points is crucial for commuters.

**Objective:**
Develop a C++ application that models a city's transit network and utilizes Dijkstra's algorithm to determine the shortest path between any two given locations. The program should consider the transit times between stops and provide the most efficient route for the user.

**Requirements:**

1. **Graph Representation:**
   - Model the transit network as a weighted graph where:
     - **Nodes** represent transit stops or stations.
     - **Edges** represent direct transit routes between stops.
     - **Weights** on edges denote the time (in minutes) required to travel between the connected stops.

2. **Input:**
   - **Transit Data File (`transit.txt`):**
     - Each line contains three pieces of information separated by spaces:
       - **Start Stop** (string)
       - **End Stop** (string)
       - **Travel Time** (integer, in minutes)
     - Example:
       ```
       A B 5
       A C 10
       B D 3
       C D 1
       D E 2
       ```
   - **User Input:**
     - **Source Stop:** The starting point for the journey.
     - **Destination Stop:** The endpoint for the journey.

3. **Output:**
   - **Shortest Path:**
     - Display the sequence of stops from the source to the destination.
   - **Total Travel Time:**
     - Display the cumulative travel time for the shortest path.

4. **Functionality:**
   - Read and parse the transit data file to build the graph.
   - Prompt the user to enter the source and destination stops.
   - Validate user input to ensure that the stops exist in the network.
   - Implement Dijkstra's algorithm to compute the shortest path based on travel time.
   - Handle cases where no path exists between the chosen stops.

5. **Additional Features (Optional):**
   - Allow the user to input custom transit data.
   - Display all possible paths along with their travel times.
   - Provide options to choose different optimization criteria (e.g., least number of stops).

**Sample Run:**

```
Welcome to the City Transit Shortest Path Finder!

Please enter the source stop: A
Please enter the destination stop: E

Shortest Path: A -> B -> D -> E
Total Travel Time: 10 minutes
```