package main

import (
	"bufio"
	"fmt"
	"os"
)

// A. Multiplication Dilemma (https://codeforces.com/problemset/gymProblem/101972/A)
// Gym Problem (https://codeforces.com/gym/101972)
// Time: 62ms
// Memory: 600KB

func main() {
	reader := bufio.NewReader(os.Stdin)
	writer := bufio.NewWriter(os.Stdout)
	defer writer.Flush()

	var n int
	fmt.Fscan(reader, &n)

	for i := 0; i < n; i++ {
		var a, b int
		fmt.Fscan(reader, &a, &b)

		modulo := b % 10

		if modulo != 0 {
			a, b = b, a
		} else {
			modulo = a % 10
		}

		fmt.Printf("%d x %d + %d x %d\n", a-modulo, b, modulo, b)
	}
}
