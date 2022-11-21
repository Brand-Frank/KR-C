#include<stdio.h>
#include<ctype.h>

#define MAXHIST 15
#define MAXCHAR 128

/*	��ӡ�����и����ַ����ֵ�Ƶ�ȵ�ֱ��ͼ	
*	1: ��ʼ���������ڱ���0-127���ַ�
*	2: ����ʽ��ӡֱ��ͼ-�������޴���ʽ(�������ֲ���ӡ)
*/



main() {
	int c, i;
	int len;		/*	length of each bar	*/
	int maxvalue;	/*	maximum value for cc[]	*/
	int cc[MAXCHAR];/*	character counters	*/

	/*	Initialize the array	*/
	for (i = 0; i < MAXCHAR; ++i)
		cc[i] = 0;

	while ((c = getchar()) != 'q') {	//EOF was replace to q (q to quit)
		if (c < MAXCHAR)
			++cc[c];		/*	cΪASCII��Ӧ��������	*/
	}

	maxvalue = 0;
	for (i = 0; i < MAXCHAR; ++i) {
		if (cc[i] > maxvalue)
			maxvalue = cc[i];	/*	����128�Ĳ��ְ�128����	*/
	}

	for (i = 1; i < MAXCHAR; ++i) {
		if (isprint(i))
			printf("%5d - %c - %5d : ", i, i, cc[i]);
		else
			printf("%5d -   - %5d : ", i, cc[i]);
		//if (cc[i] > 0) {
		//	if (len = cc[i] * MAXHIST / maxvalue <= 0)
		//		len = 1;
		//}
		//else
		//	len = 0;

		len = cc[i];	//# �޸Ĳ���(modified) #

		while (len > 0) {
			putchar('#');
			--len;
		}
		putchar('\n');
	}
}