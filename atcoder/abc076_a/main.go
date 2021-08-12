package main

import (
	"fmt"
)

func main() {
	var r int
	var g int

	fmt.Scan(&r)
	fmt.Scan(&g)
	fmt.Print(2*g - r)
}
