/* ************************************************************************
 *       Filename:  206_ReverseLinkedList.c
 *    Description:  反转一个单链表
 *        Version:  1.0
 *        Created:  2019年04月18日 19时40分30秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>
#include <stdlib.h>

// Definition for singly-linked list.
struct ListNode {
	int val;
	struct ListNode *next;
};
//-1->0->1->2->3->4->NULL
struct ListNode* reverseList(struct ListNode* head) {
	struct ListNode *cur = head, *pre = NULL;
	while (cur) {
		struct ListNode *next = cur->next;
		cur->next = pre;
		pre = cur;
		cur = next;
	}

	return pre;
}

int main(void) {
	struct ListNode *head = (struct ListNode *)malloc(sizeof(struct ListNode));
	head->val = -1;
	int i = 0;

	for (struct ListNode *cur = head; i < 5; i++, cur = cur->next) {
		struct ListNode *tmp = (struct ListNode *)malloc(sizeof(struct ListNode));
		tmp->val = i;
		cur->next = tmp;
	}

	printf("before:");
	for (struct ListNode *cur = head; cur != NULL; cur = cur->next) {
		printf (" %d ->", cur->val);
	}
	printf(" NULL\n");

	head = reverseList(head);

	printf ("after:");
	for (struct ListNode *cur = head; cur != NULL; cur = cur->next) {
		printf (" %d ->", cur->val);
	}
	printf(" NULL\n");

	
	return 0;
}


