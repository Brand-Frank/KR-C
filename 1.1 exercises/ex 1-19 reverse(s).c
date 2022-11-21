#include<stdio.h>
#define MAXLINE 1000

int getline(char s[], int maxline);
void reverse(char s[]);

/*	reverse(s)���ַ���s�е��ַ�˳��ߵ�������ÿ�εߵ�һ���������е��ַ�˳��	*/
main() {
	char line[MAXLINE];

	while (getline(line, MAXLINE) > 0) {
		reverse(line);
		printf("%s\n", line);
	}
}

void reverse(char s[]) {
	int i, j;
	char temp;

	i = 0;
	while (s[i] != '\0')	/*	�ҵ��ַ�����ĩβ	*/
		++i;
	--i;		/*	�ų�'\0'	*/

	if (s[i] == '\n')
		--i;

	j = 0;
	while (j < i) {
		temp = s[j];
		s[j] = s[i];
		s[i] = temp;
		--i;
		++j;
	}
}

/*	��ȡ���룬�����س���	*/
int getline(char s[], int lim) {
	int c, i, j;

	j = 0;
	for (i = 0; (c = getchar()) != EOF && c != '\n'; ++i) {
		if (i < lim - 2) {		/*	s[lim-2]='\n'	s[lim-1]='\0'	*/
			s[j] = c;
			++j;
		}
		if (c == '\n') {
			s[j] = c;
			++j;		/*	��¼���Ƶ��ַ���s�е��ַ�����	*/
			++i;		/*	��¼�ַ�������(�������з�)		*/
		}
		/*if (c == 'q')
			break;*/
	}
	s[j] = '\0';
	return i;
}