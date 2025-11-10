package main

import (
	"bufio"
	"fmt"
	"os"
)

// Cyclic Shift (https://codeforces.com/gym/101972/problem/K)
// Gym Problem (https://codeforces.com/gym/101972)
// Time: 186ms
// Memory: 10100KB

func main() {
	reader := bufio.NewReader(os.Stdin)
	writer := bufio.NewWriter(os.Stdout)
	defer writer.Flush()

	var tests int
	fmt.Fscan(reader, &tests)

	for i := 0; i < tests; i++ {
		var lengthOfString int
		fmt.Fscan(reader, &lengthOfString)

		var stringA string
		fmt.Fscan(reader, &stringA)

		var stringB string
		fmt.Fscan(reader, &stringB)

		var differingChars []struct {
			index int
			char  byte
		}

		for j := 0; j < lengthOfString; j++ {
			if stringA[j] != stringB[j] {
				differingChars = append(differingChars, struct {
					index int
					char  byte
				}{index: j, char: stringB[j]})
			}
		}

		bSlice := []byte(stringB)

		for j := 0; j < len(differingChars); j++ {
			fmt.Println((j + 1) % len(differingChars))
			nextIndex := differingChars[(j+1)%len(differingChars)].index
			currentChar := differingChars[j].char
			bSlice[nextIndex] = currentChar
		}

		stringB = string(bSlice)

		if stringB == stringA {
			fmt.Println("YES")
		} else {
			fmt.Println("NO")
		}

	}
}
