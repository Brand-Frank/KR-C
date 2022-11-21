#include<stdio.h>
#define MAXLINE 100

int getline(char s[], int maxline);
int removes(char s[]);

/*	ɾ��ÿ��������ĩβ�Ŀո��Ʊ������ɾ����ȫ�ǿո����	*/
main() {
	char line[MAXLINE];

	while (getline(line, MAXLINE) > 0) {
		if (removes(line) > 0)		/*	i<0 ��Ϊ����	*/
			printf("%s", line);
	}
}

/*	ɾ���ַ���s��β�Ŀո��Ʊ��	*/
int removes(char s[]) {
	int i;

	i = 0;
	while (s[i] != '\n')	/*	�ҵ����з�	*/
		++i;

	--i;	/*	��ʱ�ų����з�'\n'	*/
	while (i >= 0 && (s[i] == ' ' || s[i] == '\t'))
		--i;	/*	�����ո���Ʊ���ͼ�ȥ	*/

	if (i >= 0) {	/*	�ж��Ƿ�Ϊ����	*/
		++i;
		s[i] = '\n';
		++i;
		s[i] = '\0';
	}
	return i;
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