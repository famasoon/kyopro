817. Linked List Components
===

## 問題
### 機械翻訳
We are given head, the head node of a linked list containing unique integer values.

We are also given the list G, a subset of the values in the linked list.

Return the number of connected components in G, where two values are connected if they appear consecutively in the linked list.

Example 1:

Input:
head: 0->1->2->3
G = [0, 1, 3]
Output: 2
Explanation:
0 and 1 are connected, so [0, 1] and [3] are the two connected components.
Example 2:

Input:
head: 0->1->2->3->4
G = [0, 3, 1, 4]
Output: 2
Explanation:
0 and 1 are connected, 3 and 4 are connected, so [0, 1] and [3, 4] are the two connected components.
Note:

If N is the length of the linked list given by head, 1 <= N <= 10000.
The value of each node in the linked list will be in the range [0, N - 1].
1 <= G.length <= 10000.
G is a subset of all values in the linked list.

## 機械翻訳
一意の整数値headを含むリンクリストのヘッドノード  が与えられ  ます。

また、list G、リンクされたリストの値のサブセットが与えられ  ます。

Gリンクされたリストに2つの値が連続して表示される場合、2つの値が接続されているの接続コンポーネントの数を返します。

例1：

入力：
head：0-> 1-> 2-> 3
G = [0、1、3]
出力： 2
 説明：
0と1が接続されているため、[0、1]と[3]は2つの接続されたコンポーネントです。
例2：

入力：
head：0-> 1-> 2-> 3-> 4
G = [0、3、1、4]
出力： 2
 説明：
0と1が接続され、3と4が接続されているため、[0、1]と[3、4]は2つの接続されたコンポーネントです。
注意：

場合  N によって与えられたリンクリストの長さがあり  head、  1 <= N <= 10000。
リンクリストの各ノードの値は範囲内になります [0, N - 1]。
1 <= G.length <= 10000.
G リンクリストのすべての値のサブセットです。

## 考察
渡されたスライスの中から存在しない値を出力すれば良いのかな


---

テストケース
[0,1,2,3]
[0,1,3]


---

1. Max値を見つける
2. Max値から少ない値を見つける　二番目の値だ
3. Max値 - 2番値を引く
4. 答え



## Writeup

```go
/**
 * Definition for singly-linked list.
 * type ListNode struct {
 *     Val int
 *     Next *ListNode
 * }
 */
var g map[int][]int

func numComponents(head *ListNode, G []int) int {
    g = make(map[int][]int)
	s := make(map[int]bool, len(G))
	for _, g := range G {
		s[g] = true
	}

	// build graph
	for {
		if head.Next == nil {
			break
		}
		u := head.Val
		v := head.Next.Val
		_, uOk := s[u]
		_, vOk := s[v]
		if uOk && vOk {
            if len(g[u])==0{
                g[u]=[]int{v}
            }else{
			    g[u] = append(g[u], v)
            }
            if len(g[v])==0{
                g[v]=[]int{u}
            }else{
                g[v] = append(g[v], u)
            }
			fmt.Println(u, v)
		}
		head = head.Next
	}
	ans := 0
	vis := make([]bool, 10000)

	for _, g := range G {
		if vis[g] {
			continue
		} else {
			dfs(g, vis)
			ans++
		}
	}
	return ans
}

func dfs(cur int, vis []bool) {
	if vis[cur] {
		return
	}
	vis[cur] = true
	for i := 0; i < len(g[cur]); i++ {
		if !vis[g[cur][i]] {
			dfs(g[cur][i], vis)
		}
	}
}
```


### アルゴリズム解析
TBD