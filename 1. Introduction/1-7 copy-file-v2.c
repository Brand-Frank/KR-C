/**
	@brief �����븴�Ƶ���� - v2
	- EOF: end of file(�ļ�����)
*/

#include<stdio.h>
int main() {
	int c;	/*	int	*/

	while ((c = getchar()) != EOF) {	//Note:interesting method-1
		if (c == 'q')	break;
		putchar(c);
	}
}