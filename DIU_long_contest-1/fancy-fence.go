package main

import (
	"bufio"
	"fmt"
	"math"
	"os"
)

func main() {
	reader := bufio.NewReader(os.Stdin)
	writer := bufio.NewWriter(os.Stdout)
	defer writer.Flush()

	var turns int
	fmt.Fscan(reader, &turns)

	for i := 0; i < turns; i++ {
		var input int
		fmt.Fscan(reader, &input)
		var numberOfSides = 360 / (180 - float64(input))

		if numberOfSides == math.Trunc(numberOfSides) {
			fmt.Println("YES")
		} else {
			fmt.Println("NO")
		}
	}
}
