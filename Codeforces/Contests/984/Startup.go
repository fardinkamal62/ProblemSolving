package main

import (
	"bufio"
	"fmt"
	"os"
	"sort"
)


func min(a, b int) int {
	if a < b {
		return a
	}
	return b
}

func main() {
	reader := bufio.NewReader(os.Stdin)
	writer := bufio.NewWriter(os.Stdout)
	defer writer.Flush()

	var tests int
	fmt.Fscan(reader, &tests)

	for i := 0; i < tests; i++ {
		var n, k int
		fmt.Fscan(reader, &n, &k)

		brandCost := make([]int, k)

		for j := 0; j < k; j++ {
			var b, c int
			fmt.Fscan(reader, &b, &c)
			brandCost[b-1] += c
		}

		// Sort brandCost in descending order
		sort.Slice(brandCost, func(i, j int) bool {
			return brandCost[i] > brandCost[j]
		})

		var ans int64
		for j := 0; j < min(n, k); j++ {
			ans += int64(brandCost[j])
		}

		fmt.Fprintln(writer, ans)
	}
}
