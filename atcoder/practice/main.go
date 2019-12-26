package main

import (
	"fmt"
)

func main() {
	var x, y, z int
	var s string

	fmt.Scanf("%d", &x)
	fmt.Scanf("%d%d", &y, &z)
	fmt.Scanf("%s", &s)
	fmt.Printf("%d %s\n", x+y+z, s)
}
