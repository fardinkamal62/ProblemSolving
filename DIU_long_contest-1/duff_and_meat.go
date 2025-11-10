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

	var days int
	fmt.Fscan(reader, &days)

	requirementMap := make(map[int]int)
	priceMap := make(map[int]int)

	for i := 0; i < days; i++ {
		var meatRequirement int
		var meatPrice int
		fmt.Fscan(reader, &meatRequirement)
		fmt.Fscan(reader, &meatPrice)
		requirementMap[i] = meatRequirement
		priceMap[i] = meatPrice
	}
	var money int
	var lowestRate = priceMap[0]
	for i := 0; i < days; i++ {
		if priceMap[i] < lowestRate {
			lowestRate = priceMap[i]
		}
		money += requirementMap[i] * lowestRate
	}
	fmt.Println(money)
}
