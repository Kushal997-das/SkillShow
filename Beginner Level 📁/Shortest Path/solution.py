import heapq

def dijkstra(graph, start, end):
    distances = {node: float('inf') for node in graph}
    distances[start] = 0
    previous = {node: None for node in graph}
    queue = [(0, start)]

    while queue:
        current_distance, current_node = heapq.heappop(queue)

        if current_distance > distances[current_node]:
            continue

        for neighbor, weight in graph[current_node].items():
            distance = current_distance + weight

            if distance < distances[neighbor]:
                distances[neighbor] = distance
                previous[neighbor] = current_node
                heapq.heappush(queue, (distance, neighbor))

    path = []
    current_node = end
    while current_node:
        path.append(current_node)
        current_node = previous[current_node]

    return path[::-1], distances[end]


# Define the graph
graph = {
    'A': {'B': 4, 'C': 2},
    'B': {'C': 1, 'D': 5},
    'C': {'D': 3, 'E': 2},
    'D': {'E': 1},
    'E': {}
}

start_node = 'A'
end_node = 'E'

shortest_path, total_weight = dijkstra(graph, start_node, end_node)
print(f"Shortest path: {' -> '.join(shortest_path)}")
print(f"Total weight: {total_weight}")
