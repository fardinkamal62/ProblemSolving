package main

import (
	"bufio"
	"fmt"
	"os"
)

// A. Polycarp and Sums of Subsequences (https://codeforces.com/contest/1618/problem/A)
// Time: 61ms
// Memory: 1300KB

func main() {
	reader := bufio.NewReader(os.Stdin)
	writer := bufio.NewWriter(os.Stdout)
	defer writer.Flush()

	var tests int
	fmt.Fscan(reader, &tests)

	for i := 0; i < tests; i++ {
		var arr []int

		for j := 0; j < 7; j++ {
			var x int
			fmt.Fscan(reader, &x)
			arr = append(arr, x)
		}

		a := arr[0]
		b := arr[1]
		c := arr[len(arr)-1] - a - b

		fmt.Println(a, b, c)
	}
}
