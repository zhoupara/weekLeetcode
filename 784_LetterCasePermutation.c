/* ************************************************************************
 *       Filename:  LetterCasePermutation.c
 *    Description:  字母大小写全排列
 *					给定一个字符串S，通过将字符串S中的每个字母转变大小写，
 *					我们可以获得一个新的字符串。返回所有可能得到的字符串集合。
 *        Version:  1.0
 *        Created:  2019年04月14日 11时03分29秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/
/*
 * Return an array of size *returnSize;
 * Note: The returned array must be malloced, assume caller calls free()
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char **letterCasePermutation(char *S, int *returnSize) {
	if (strlen(S) >= 12)
		return NULL;
/*
	for (int i = 0; i < size; i++) {
		if (S[i] >= 'a' && S[i] <= 'z' || S[i] >= 'A' && S[i] <= 'Z')
			num = (num+1) << 1;
		else if (S[i] >= '0' && S[i] >= '9')
			num = (num) << 1;
		else
			return NULL;
	}
*/

	char **str = NULL;
	for (int i = 0; S[i] != '\0'; i++) {
		printf ("for\n");
		if (S[i] >= 'a' && S[i] <= 'z'){
			printf ("a-z, i = %d, S[i] = %c, *returnSize = %d\n", i, S[i], *returnSize);
			str = (char **)realloc(str, sizeof(char *)*2);
			str[2*(*returnSize)] = (char *)malloc(12);
			str[2*(*returnSize)+1] = (char *)malloc(12);

			memset(str[2*(*returnSize)], 0, 12);
			memset(str[2*(*returnSize)+1], 0, 12);
			memcpy(str[2*(*returnSize)], S, i);
			memcpy(str[2*(*returnSize)+1], S, i);
			for (int j = 0; j <= *returnSize; ++j) {
				str[2*j][i] = S[i];
				printf ("str = %s\n", str[2*j]);
				str[2*j+1][i] = S[i] - 'a' + 'A';
				printf ("str = %s\n", str[2*j+1]);
			}
			(*returnSize) ++;
			printf("%d\n", *returnSize);
		}else if (S[i] >= 'A' && S[i] <= 'Z') {
			printf ("A-Z, i = %d, S[i] = %c\n", i, S[i]);
			str = (char **)realloc(str, sizeof(char *)*2);
			str[2*(*returnSize)] = (char *)malloc(12);
			str[2*(*returnSize)+1] = (char *)malloc(12);
			memset(str[2*(*returnSize)], 0, 12);
			memset(str[2*(*returnSize)+1], 0, 12);
			memcpy(str[2*(*returnSize)], S, i);
			memcpy(str[2*(*returnSize)+1], S, i);
			for (int j = 0; j <= *returnSize; ++j) {
				str[2*j][i] = S[i];
				printf ("str = %s\n", str[2*j]);
				str[2*j+1][i] = S[i] - 'A' + 'a';
				printf ("str = %s\n", str[2*j+1]);
			}
			(*returnSize) ++;
			printf("%d\n", *returnSize);
		}else if(S[i] >= '0' && S[i] <= '9'){
			printf ("0-9, i = %d, S[i] = %c, *returnSize = %d\n", i, S[i], *returnSize);
			for (int j = 0; j < *returnSize; ++j) {
				printf("%d\n",j);
				str[2*j][i] = S[i];
				printf ("str = %s\n", str[2*j]);
				str[2*j+1][i] = S[i];
				printf ("str = %s\n", str[2*j+1]);
			}	
			printf("%d\n", *returnSize);
		}else {
			printf ("erro\n");
			return NULL;
		}
	}

	*returnSize *= 2;
	if ((*returnSize) == 0) {
		str = malloc(sizeof(char *));
		str[0] = malloc(sizeof(12));
		memcpy(str[0], S, 12);
		*returnSize = 1;
	}
	return str;
}
	
int main(void) {
	//char str[] = "a1b2";
	//char str[] = "3z4";
	char str[] = "12345";
	char **S = NULL;
	int len = 0; 
	S = letterCasePermutation(str, &len);

	for (int i = 0; i < len; i++){
		printf ("%s\n", S[i]);
	}

	return 0;
}


