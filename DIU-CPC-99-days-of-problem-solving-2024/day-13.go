package main

import (
	"bufio"
	"fmt"
	"os"
)

// A. Alice's Adventures in Chess (https://codeforces.com/problemset/problem/2028/A)
// Time: 217ms
// Memory: 4600KB

func solve(reader *bufio.Reader, writer *bufio.Writer) {
	var n, a, b int
	fmt.Fscan(reader, &n, &a, &b)

	targetCordsX := a
	targetCordsY := b

	currentCordsX := 0
	currentCordsY := 0

	var movesString string
	fmt.Fscan(reader, &movesString)

	moves := make([]string, n)

	for i := 0; i < len(movesString); i++ {
		moves[i] = string(movesString[i])
	}

	for i := 0; i < 100; i++ {
		for j := 0; j < n; j++ {
			if moves[j] == "N" {
				currentCordsY++
			} else if moves[j] == "E" {
				currentCordsX++
			} else if moves[j] == "S" {
				currentCordsY--
			} else if moves[j] == "W" {
				currentCordsX--
			}

			if currentCordsX == targetCordsX && currentCordsY == targetCordsY {
				fmt.Println("YES")
				return
			}
		}
	}

	fmt.Println("NO")
}

func main() {
	reader := bufio.NewReader(os.Stdin)
	writer := bufio.NewWriter(os.Stdout)
	defer writer.Flush()

	var tests int
	fmt.Fscan(reader, &tests)

	for i := 0; i < tests; i++ {
		solve(reader, writer)
	}
}
