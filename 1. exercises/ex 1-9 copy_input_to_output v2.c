#include<stdio.h>
#define NONBLANK 'a'

/*	�����븴�Ƶ�����������Ŀո���һ���ո����	*/

main() {
	int c, lastc;

	lastc = NONBLANK;
	while ((c = getchar()) != EOF) {
		if (c != ' ')
			putchar(c);
		else if (lastc != ' ')
			putchar(c);
		lastc = c;
	}
}