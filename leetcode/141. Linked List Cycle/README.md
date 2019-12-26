Overview
===

## 問題

141. Linked List Cycle
Easy
Given a linked list, determine if it has a cycle in it.

To represent a cycle in the given linked list, we use an integer pos which represents the position (0-indexed) in the linked list where tail connects to. If pos is -1, then there is no cycle in the linked list.

Example 1:

Input: head = [3,2,0,-4], pos = 1
Output: true
Explanation: There is a cycle in the linked list, where tail connects to the second node.


Example 2:

Input: head = [1,2], pos = 0
Output: true
Explanation: There is a cycle in the linked list, where tail connects to the first node.


Example 3:

Input: head = [1], pos = -1
Output: false
Explanation: There is no cycle in the linked list.

Follow up:

Can you solve it using O(1) (i.e. constant) memory?


## 翻訳
### 機械翻訳
141.リンクリストサイクル
かんたん
リンクリストが指定されている場合、そのリストにサイクルがあるかどうかを判断します。

指定されたリンクリストのサイクルを表すために、テールが接続するリンクリスト内の位置（0インデックス）を表す整数posを使用します。 posが-1の場合、リンクリストにサイクルはありません。

例1：

入力：head = [3,2,0、-4]、pos = 1
出力：true
説明：リンクリストにサイクルがあり、テールが2番目のノードに接続します。


例2：

入力：head = [1,2]、pos = 0
出力：true
説明：リンクリストには、テールが最初のノードに接続するサイクルがあります。


例3：

入力：head = [1]、pos = -1
出力：false
説明：リンクリストにサイクルはありません。

ファローアップ：

O（1）（つまり、定数）メモリを使用して解決できますか？

### 翻訳


## 考察

リンクリストが指定された場合、そのリストにサイクルがあるか確認する。
指定されたリンクリスト内のサイクルを表すにはpos、テールが接続するリンクリスト内の位置（0から始まる）を表す整数を使用します。posで-1は、リンクされたリストにはサイクルがありません。

For Example:

```
Input: head = [3,2,0,-4], pos = 1
Output: true
Explanation: There is a cycle in the linked list, where tail connects to the second node.
```

Example 2:

```
Input: head = [1,2], pos = 0
Output: true
Explanation: There is a cycle in the linked list, where tail connects to the first node.
```

```
Input: head = [1], pos = -1
Output: false
Explanation: There is no cycle in the linked list.
```

## 答え
Answer

```go
func hasCycle(head *ListNode) bool {
    if head == nil || head.Next == nil {
        return false
    }

    var slow = head
    var fast = head

    for {
        if fast == nil || fast.Next == nil {
            return false
        }
        slow = slow.Next
        fast = fast.Next.Next

        if fast == slow {
            return true
        }

    }

    return false
}
```