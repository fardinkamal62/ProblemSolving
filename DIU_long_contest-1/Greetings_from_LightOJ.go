package main

import (
	"bufio"
	"fmt"
	"os"
)

func main() {
	reader := bufio.NewReader(os.Stdin)
	writer := bufio.NewWriter(os.Stdout)
	defer writer.Flush()

	var tests int
	fmt.Fscan(reader, &tests)

	for i := 0; i < tests; i++ {
		var number1, number2 int
		fmt.Fscan(reader, &number1, &number2)
		fmt.Printf("Case %d: %d\n", i+1, number1+number2)
	}
}
