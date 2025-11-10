package main

import (
	"bufio"
	"fmt"
	"os"
)

func main() {
	reader := bufio.NewReader(os.Stdin)
	writer := bufio.NewWriter(os.Stdout)
	defer writer.Flush()

	var years int
	fmt.Fscan(reader, &years)

	if years == 2 {
		fmt.Println(1)
	} else if years%2 == 0 {
		fmt.Println(2)
	} else if isPrime(years) {
		fmt.Println(1)
	} else if isPrime(years - 2) {
		fmt.Println(2)
	} else {
		fmt.Println(3)
	}
}

func isPrime(n int) bool {
	if n <= 1 {
		return false
	}
	if n <= 3 {
		return true
	}
	if n%2 == 0 || n%3 == 0 {
		return false
	}
	for i := 5; i*i <= n; i = i + 6 {
		if n%i == 0 || n%(i+2) == 0 {
			return false
		}
	}
	return true
}
