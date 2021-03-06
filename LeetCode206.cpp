/*************************************************************************
	> File Name: LeetCode206.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月28日 星期五 16时48分14秒
 ************************************************************************/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* reverseList(struct ListNode* head){
    if (head == NULL) return head;
    struct ListNode ret, *p = head, *q;
    ret.next = NULL;
    head = NULL;
    while (p) {
        q = p->next;
        p->next = ret.next;
        ret.next = p;
        p = q;
    }
    return ret.next;
}
