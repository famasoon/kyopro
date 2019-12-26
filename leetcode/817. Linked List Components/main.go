import "fmt"

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
	// 初始化无序set
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
			if len(g[u]) == 0 {
				g[u] = []int{v}
			} else {
				g[u] = append(g[u], v)
			}

			if len(g[v]) == 0 {
				g[v] = []int{u}
			} else {
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