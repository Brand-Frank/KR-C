#include<stdio.h>
#define MAXLINE 1000
#define LONGLINE 80
/*	��ӡ���ȴ���80���ַ�������������	*/

int getline(char s[], int lim);

main() {
	int len;
	char line[MAXLINE];

	while ((len = getline(line, MAXLINE)) > 0) {
		if (len > LONGLINE)
			printf("%s", line);
	}
	return 0;
}
/*
int getline(char s[], int lim) {
	int c, i, j;

	j = 0;
	for (i = 0; (c = getchar()) != EOF && c != '\n'; ++i) {
		if (i < lim - 2) {
			s[j] = c;
			++j;
		}

		if (c == '\n') {
			s[j] = c;
			++j;
			++i;
		}
	}
	s[j] = '\0';
	return i;
}
*/


int getline(char s[], int lim) {
	char c = 0, i;

	for (i = 0; (c = getchar()) != EOF && c != '\n'; ++i) {
		if (c == 'q')	//replace EOF with q to quit!
			break;
		s[i] = c;		//���������������
	}
	if (c == '\n') {
		s[i] = c;		//���������������
		++i;			//��¼��ǰ�����Ԫ�ظ���
	}

	s[i] = '\0';	//���������з�ʱ�����һλ��'\0'.
	return i;		//������'\0'.
}
