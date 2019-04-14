/* ************************************************************************
 *       Filename:  693_BinaryNumberWithAlternatingBits.c
 *    Description:  交替位二进制数
 *					给定一个正整数，检查他是否为交替位二进制数：
 *					换句话说，就是他的二进制数相邻的两个位数永不相等
 *        Version:  1.0
 *        Created:  2019年04月14日 09时41分26秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>
#include <stdbool.h>

bool hasAlternatingBits(int n) {
	int tmp = n;
	while (tmp) {
		if ((tmp & 0x1) == (tmp>>1 & 0x1))
			return false;
		tmp >>= 1;
	}
	return true;
}

bool hasAlternatingBits2(int n) {
	int tmp = n ^ (n>>1); 
	return (tmp &(tmp+1)) == 0;
}

int main(void) {
	int a = 5;
	printf ("%d\n", hasAlternatingBits(a));
	printf ("%d\n", hasAlternatingBits2(a));
	return 0;
}

