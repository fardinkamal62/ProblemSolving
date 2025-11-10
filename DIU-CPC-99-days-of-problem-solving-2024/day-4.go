package main

import (
	"bufio"
	"fmt"
	"math"
	"os"
)

// A. Sum of Round Numbers (https://codeforces.com/problemset/problem/1352/A) | Difficulty: 800
// Time: 108ms
// Memory: 100KB

func main() {
	reader := bufio.NewReader(os.Stdin)
	writer := bufio.NewWriter(os.Stdout)
	writer.Flush()

	var n int

	fmt.Fscan(reader, &n)

	for i := 0; i < n; i++ {
		var num int
		fmt.Fscan(reader, &num)

		lengthOfNum := len(fmt.Sprint(num))
		divisor := int(math.Pow(10, float64(lengthOfNum-1)))

		var roundNumbers []int
		numberOfDivisors := 0

		for divisor > 0 {
			divident := num % divisor
			if divident != 0 {
				divisor /= 10
				if (num - divident) != 0 {
					numberOfDivisors += 1
					roundNumbers = append(roundNumbers, num-divident)
					num = divident
				}
			} else {
				divisor /= 10
			}
		}

		roundNumbers = append(roundNumbers, num)
		numberOfDivisors += 1

		fmt.Println(numberOfDivisors)
		for _, roundNumber := range roundNumbers {
			fmt.Print(roundNumber, " ")
		}
		fmt.Println()
	}
}
