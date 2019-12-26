package twoSum

import (
	"reflect"
	"testing"
)

type testCase struct {
	array  []int
	target int
}

func TestTwoSum(t *testing.T) {
	tests := []struct {
		input  testCase
		output []int
	}{
		{testCase{[]int{2, 7, 11, 15}, 9}, []int{0, 1}},
		{testCase{[]int{2, 3, 4, 11, 15}, 6}, []int{0, 2}},
	}

	for i, tt := range tests {
		sum := twoSum(tt.input.array, tt.input.target)
		if !reflect.DeepEqual(sum, tt.output) {
			t.Errorf("tests[%d] failed - input: %+v - answer: %+v output: %d¥n", i, tt.input.array, tt.output, sum)
		}
	}
}
