function maxCapacityType(arr) {
    let maxCapacity = -1; // Start with a low capacity
    let maxType = ''; // This will store the type of car with the max capacity

    for (let i = 0; i < arr.length; i++) {
        const currentCapacity = arr[i].capacity; // Get the current car's capacity
        
        // If this car's capacity is greater than the max found so far
        if (currentCapacity > maxCapacity) {
            maxCapacity = currentCapacity; // Update max capacity
            maxType = arr[i].type; // Update the type of car
        }
    }

    return maxType; // Return the type of car with the highest capacity
}

// Example usage:
console.log(maxCapacityType([
    { color: 'red', type: 'Station Wagon', capacity: 5 },
    { color: 'green', type: 'Convertible', capacity: 2 },
    { color: 'white', type: 'MiniVan', capacity: 4 }
])); // Output: 'Station Wagon'
