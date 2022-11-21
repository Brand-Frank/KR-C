/*	��ӡ���뵥�ʵĳ��ȵ�ֱ��ͼ - ˮƽ����	*/

#include<stdio.h>
#include <windows.h>
#define MAXHIST 15
#define MAXWORD 11
#define IN 1
#define OUT 0

int main() {
	int c;	/*	receive input from keyboard	*/
	int i, nc, state;
	int len;			/*	length of each bar		*/
	int maxvalue;		/*	maxium value for wl[]	*/
	int overflow;		/*	number of overflow words*/
	int wl[MAXWORD];	/*	word length counters	*/

	state = OUT;
	nc = 0;				/*	number of chars in a word	*/
	overflow = 0;		/*	number of words >= MAXWORD	*/

	for (i = 0; i < MAXWORD; ++i)
		wl[i] = 0;

	/*	nc ÿ�����ʵ��ַ�����������������Ϊ nc �ĵ��ʸ��������� wl[nc] ��	*/
	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\n' || c == '\t') {
			state = OUT;
			if (nc > 0)
				if (nc < MAXWORD)
					++wl[nc];		/*	����Ϊ nc �ĵ��ʸ����ۼ�	*/
				else
					++overflow;		/*	������ MAXWORD=10 ���ֵĵ���,�Ҳ�����������	*/
			nc = 0;		/*	�ڵ������	*/
		}
		else if (state == OUT) {	/*	ÿ�����ʵĵ�һ����ĸ	*/
			state = IN;
			nc = 1;		/*	beginning of a new words	*/
		}
		else if (c == 'q')		/*	# replace EOF #	q to quit	*/
			break;
		else
			++nc;		/*	inside a word	*/
	}

	/*	�ҳ�ֱ��ͼ�е����ֵ:����Ϊnc�ĵ��ʵĸ���(Ƶ��)	*/
	maxvalue = 0;
	for (i = 1; i < MAXWORD; ++i) {
		if (wl[i] > maxvalue)
			maxvalue = wl[i];
	}

	/*	����ˮƽֱ��ͼ����ʾ����	*/
	for (i = 1; i < MAXWORD; ++i) {
		printf("%4d - %2d : ", i, wl[i]);	/*	���ʳ��� nc=0~10 - ���ִ���wl[i]	*/
		/*if (wl[i] > 0) {
			if ((len = wl[i] * MAXHIST / maxvalue) <= 0)
				len = 1;
		}
		else
			len = 0;*/		/*	����Ϊi�ĵ��ʳ��ִ���Ϊ0���򲻴�ӡ	*/

		len = wl[i];	//���ϱߵ�if..elseע�ͺ󣬿�ʹ���ִ�������ԭ����ӡ�������ᱻ����
		while (len > 0) {
			Sleep(40);    /* windows ʹ��Sleep������Ϊ���� */
			putchar('#');
			--len;
		}
		putchar('\n');
	}
	if (overflow > 0)
		printf("There are %d words >= %d\n", overflow, MAXWORD);//don't deal with overflow(11)

	return 0;
}