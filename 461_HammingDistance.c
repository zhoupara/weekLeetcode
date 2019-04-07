/* ************************************************************************
 *       Filename:  461_HammingDistance.c
 *    Description:  整数两个之间的汉：明距离
 *					指的的英文这两个数字对应二进制位不同的位置的数目。
 *					两个给出整数x状语从句：y，计算它们之间的汉明距离。
 *        Version:  1.0
 *        Created:  2019年04月03日 20时44分30秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

int HammingDistance(int x, int y) {
	if (x <= 0 && y <= 0 && x > 0x7fffffff && y > 0x7fffffff) 
       return -1;
    int tmp = x ^ y;
    int n = 0;
    while (tmp) {
        tmp &= (tmp -1);
        n++;
    }
    return n;
}


