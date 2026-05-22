package main

import (
	"fmt"
)

func minimumSum(num int) int {
	a := num % 10
	num /= 10
	b := num % 10
	num /= 10
	c := num % 10
	num /= 10
	d := num % 10

	if a > b {
		a, b = b, a
	}
	if c > d {
		c, d = d, c
	}
	if a > c {
		a, c = c, a
	}
	if b > d {
		b, d = d, b
	}
	if b > c {
		b, c = c, b
	}

	return a*10 + c + b*10 + d

}

func main() {
	num := 4009
	fmt.Println(minimumSum(num))
}
