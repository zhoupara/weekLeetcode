/* ************************************************************************
 *       Filename:  singleList.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2019年04月28日 15时07分40秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
	struct Node *next;
	int val;
}Node;

//头部插入
Node *insertNodeHead(Node *list, int val) {
	Node *new = (Node *)malloc(sizeof(Node));
	new->val = val;
	new->next = NULL;

	//if (list != NULL)
		new->next = list;

	list = new;

	return list;
}

//尾部插入
Node *insertNodeTail(Node *list, int val) {
	Node *new = (Node *)malloc(sizeof(Node));
	new->val = val;
	new->next = NULL;

	Node *cur = list;
	if (list == NULL) {
		list = new;
		return list;
	}
	
	while (cur->next != NULL)
		cur = cur->next;
	cur->next = new;

	return list;
}

//free
int freeNode(Node *list) {
	while (list != NULL) {
		Node *tmp = list;
		list = list->next;
		free(tmp);
	}

	return 0;
}

//打印
int printNode(Node *list) {
	printf("List:");
	while (list != NULL) {
		printf(" %d", list->val);
		list = list->next;
	}
	printf("\n");

	return 0;
}

int main(void) {
	Node *list;
	for(int i = 1; i < 5; i++)
		list = insertNodeHead(list, i);
	printNode(list);
	for(int i = 1; i < 5; i++)
		list = insertNodeTail(list, i+10);
	printNode(list);

	freeNode(list);
	return 0;
}


