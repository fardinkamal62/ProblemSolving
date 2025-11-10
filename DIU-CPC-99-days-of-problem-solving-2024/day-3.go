package main

import (
	"bufio"
	"fmt"
	"os"
	"slices"
)

// B. Vanya and Lanterns (https://codeforces.com/problemset/problem/492/B) | Difficulty: 1200
// Time: 46ms
// Memory: 100KB

func main() {
	reader := bufio.NewReader(os.Stdin)
	writer := bufio.NewWriter(os.Stdout)
	writer.Flush()

	var n, l int

	fmt.Fscan(reader, &n, &l)

	lightLocations := make([]int, n)
	for i := 0; i < n; i++ {
		fmt.Fscan(reader, &lightLocations[i])
	}

	slices.Sort(lightLocations)

	var averageDistance float64

	for i := 0; i < n-1; i++ {
		distance := float64(lightLocations[i+1] - lightLocations[i])
		if distance > averageDistance {
			averageDistance = distance
		}
	}

	averageDistance /= 2

	if float64(lightLocations[0]) > averageDistance {
		averageDistance = float64(lightLocations[0])
	}

	if float64(l-lightLocations[n-1]) > averageDistance {
		averageDistance = float64(l - lightLocations[n-1])
	}

	fmt.Printf("%.10f\n", averageDistance)
}
