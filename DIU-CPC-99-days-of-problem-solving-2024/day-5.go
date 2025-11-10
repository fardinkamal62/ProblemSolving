package main

import (
	"bufio"
	"fmt"
	"math"
	"os"
)

// A. Theatre Square (https://codeforces.com/problemset/problem/1/A) | Difficulty: 1000
// Time: 62ms
// Memory: 100KB

func main() {
	reader := bufio.NewReader(os.Stdin)
	writer := bufio.NewWriter(os.Stdout)
	writer.Flush()

	var n, m, a int

	fmt.Fscan(reader, &n, &m, &a)

	result := int64(math.Ceil(float64(n)/float64(a)) * math.Ceil(float64(m)/float64(a)))

	fmt.Println(result)
}
