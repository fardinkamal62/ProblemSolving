package main

import (
	"bufio"
	"fmt"
	"os"
	"slices"
)

// A. Remove Smallest (https://codeforces.com/problemset/problem/1399/A)
// Time: 61ms
// Memory: 300KB

func main() {
	reader := bufio.NewReader(os.Stdin)
	writer := bufio.NewWriter(os.Stdout)
	defer writer.Flush()

	var tests int
	fmt.Fscan(reader, &tests)

	for i := 0; i < tests; i++ {
		var numbers int

		fmt.Fscan(reader, &numbers)

		arr := make([]int, numbers)

		for j := 0; j < numbers; j++ {
			fmt.Fscan(reader, &arr[j])
		}

		slices.Sort(arr)

		possible := true

		for j := 1; j < numbers; j++ {
			if arr[j]-arr[j-1] > 1 {
				possible = false
				break
			}
		}

		if possible {
			fmt.Fprintln(writer, "YES")
		} else {
			fmt.Fprintln(writer, "NO")
		}
	}
}
