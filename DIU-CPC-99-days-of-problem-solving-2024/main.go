package main

import "fmt"

func main() {
	problemList := []string{
		"Day-1: Arrival of the General (https://codeforces.com/problemset/problem/144/A)",
		"Day-2: Xenia and Ringroad (https://codeforces.com/problemset/problem/339/B)",
		"Day-3: Vanya and Lanterns (https://codeforces.com/problemset/problem/492/B)",
		"Day-4: Sum of Round Numbers (https://codeforces.com/problemset/problem/1352/A)",
		"Day-5: Theatre Square (https://codeforces.com/problemset/problem/1/A)",
		"Day-6: Fair Division (https://codeforces.com/problemset/problem/1472/B)",
		"Day-7: Multiplication Dilemma (https://codeforces.com/problemset/gymProblem/101972/A)",
		"Day-8: Cyclic Shift (https://codeforces.com/gym/101972/problem/K)",
		"Day-9: Marathon (https://codeforces.com/problemset/problem/1692/A)",
		"Day-10: Lucky? (https://codeforces.com/problemset/problem/1676/A)",
		"Day-11: Quintomania (https://codeforces.com/problemset/problem/2036/A)",
		"Day-12: Startup (https://codeforces.com/problemset/problem/2036/B)",
		"Day-13: A. Alice's Adventures in Chess (https://codeforces.com/problemset/problem/2028/A)",
		"Day-14: B. Everyone Loves Tres (https://codeforces.com/problemset/problem/2035/B)",
		"Day-15: A. Penchick and Modern Monument (https://codeforces.com/problemset/problem/2031/A)",
		"Day-16: A. Sakurako and Kosuke (https://codeforces.com/problemset/problem/2033/A)",
		"Day-17: A. Twice (https://codeforces.com/problemset/problem/2037/A)",
		"Day-18: B. Intercepted Inputs (https://codeforces.com/problemset/problem/2037/B)",
		"Day-19: A. Polycarp and Sums of Subsequences (https://codeforces.com/contest/1618/problem/A)",
		"Day-20: C. Superultra's Favourite Permutation (https://codeforces.com/contest/2037/problem/C)",
		"Day-21: N. Fixing the Expression (https://codeforces.com/problemset/problem/2038/N)",
		"Day-22: A. Remove Smallest (https://codeforces.com/problemset/problem/1399/A)",
		"Day-23: J. Waiting for... (https://codeforces.com/problemset/problem/2038/J)",
		"Day-24: Shohag Loves XOR (Easy Version) (https://codeforces.com/contest/2039/problem/C1)",
		"Day-25: A. The Bento Box Adventure (https://codeforces.com/problemset/problem/2041/A)",
		"Day-26: A. Circuit (https://codeforces.com/problemset/problem/2032/A)",
	}

	fmt.Println("Hello! Welcome to my solutions of DIU CPC 99 Days of Problem Solving")
	fmt.Printf("\nDays completed: %d\n", len(problemList))

	fmt.Println("Problem List:")
	for _, problem := range problemList {
		fmt.Println(problem)
	}
}
