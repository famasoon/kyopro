class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        str_list = []
        max_length = 0

        for val in s:
            if val in str_list:
                str_list = str_list[str_list.index(val)+1:]

            str_list.append(val)
            max_length = max(max_length, len(str_list))

        return max_length