#include<stdio.h>

/*	Description: ͳ��������ַ����� v-1
	- EOF: end of file(�ļ�����)
*/
main() {
	int nc = 0, c;	/* number of characters*/

	while ((c = getchar()) != EOF) {
		putchar(c);
		++nc;
	}
	printf("nc = %d\n", nc);
}