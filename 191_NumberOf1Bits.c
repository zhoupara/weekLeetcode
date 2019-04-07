/* ************************************************************************
 *       Filename:  NumberOf1Bits.c
 *    Description:  输入无符号的整形，返回其二进制表达式中
 *					数字位数为'1'的个数
 *        Version:  1.0
 *        Created:  2019年04月03日 20时01分57秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

int hammingWeight(uint32_t n) {
	int sum = 0;
	while (n) {
		if ((n & 0x1) == 1)
			sum++;
		n >>= 1;
	}

	return sum;
}

int hammingWeight2(uint32_t n) {
	int sum = 0;
	while (n) {
		n &= (n-1); 
		sum++;
	}

	return sum;
}

