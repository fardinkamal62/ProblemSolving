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

	var children int
	fmt.Fscan(reader, &children)

	var taxis int
	for i := 0; i < children; i++ {
		var group int
		fmt.Fscan(reader, &group)

		if group == 4 {
			taxis++
			children -= 4
		}

	}
}
