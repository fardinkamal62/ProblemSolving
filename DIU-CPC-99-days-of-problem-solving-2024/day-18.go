package main

import (
	"bufio"
	"fmt"
	"os"
)

// B. Intercepted Inputs (https://codeforces.com/problemset/problem/2037/B)
// Time: 139ms
// Memory: 4500KB

func main() {
	reader := bufio.NewReader(os.Stdin)
	writer := bufio.NewWriter(os.Stdout)
	defer writer.Flush()

	var tests int
	fmt.Fscan(reader, &tests)

	for i := 0; i < tests; i++ {
		var k int
		fmt.Fscan(reader, &k)

		freq := make([]int, k+1)
		for i := 0; i < k; i++ {
			var x int
			fmt.Fscan(reader, &x)
			freq[x]++
		}

		solution := []int{-1, -1}
		for i := 1; i <= k; i++ {
			if i*i == k-2 {
				if freq[i] > 1 {
					solution = []int{i, i}
				}
			} else if (k-2)%i == 0 {
				if freq[i] > 0 && freq[(k-2)/i] > 0 {
					solution = []int{i, (k - 2) / i}
				}
			}
		}

		fmt.Println(solution[0], solution[1])

	}
}
