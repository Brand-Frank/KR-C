#include<stdio.h>

/*	Description: �����븴�Ƶ���� - v2
	- EOF: end of file(�ļ�����)
*/

main() {
	int c;	/*	int	*/

	while ((c = getchar()) != EOF) {
		if (c == 'q')	break;
		putchar(c);
	}
}