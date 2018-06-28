package main

import (
	"fmt"
)

func main() {
	selfDividingNumbers(1, 10000)
}

func selfDividingNumbers(left int, right int) []int {

	//vars
	var arr []int
	i := 0
	j := 0
	k := 0
	m := 0

	for left <= right {

		//for readability sake
		i = left / 10
		j = left % 10
		k = i % 10
		m = i / 10

		//ignores all numbs that end in 0
		if j != 0 && left%j == 0 {
			/* 1. Pretty much just itterates through the range and checks the number based on the size if there's any 0's in between (using a bunch of divisions and modulus)
			Also checks if it*/
			if left < 10 {
				arr = append(arr, left)
			} else if left < 100 && left%(i) == 0 {
				arr = append(arr, left)
			} else if left < 1000 && k != 0 && left%k == 0 && m%10 != 0 && left%(m%10) == 0 {
				arr = append(arr, left)
			} else if left > 1000 && k != 0 && left%k == 0 && m%10 != 0 && left%(m%10) == 0 && ((i/100)%10) != 0 && left%((i/100)%10) == 0 {
				arr = append(arr, left)
			}
		}
		left++
	}

	fmt.Println(arr)
	return arr
}
