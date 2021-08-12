/*
 * @lc app=leetcode id=977 lang=golang
 *
 * [977] Squares of a Sorted Array
 */

// @lc code=start
import "sort"

func sortedSquares(nums []int) []int {
	for key, num := range nums {
		nums[key] = num * num
	}
  sort.Ints(nums)
	return nums
}

// @lc code=end

