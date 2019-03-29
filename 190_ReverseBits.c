/* ************************************************************************
 *       Filename:  190_ReverseBits.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2019年03月29日 20时20分22秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>
#define uint32_t unsigned long
uint32_t reverseBits(uint32_t n) {
	uint32_t new = 0;
	
	//必须要执行32次，让 new << 1 左移32位
	for (int i = 0; i < 32; i++){
		new = (new << 1) | (n & 1);
		n >>= 1;
	}

	return new;
}

int main(void) {
	uint32_t n = 43261596;
	printf ("n = %ld, resver = %ld\n", n, reverseBits(n));

	return 0;
}


