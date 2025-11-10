package main

import (
	"bufio"
	"fmt"
	"os"
)

// Xenia and Ringroad (https://codeforces.com/problemset/problem/339/B) | Difficulty: 1000
// Time: 186ms
// Memory: 1600KB

func main() {
	reader := bufio.NewReader(os.Stdin)
	writer := bufio.NewWriter(os.Stdout)
	writer.Flush()

	var n, m int
	xeniaHouse := 1
	steps := 0

	fmt.Fscan(reader, &n, &m)

	for i := 0; i < m; i++ {
		var taskHouse int
		fmt.Fscan(reader, &taskHouse)

		steps += (taskHouse - xeniaHouse + n) % n
		xeniaHouse = taskHouse
	}

	fmt.Println(steps)
}
