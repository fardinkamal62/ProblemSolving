package main

import (
	"bufio"
	"fmt"
	"os"
)

// J. Waiting for... (https://codeforces.com/problemset/problem/2038/J)
// Time: 100ms
// Memory: 100KB

func main() {
	reader := bufio.NewReader(os.Stdin)
	writer := bufio.NewWriter(os.Stdout)
	defer writer.Flush()

	var tests int
	fmt.Fscan(reader, &tests)

	var peopleOnStop int
	var seatOnBus int
	for i := 0; i < tests; i++ {
		var activity string
		var count int

		fmt.Fscan(reader, &activity, &count)
		if activity == "P" {
			peopleOnStop += count
		}

		if activity == "B" {
			seatOnBus = count
			seatOnBus -= peopleOnStop
			peopleOnStop -= count

			if seatOnBus > 0 {
				fmt.Println("YES")
			} else {
				fmt.Println("NO")
			}

			if peopleOnStop < 0 {
				peopleOnStop = 0
			}
		}
	}
}
