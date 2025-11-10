package main

import (
	"bufio"
	"fmt"
	"os"
)

// A. Penchick and Modern Monument (https://codeforces.com/problemset/problem/2031/A)
// Time: 46ms
// Memory: 400KB

func main() {
	reader := bufio.NewReader(os.Stdin)
	writer := bufio.NewWriter(os.Stdout)
	defer writer.Flush()

	var tests int
	fmt.Fscan(reader, &tests)

	for i := 0; i < tests; i++ {
		var pillarLength int
		var pillars []int

		fmt.Fscan(reader, &pillarLength)
		for j := 0; j < pillarLength; j++ {
			var pillar int
			fmt.Fscan(reader, &pillar)
			pillars = append(pillars, pillar)
		}

		if pillarLength == 1 {
			fmt.Fprintln(writer, 0)
			continue
		}

		var freq = make(map[int]int)

		maxFreq := 0
		for _, num := range pillars {
			freq[num] = freq[num] + 1
			maxFreq = max(maxFreq, freq[num])
		}

		fmt.Fprintln(writer, pillarLength-maxFreq)
	}
}
