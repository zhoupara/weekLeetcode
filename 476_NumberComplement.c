/* ************************************************************************
 *       Filename:  476_NumberComplement.c
 *    Description:  数字的补数
 *					给定一个正整数，输出他的补数。补数是对改数的二进制表示取反
 *					1. 给定的整数保证在32位带符号整数的范围内
 *					2. 你可以假定二进制不包含前导零位
 *        Version:  1.0
 *        Created:  2019年04月14日 00时22分57秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>

int findComplement(int num) {
	int tmp = num, c = 0;
	while (tmp) {
		tmp >>= 1;
		c = (c << 1) + 1;
	}
	return c ^ num;
}

int main(void) {
	int num = 5;
	printf ("num = %d, ~num = %d\n", num, ~num);
	printf ("num = %d, complement = %d\n", num, findComplement(num));
	return 0;
}



