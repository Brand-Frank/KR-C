#include<stdio.h>
/*	Description: ͳ�Ƹ������֡��հ׷��������ո�����Ʊ�������з����Լ����������ַ����ֵĴ�����
*/


int main() {
	int c;	/*	gethchar*/
	int i, nwhite, nother;
	int ndigit[10];	/*	store number from 0 to 10	*/

	nwhite = nother = 0;	/*	��ʼ��	*/
	for (i = 0; i < 10; i++) {
		ndigit[i] = 0;
	}

	while ((c = getchar()) != EOF) {
		if (c >= '0' && c <= '9')
			++ndigit[c - '0'];	/*	��c�ڷ�Χ��ʱ����Ӧλ���ϵ�ֵ��һ	*/
		else if (c == ' ' || c == '\t' || c == '\n')
			++nwhite;
		else if (c == 'q')		/*	��ԭ��ĸı䣬����qֹͣ*/
			break;
		else
			++nother;
	}
	printf("Digits = ");
	for (i = 0; i < 10; i++)
		printf("\t%d", ndigit[i]);
	printf("\nwhite space = %d\nother = %d\n", nwhite, nother);	/*	BUG?	*/
	return 0;
}
