package main

import (
	"bufio"
	"fmt"
	"os"
)

// A. Marathon (https://codeforces.com/problemset/problem/1692/A) | Difficulty: 800
// Time: 62ms
// Memory: 500KB

func main() {
	reader := bufio.NewReader(os.Stdin)
	writer := bufio.NewWriter(os.Stdout)
	defer writer.Flush()

	var n int
	fmt.Fscan(reader, &n)

	for i := 0; i < n; i++ {
		var a, b, c, d int
		fmt.Fscan(reader, &a, &b, &c, &d)

		front := 0

		if b > a {
			front++
		}
		if c > a {
			front++
		}
		if d > a {
			front++
		}

		fmt.Println(front)
	}
}
