/* ************************************************************************
 *       Filename:  24_SwapNodesInPairs.c
 *    Description:  给定一个链表，两两交换其中相邻的节点，并返回交换后的链表。
 *					你不能只是单纯的改变节点内部的值，而是需要实际的进行节点交换。
 *        Version:  1.0
 *        Created:  2019年04月21日 16时41分27秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>
#include <stdlib.h>

struct ListNode {
	int val;
	struct ListNode *next;
};

// 1->2->3->4  
// 返回2->1->4->3
struct ListNode *swapPairs(struct ListNode *head) {
	struct ListNode *cur = head, *pre = head;
	head = head->next;
	for (; cur != NULL && cur->next != NULL; pre = cur, cur = cur->next) {
		pre->next = cur->next;
		struct ListNode *tmp = cur->next;
		cur->next = tmp->next;
		tmp->next = cur;
	}
	return head;
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

	head = swapPairs(head);

	printf ("after:");
	for (struct ListNode *cur = head; cur != NULL; cur = cur->next) {
		printf (" %d ->", cur->val);
	}
	printf(" NULL\n");

	
	return 0;
}
