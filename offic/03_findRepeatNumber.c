#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int findRepeatNumber(int* nums, int numsSize)
{

}


int main(void)
{
	int nNum;
	int *pArr;
	int i = 0;

	srand(time(0));
	nNum = rand() % 100;
	pArr = (int *)malloc(sizeof(int) * nNum);

	for (; i < nNum; i++)
	{
		pArr[i] = rand() % nNum;
	}
	

	free(arr);
	return 0;

}
