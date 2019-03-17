/* ************************************************************************
 *       Filename:  371_SumOfTwoIntegers.c
 *    Description:  &与 |或  ^异或 ~非 <<左移 >>右移
 *					& 两个相应的二进制位都为1，则该位的结果值为1，否则为0
 *					^ 两个值不相同，则异或结果为1
 *					| 两个相应的二进制位中只要有一个为1，该位的结果值为1 
 *        Version:  1.0
 *        Created:  2019年03月17日 16时52分21秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/
//a = 5  b = 13
//a  0000 0101  
//b  0000 1101
//a xor b 0000 1000
//(a & b) << 1  0000 1010
//
//a = 0000 1000
//b = 0000 1010
//a xor b 0000 0010
//(a & b) << 1 0001 0000
//
//a = 0000 010
//b = 0001 0000
//a xor b  0001 0010
//(a & b) << 1 
//
#include <stdio.h>
int getSum(int a, int b) {
	if ( ((a & b) >> 7) == 1){
		return 0;
	}
	if ( b == 0){
		return a;
	}
	int tmp;

	tmp = a ^ b;
	getSum(tmp, (a & b) << 1);
}

int main (void) {
	printf ("3 + 8 = %d\n", getSum(3, 8));
	printf ("13 + 5 = %d\n", getSum(13, 5));
	printf ("-1 + -1 = %d\n", getSum(-1, -1));
	printf ("-1 + -9 = %d\n", getSum(-1, 9));
	printf ("9 + -1 = %d\n", getSum(1, -9));
	printf ("1073741824 + 232332 = %d\n", getSum(1073741824, 232332));
}

