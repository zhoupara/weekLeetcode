/* ************************************************************************
 *       Filename:  PowerOfFour.c
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
//0x 0000 0110
bool isPowerOfFour(int num) {
	if (num < 0)
		return false;
	int sum1 = 0, sum2 = 0;

	while (num) {
		if ((num & 1) == 1 && (num & 2) == 0)
			sum1++;
		if ((num & 1) == 1 || (num & 2) == 2)
			sum2++;
		num >>= 2;
	}

	return ((sum1 == 1) && (sum2 == 1))? true: false;
}

int main(void) {
	int i = 16;
	printf("%d\n", isPowerOfFour(i));

	return 0;
}
