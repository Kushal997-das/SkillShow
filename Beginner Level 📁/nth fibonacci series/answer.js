function findFibonacci(n) {
    // Base cases
    if (n === 0) return 0;
    if (n === 1) return 1;

    let a = 0; // F(0)
    let b = 1; // F(1)

    // Loop to calculate Fibonacci from 2 to n
    for (let i = 2; i <= n; i++) {
        // Calculate the next Fibonacci number
        const fib = a + b; // F(i) = F(i-1) + F(i-2)
        a = b; // Move to the next Fibonacci number
        b = fib; // Update b to the current Fibonacci number
    }

    return b; // Return the nth Fibonacci number
}

// Example usage:
console.log(findFibonacci(2)); // Output: 1
console.log(findFibonacci(4)); // Output: 3
console.log(findFibonacci(5)); // Output: 5
console.log(findFibonacci(10)); // Output: 55
