/**
	@brief 将输入复制到输出 - v2
	- EOF: end of file(文件结束)
*/

#include<stdio.h>
int main() {
	int c;	/*	int	*/

	while ((c = getchar()) != EOF) {	//Note:interesting method-1
		if (c == 'q')	break;
		putchar(c);
	}
}