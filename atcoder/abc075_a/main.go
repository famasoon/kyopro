package main

import "fmt"

func main() {
	var a int
	var b int
	var c int

	fmt.Scan(&a, &b, &c)

	if a == b {
		fmt.Print(c)
	} else if a == c {
		fmt.Print(b)
	} else {
		fmt.Print(a)
	}
}
