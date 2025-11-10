package main

import (
	"bufio"
	"fmt"
	"os"
)

// A. Circuit (https://codeforces.com/problemset/problem/2032/A)
// Time: 61ms
// Memory: 300KB

func main() {
	reader := bufio.NewReader(os.Stdin)
	writer := bufio.NewWriter(os.Stdout)
	defer writer.Flush()

	var tests int
	fmt.Fscan(reader, &tests)

	for i := 0; i < tests; i++ {
		var lights, circuits int
		fmt.Fscan(reader, &lights)
		circuits = lights * 2

		var ans = 0
		for j := 0; j < circuits; j++ {
			var state int
			fmt.Fscan(reader, &state)

			ans += state
		}

		maxLights := 0
		if ans <= lights {
			maxLights = ans
		} else {
			maxLights = 2*lights - ans
		}

		fmt.Println(ans&1, maxLights)
	}
}
