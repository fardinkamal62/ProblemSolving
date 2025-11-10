package main

import (
	"bufio"
	"fmt"
	"os"
)

// B. Fair Division (https://codeforces.com/problemset/problem/1472/B) | Difficulty: 800
// Time: 77ms
// Memory: 900KB

func main() {
	reader := bufio.NewReader(os.Stdin)
	writer := bufio.NewWriter(os.Stdout)
	defer writer.Flush()

	var t int
	fmt.Fscan(reader, &t)

	for i := 0; i < t; i++ {
		var n int
		fmt.Fscan(reader, &n)

		a := make([]int, n)
		sum := 0
		unique := make(map[int]bool)

		for j := 0; j < n; j++ {
			fmt.Fscan(reader, &a[j])
			sum += a[j]
			unique[a[j]] = true
		}

		if sum%2 != 0 {
			fmt.Println("NO")
		} else {
			if n%2 != 0 && len(unique) == 1 {
				fmt.Println("NO")
			} else {
				fmt.Println("YES")
			}
		}
	}
}
