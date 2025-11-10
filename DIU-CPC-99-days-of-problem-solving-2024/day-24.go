package main

import (
	"bufio"
	"fmt"
	"os"
)

// 2039C1 - Shohag Loves XOR (Easy Version) (https://codeforces.com/contest/2039/problem/C1)
// Time: 390ms
// Memory: 500KB

func main() {
	reader := bufio.NewReader(os.Stdin)
	writer := bufio.NewWriter(os.Stdout)
	defer writer.Flush()

	var tests int
	fmt.Fscan(reader, &tests)

	for i := 0; i < tests; i++ {
		var x int
		var m int64
		fmt.Fscan(reader, &x, &m)

		ans := 0
		for y := int64(1); y <= int64(min(2*x, int(m))); y++ {
			if x != int(y) && (x%(x^int(y)) == 0 || int(y)%(x^int(y)) == 0) {
				ans++
			}
		}
		fmt.Fprintln(writer, ans)
	}
}
