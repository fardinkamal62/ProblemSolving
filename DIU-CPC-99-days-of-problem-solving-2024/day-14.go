package main

import (
	"bufio"
	"fmt"
	"os"
	"strings"
)

// B. Everyone Loves Tres (https://codeforces.com/problemset/problem/2035/B) | Difficulty: 800
// Time: 217ms
// Memory: 4600KB

func main() {
	reader := bufio.NewReader(os.Stdin)
	writer := bufio.NewWriter(os.Stdout)
	defer writer.Flush()

	var tests int
	fmt.Fscan(reader, &tests)

	for i := 0; i < tests; i++ {
		var n int
		fmt.Fscan(reader, &n)

		if n == 1 || n == 3 {
			fmt.Println(-1)
		} else if n%2 != 0 {
			fmt.Println(strings.Repeat("3", n-5) + "36366")
		} else if n%2 == 0 {
			fmt.Println(strings.Repeat("3", n-2) + "66")
		}
	}
}
