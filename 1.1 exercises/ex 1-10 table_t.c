#include<stdio.h>
/*	�����븴�Ƶ�������Ʊ����Ϊ\t�����˷��滻Ϊ\b,��б��\����Ϊ\\	*/

main() {
	int c;	/*	receive input from keyboard	*/

	while ((c = getchar()) != EOF) {
		if (c == '\t')
			printf("\\t");
		else if (c == '\b')
			printf("\\b");
		else if (c == '\\')
			printf("\\\\");
		else
			putchar(c);
	}
}