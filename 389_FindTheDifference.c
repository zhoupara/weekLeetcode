/* ************************************************************************
 *       Filename:  389_FindTheDifference.c
 *    Description:  找不同
 *					给定两个字符串 s 和 t，它们只包含小写字母。
 *					字符串 t 由字符串 s 随机重排，然后在随机位置
 *					添加一个字母。请找出在 t 中被添加的字母。
 *        Version:  1.0
 *        Created:  2019年04月14日 10时16分03秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>

char findTheDiference(char *s, char *t) {
	int a = 0, c = 0;
	while (*s != '\0'){
		a += *s - 'a';
		s++;
	}
	while (*t != '\0') {
		c += *t - 'a';
		t++;
	}
	return (char)((c-a) + 'a');
}

int main(void) {
	char a[] = "abcd";
	char t[] = "abcde";
	printf("c = %c\n", findTheDiference(a,t));
	return 0;
}

