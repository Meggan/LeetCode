package main

import (
	"fmt"
)

func main() {
	selfDividingNumbers(1, 250)
}

func selfDividingNumbers(left int, right int) []int {

	//create array with every number between left and right
	var arr []int
	i := 0

	for left <= right {

		i = left / 10

		//removes all numbers that end in 0
		if left%10 != 0 && left%(left%10) == 0 {
			//removes all numbers that arent divisible by their last number
			if left < 10 {
				arr = append(arr, left)
			} else if left > 10 && left < 100 && left%(i) == 0 {
				// fmt.Println(left, left/10)
				arr = append(arr, left)
			} else if left > 100 && left < 1000 && left%(i%10) == 0 {
				//fmt.Println(left, left%(i/10),(i)%10)
				arr = append(arr, left)
			} else if left > 1000 && left%(i/100) == 0 && (i)%10 != 0 && (i/10)%10 != 0 {
				//fmt.Println(left, left/1000)
				arr = append(arr, left)
			}
		}
		left++
	}

	fmt.Println(arr)
	return arr
}

// func selfDividingNumbers(left int, right int) []int {

// 	//create array with every number between left and right
// 	var arr []int
// 	var i int

// 	for left <= right {

// 		i = left % 10
// 		//removes all numbers that end in 0
// 		if i != 0 && left%i == 0 {
// 			//removes all numbers that arent divisible by their last number
// 			if left < 10 {
// 				arr = append(arr, left)
// 			} else if left > 10 && left%(left/10) == 0 {
// 				// fmt.Println(left, left/10)
// 				arr = append(arr, left)
// 			} else if left > 100 && left%(left/100) == 0 && (left/10)%10 != 0 {
// 				// fmt.Println(left, left/100)
// 				arr = append(arr, left)
// 			} else if left > 1000 && left%(left/1000) == 0 && (left/10)%10 != 0 && (left/100)%10 != 0 {
// 				//fmt.Println(left, left/1000)
// 				arr = append(arr, left)
// 			}
// 		}
// 		left++
// 	}

// 	fmt.Println(arr)
// 	return arr
// }
