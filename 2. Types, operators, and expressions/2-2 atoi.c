#include<stdio.h>

int r_atoi(char s[]);

main() {
	char s[20];

	/*	��ʼ��	*/
	for (int i = 0; i < sizeof(s) / sizeof(s[0]); ++i)
		s[i] = 0;

	for (int i = 0; i < sizeof(s) / sizeof(s[0]); ++i) {
		/*s[i] = getchar();*/
		scanf("%c", &s[i]);
		/*if (s[i] == 'q')
			break;*/
	}

	printf("%d", r_atoi(s));

	return 0;
}

/*	atoi()����:	���ַ���sת������Ӧ��������	*/
int r_atoi(char s[]) {
	int i, n;

	n = 0;
	for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
		n = 10 * n + (s[i] - '\0');

	return 0;
}