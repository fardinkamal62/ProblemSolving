package main

import (
	"fmt"
)

// Memoization
// Storing the data for later use
// Will use Go maps to do so
// Key would be 'n', value would be the result returned

func main() {
	var n int
	var result int
	resultMap := make(map[int]int)

	// Old
	fmt.Scanf("%d", &n)
	// result = fibonacci(n)
	result = fib(n, &resultMap)
	fmt.Printf("%d", result)
}

// Old, unoptimized
func fibonacci(n int) int {
	if n <= 2 {
		return 1
	}
	return fibonacci(n-1) + fibonacci(n-2)
}

// New, optimized
func fib(n int, resultMap *map[int]int) int {
	if (*resultMap)[n] != 0 {
		return (*resultMap)[n]
	}
	if n <= 2 {
		return 1
	}
	(*resultMap)[n] = fib(n-1, resultMap) + fib(n-2, resultMap)
	return (*resultMap)[n]
}
