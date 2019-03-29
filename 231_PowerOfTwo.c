/* ************************************************************************
 *       Filename:  PowerOfTwo.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2019年03月29日 20时43分25秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/
#include <stdbool.h>
#include <stdio.h>

//-2147483648 1000 0000 0000 0000 0x8000 0000
//负数都不是2的幂次方
bool isPowerOfTwo(int n) {
	if (n < 0)
		return false;
	int sum = 0;
	
	//n = (n < 0)? (~n+1): n;//想把负数转正数

	while (n) {
		if ((n & 1)	== 1)
			sum++;
		n >>= 1;
	}

	return (sum == 1)? true: false;
}

int main(void) {
	//int i = -2147483648;
	int i = -2;
	printf("%d\n", isPowerOfTwo(i));

	return 0;
}
