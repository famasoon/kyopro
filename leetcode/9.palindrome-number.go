package leetcode

/*
 * @lc app=leetcode id=9 lang=golang
 *
 * [9] Palindrome Number
 */

import "strconv"

// @lc code=start
func reverseString(s string) string {
	runes := []rune(s)
	for i, j := 0, len(runes)-1; i < j; i, j = i+1, j-1 {
		runes[i], runes[j] = runes[j], runes[i]
	}
	return string(runes)
}

func isPalindrome(x int) bool {
	tmpX := strconv.Itoa(x)
	reverseX := reverseString(tmpX)
	if tmpX != reverseX {
		return false
	}
	return true
}

// @lc code=end
