/* ************************************************************************
 *       Filename:  268_MissingNumber.c
 *    Description:  缺失的数字
 *					给定一个包含 0, 1, 2, ..., n 中 n 个数的序列，
 *					找出 0 .. n 中没有出现在序列中的那个数
 *        Version:  1.0
 *        Created:  2019年04月14日 10时38分48秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>

int missingNumber(int *nums, int numsSize) {
	int tmp = numsSize;
	for (int i = 0; i < numsSize; i++){
		tmp ^=  nums[i];
		tmp ^= i;
	}

	return tmp; 
}

int main(void) {
	int num1[] = {3,0,1};
	int num2[] = {9,6,4,2,3,5,7,0,1};
	printf("num1 = %d\n", missingNumber(num1, 3));
	printf("num2 = %d\n", missingNumber(num2, 9));
}
