# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def isPalindrome(self, head: Optional[ListNode]) -> bool:
        lists=[]
        stack=[]
        curr=head
        while curr:
            stack.append(curr.val)
            curr=curr.next
        curr=head
        while curr and curr.val==stack.pop():
            curr=curr.next
        return curr is None