#include<stdio.h>

/*	Description: �����븴�Ƶ���� - v1
	- EOF: end of file(�ļ�����)
*/

main() {
	int c;	/*	int	*/

	c = getchar();
	while (c != EOF) {
		//if (c == 'q')	break;
		putchar(c);
		c = getchar();
	}
}