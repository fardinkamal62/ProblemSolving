package main

import (
	"bufio"
	"fmt"
	"os"
)

// A. The Bento Box Adventure (https://codeforces.com/problemset/problem/2041/A)
// Time: 61ms
// Memory: 100KB

func main() {
	reader := bufio.NewReader(os.Stdin)
	writer := bufio.NewWriter(os.Stdout)
	defer writer.Flush()

	var res1, res2, res3, res4 int

	fmt.Fscan(reader, &res1, &res2, &res3, &res4)

	fmt.Println(15 - (res1 + res2 + res3 + res4))
}
