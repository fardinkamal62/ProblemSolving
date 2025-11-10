package main

import (
	"bufio"
	"fmt"
	"os"
)

// C. Superultra's Favourite Permutation (https://codeforces.com/contest/2037/problem/C)
// Time: 46ms
// Memory: 1600KB

func main() {
	reader := bufio.NewReader(os.Stdin)
	writer := bufio.NewWriter(os.Stdout)
	defer writer.Flush()

	var tests int
	fmt.Fscan(reader, &tests)

	for i := 0; i < tests; i++ {
		var n int
		fmt.Fscan(reader, &n)

		if n < 5 {
			fmt.Fprintln(writer, -1)
			continue
		}

		for j := 2; j <= n; j += 2 {
			if j != 4 {
				fmt.Fprint(writer, j, " ")
			}
		}
		fmt.Fprint(writer, "4 5")

		for j := 1; j <= n; j += 2 {
			if j != 5 {
				fmt.Fprint(writer, " ", j)
			}
		}
		fmt.Fprintln(writer)
	}
}
