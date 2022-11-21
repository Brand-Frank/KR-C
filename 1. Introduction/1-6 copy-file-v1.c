/**
 * @file 1-6 copy-file-v1.c
 * @author codebug (zhang_classmate@qq.com)
 * @brief c=getchar()  && putchar(c)——将输入复制到输出
 * @version 0.1
 * @date 2022-11-21 20:11
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include<stdio.h>

int main() {
	int c;	/*	int	*/

	c = getchar();
	while (c != EOF) {
		if (c == 'q')	break;
		putchar(c);
		c = getchar();
	}
}