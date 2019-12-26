Minstack
===

## 問題

Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.

push(x) -- Push element x onto stack.
pop() -- Removes the element on top of the stack.
top() -- Get the top element.
getMin() -- Retrieve the minimum element in the stack.


Example:

MinStack minStack = new MinStack();
minStack.push(-2);
minStack.push(0);
minStack.push(-3);
minStack.getMin();   --> Returns -3.
minStack.pop();
minStack.top();      --> Returns 0.
minStack.getMin();   --> Returns -2.


## 翻訳
### 機械翻訳
ポッシュ、ポップ、トップをサポートし、一定の時間で最小要素を取得するスタックを設計します。

push（x）-要素xをスタックにプッシュします。
pop（）-スタックの一番上の要素を削除します。
top（）-トップ要素を取得します。
getMin（）-スタック内の最小要素を取得します。


例：

MinStack minStack = new MinStack（）;
minStack.push（-2）;
minStack.push（0）;
minStack.push（-3）;
minStack.getMin（）; -> -3を返します。
minStack.pop（）;
minStack.top（）; -> 0を返します。
minStack.getMin（）; -> -2を返します


## テストケース

```
["MinStack","push","push","push","getMin","pop","top","getMin"]
[[],[-2],[0],[-3],[],[],[],[]]
```

## 考察
`MinStack`には`iten[]`配列を作成する.
`item`には最小値、代入する値を入れる.
`min`には常に最新の最小の値を入れる.
`Pop`では最後に更新した値を出すようにしている.
`Push`でも最後に値を入れるようにしている.
`value`にはそれぞれスタックの値が入っている
`min`にはスタックごとに、最小になった値が入っているためどのスタックを取り出しても最小値が手に入る

## テストコード

```go
type MinStack struct {
	stack []item
}
type item struct {
	min, value int
}


func Constructor() MinStack {
	return MinStack{}
}


func (this *MinStack) Push(x int) {
	min := x
	if len(this.stack) > 0 && this.GetMin() < x {
		min = this.GetMin()
	}
	this.stack = append(this.stack, item{min: min, value: x})
}


func (this *MinStack) Pop() {
	this.stack = this.stack[:len(this.stack)-1]
}


func (this *MinStack) Top() int {
	return this.stack[len(this.stack)-1].value
}


func (this *MinStack) GetMin() int {
	return this.stack[len(this.stack)-1].min
}
```

## 考察

## 答え
