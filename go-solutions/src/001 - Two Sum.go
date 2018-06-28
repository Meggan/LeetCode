func twoSum(nums []int, target int) []int {

	var sum []int
	j := 0
	//for each
	for i, num := range nums {
		for j, num2 := range nums {
			if j <= i {
				j++
			} else if num+num2 == target {
				sum = append(sum, i)
				sum = append(sum, j)
				return sum
			}
		}
	}
	return sum
}