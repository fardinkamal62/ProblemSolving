package main

/**
 * Definition for singly-linked list.
 * type ListNode struct {
 *     Val int
 *     Next *ListNode
 * }
 */
type ListNode struct {
	Val  int
	Next *ListNode
}

func addTwoNumbers(l1 *ListNode, l2 *ListNode) {
	result := &ListNode{}
	for l1 != nil && l2 != nil {
		result.Val = l1.Val + l2.Val
		l1 = l1.Next
		l2 = l2.Next
		result = result.Next
	}
}

func main() {
	l1 := &ListNode{Val: 2, Next: &ListNode{Val: 4, Next: &ListNode{Val: 3}}}
	l2 := &ListNode{Val: 5, Next: &ListNode{Val: 6, Next: &ListNode{Val: 4}}}
	addTwoNumbers(l1, l2)
	// fmt.Println(result)
}
