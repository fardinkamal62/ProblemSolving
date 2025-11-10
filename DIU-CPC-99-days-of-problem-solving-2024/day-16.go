package main

import (
	"bufio"
	"fmt"
	"os"
)

// A. Sakurako and Kosuke (https://codeforces.com/problemset/problem/2033/A) | Difficulty: 800
// Time: 30ms
// Memory: 0KB

func main() {
	reader := bufio.NewReader(os.Stdin)
	writer := bufio.NewWriter(os.Stdout)
	defer writer.Flush()

	var tests int
	fmt.Fscan(reader, &tests)

	for i := 0; i < tests; i++ {
		var n int
		fmt.Fscan(reader, &n)

		var turn = 1
		var current = 0
		var currentNumber = 1
		for j := 0; j <= n; j++ {
			if turn == 1 {
				current += currentNumber * (-1)
				turn = 2
			} else {
				current += currentNumber
				turn = 1
			}
		}

		if turn == 1 {
			fmt.Fprintln(writer, "Kosuke")
		} else {
			fmt.Fprintln(writer, "Sakurako")
		}
	}
}
