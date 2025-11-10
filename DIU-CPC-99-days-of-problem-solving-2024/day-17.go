package main

import (
	"bufio"
	"fmt"
	"os"
)

// A. Twice (https://codeforces.com/problemset/problem/2037/A)
// Time: 46ms
// Memory: 200KB

func main() {
	reader := bufio.NewReader(os.Stdin)
	writer := bufio.NewWriter(os.Stdout)
	defer writer.Flush()

	var tests int
	fmt.Fscan(reader, &tests)

	for i := 0; i < tests; i++ {
		var n int
		fmt.Fscan(reader, &n)

		var arr = make([]int, n)
		var frequency = make(map[int]int)
		for j := 0; j < n; j++ {
			fmt.Fscan(reader, &arr[j])
			if _, ok := frequency[arr[j]]; ok {
				frequency[arr[j]]++
			} else {
				frequency[arr[j]] = 1
			}
		}

		score := 0
		for _, v := range frequency {
			score += v / 2
		}

		fmt.Fprintln(writer, score)
	}
}
