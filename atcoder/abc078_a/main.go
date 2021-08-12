package main

import (
	"fmt"
	"strings"
)

func main() {
	var x, y string

	fmt.Scan(&x)
	fmt.Scan(&y)

	var result = strings.Compare(x, y)

	if result == -1 {
		fmt.Print("<")
	} else if result == 1 {
		fmt.Print(">")
	} else {
		fmt.Print("=")
	}
}
