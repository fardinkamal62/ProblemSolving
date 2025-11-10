package main

import (
	"bufio"
	"fmt"
	"os"
)

// Arrival of the General (https://codeforces.com/problemset/problem/144/A) | Difficulty: 800
// Time: 92ms
// Memory: 100KB

func day1() {
	reader := bufio.NewReader(os.Stdin)
	writer := bufio.NewWriter(os.Stdout)
	writer.Flush()

	testCases := 0
	fmt.Fscan(reader, &testCases)

	minIndex := 0
	maxIndex := 0
	minHeight := 101
	maxHeight := 0
	soldiers := make([]int, testCases)
	for i := 0; i < testCases; i++ {
		fmt.Fscan(reader, &soldiers[i])
		soldierHeight := soldiers[i]

		if soldierHeight > maxHeight {
			maxHeight = soldierHeight
			maxIndex = i
		}
		if soldierHeight <= minHeight {
			minHeight = soldierHeight
			minIndex = i
		}
	}

	if maxIndex > minIndex {
		fmt.Println(maxIndex + ((testCases - 2) - minIndex))
	} else {
		fmt.Println(maxIndex + ((testCases - 1) - minIndex))
	}
}
