package twoSum

func twoSum(nums []int, target int) []int {
	var res []int
	res = make([]int, 2)

	numMap := make(map[int]int)
	for i, num := range nums {
		numMap[num] = i
	}

	for j, firstNum := range nums {
		comp := target - firstNum
		value, ok := numMap[comp]
		if !ok {
			continue
		}
		if value == j {
			continue
		}

		res[0] = j
		res[1] = value

		return res
	}

	return res
}
