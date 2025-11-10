package main

import (
	"fmt"
	"math"
)

func main() {
	var t int
	fmt.Scan(&t)
	for i := 1; i <= t; i++ {
		var r1, r2, r3 float64
		fmt.Scan(&r1, &r2, &r3)

		a := r1 + r2
		b := r1 + r3
		c := r2 + r3
		s := (a + b + c) / 2.0
		triArea := math.Sqrt(s * (s - a) * (s - b) * (s - c)) // Area of Triangle, ABC

		angle1 := math.Acos((a*a + b*b - c*c) / (2 * a * b))
		angle2 := math.Acos((a*a + c*c - b*b) / (2 * a * c))
		angle3 := math.Acos((b*b + c*c - a*a) / (2 * b * c))

		sector1 := 0.5 * r1 * r1 * angle1
		sector2 := 0.5 * r2 * r2 * angle2
		sector3 := 0.5 * r3 * r3 * angle3

		ans := triArea - (sector1 + sector2 + sector3)
		fmt.Printf("Case %d: %.10f\n", i, ans)
	}
}
