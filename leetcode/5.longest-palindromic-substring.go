package leetcode

/*
 * @lc app=leetcode id=5 lang=golang
 *
 * [5] Longest Palindromic Substring
 */

// @lc code=start
func longestPalindrome(s string) string {
  counter := make(map[rune]int)
  for _, r := range s {
    counter[r]++
  }

  answer := 0
  for _, v := range counter {
    answer += v
    if answer % 2 == 0 && v % 2 == 1 {
      answer++
    }
  }

  return answer
}

// @lc code=end
