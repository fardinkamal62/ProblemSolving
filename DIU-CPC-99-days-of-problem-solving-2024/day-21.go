package main

import (
	"bufio"
	"fmt"
	"os"
)

// N. Fixing the Expression (https://codeforces.com/problemset/problem/2038/N)
// Time: 46ms
// Memory: 0KB

func main() {
	reader := bufio.NewReader(os.Stdin)
	writer := bufio.NewWriter(os.Stdout)
	defer writer.Flush()

	var tests int
	fmt.Fscan(reader, &tests)

	for i := 0; i < tests; i++ {
		var str string
		fmt.Fscan(reader, &str)

		a := string(str[0])
		c := string(str[2])

		if a > c {
			fmt.Fprintln(writer, a+">"+c)
		} else if a == c {
			fmt.Fprintln(writer, a+"="+c)
		} else {
			fmt.Fprintln(writer, a+"<"+c)
		}
	}
}
