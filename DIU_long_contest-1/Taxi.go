package main

import (
	"fmt"
)

func main() {
	var n int
	fmt.Scan(&n)

	counter := make([]int, 5)

	for i := 0; i < n; i++ {
		var x int
		fmt.Scan(&x)
		counter[x]++
	}

	totalTaxi := counter[4] + counter[3] + (counter[2] / 2)
	counter[1] -= counter[3]

	if counter[2]%2 == 1 {
		totalTaxi += 1
		counter[1] -= 2
	}
	if counter[1] > 0 {
		totalTaxi += (counter[1] + 3) / 4
	}

	fmt.Println(totalTaxi)
}
