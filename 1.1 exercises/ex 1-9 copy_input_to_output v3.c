#include<stdio.h>
#define NONBLANK 'a'

/*	�����븴�Ƶ�����������Ŀո���һ���ո����	*/

int main() {
	int c, lastc;

	lastc = NONBLANK;
	while ((c = getchar()) != EOF) {
		if (c != ' ' || lastc != ' ')
			putchar(c);
		lastc = c;
	}
}