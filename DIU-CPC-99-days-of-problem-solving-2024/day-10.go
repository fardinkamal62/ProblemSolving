package main

import (
	"bufio"
	"fmt"
	"os"
)

// A. Lucky? (https://codeforces.com/problemset/problem/1676/A) | Difficulty: 800
// Time: 62ms
// Memory: 200KB

func main() {
	reader := bufio.NewReader(os.Stdin)
	writer := bufio.NewWriter(os.Stdout)
	defer writer.Flush()

	var n int
	fmt.Fscan(reader, &n)

	for i := 0; i < n; i++ {
		var numberString string
		fmt.Fscan(reader, &numberString)

		digits := splitToDigits(numberString)
		firstPart := 0
		secondPart := 0

		for j := 0; j < len(digits); j++ {
			if j < len(digits)/2 {
				firstPart += digits[j]
			} else {
				secondPart += digits[j]
			}
		}

		if firstPart == secondPart {
			fmt.Fprintln(writer, "YES")
		} else {
			fmt.Fprintln(writer, "NO")
		}
	}
}

func reverseInt(s []int) {
	for i, j := 0, len(s)-1; i < j; i, j = i+1, j-1 {
		s[i], s[j] = s[j], s[i]
	}
}

func splitToDigits(n string) []int {
	var ret []int

	for _, c := range n {
		ret = append(ret, int(c-'0'))
	}

	reverseInt(ret)

	return ret
}
