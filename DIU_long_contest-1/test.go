package main

import "fmt"

func main() {
	var dynamicArray []int
	var staticArray = []int{5, 6, 7, 8}

	dynamicArray = append(dynamicArray, 1)
	dynamicArray = append(dynamicArray, 2)
	dynamicArray = append(dynamicArray, 3)

	fmt.Println(dynamicArray)
	fmt.Println(staticArray)
}
