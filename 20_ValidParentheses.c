/* ************************************************************************
 *       Filename:  20_ValidParentheses.c
 *    Description: '(' ')''{' '}' '[' ']' 的字符串，判断字符串是否有效
 *					1.左括号必须用相同类型的右括号闭合
 *					2.左括号必须以正确的顺序闭合
 *					注意 空字符串可被认为有效字符串
 *        Version:  1.0
 *        Created:  2019年03月03日 12时24分32秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isValid(char *s){

	if (s == NULL){
		return true;
	}

	int num = strlen(s);
	char string[num];
	num = 0;

	for (int i = 0; i < strlen(s); i++){
		if (s[i] == '(' || s[i] == '[' || s[i] == '{' ){
			string[num] = s[i];
			num++;
		}else {
			switch ( s[i] ) {
				case ')':
					if (string[num-1] == '(') {
						string[num-1] = '\0';
						num--;
					} else
						return false;
					break;
				case ']':
					if (string[num-1] == '[') {
						string[num-1] = '\0';
						num--;
					} else
						return false;
					break;
				case '}':
					if (string[num-1] == '{') {
						string[num-1] = '\0';
						num--;
					} else 
						return false;
					break;
				default :
					return false;
					break;
			}
		}//End of "if... else..."
	}//End of "for()"

	return (num == 0);
}

int main(void){
	char s1[] = {'(',')'};
	char s2[] = {'(',')','[',']','{','}'};
	char s3[] = {'(',']'};
	char s4[] = {'(','[',')',']'};
	char s5[] = {'{','[',']','}'};

	bool a = true;
	printf ("a = %d\n", a);

	int ret;
	ret = isValid(s1);
	printf ("s1 = %d\n", ret);
	ret = isValid(s2);
	printf ("s2 = %d\n", ret);
	ret = isValid(s3);
	printf ("s3 = %d\n", ret);
	ret = isValid(s4);
	printf ("s4 = %d\n", ret);
	ret = isValid(s5);
	printf ("s5 = %d\n", ret);

	return 0;
} 


