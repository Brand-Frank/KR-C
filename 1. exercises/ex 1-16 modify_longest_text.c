#include<stdio.h>
#define MAXLINE 100

int getline(char line[], int maxline);
void copy(char to[], char from[]);

/*	�޸Ĵ�ӡ��ı��ĳ���������ʹ֮���Դ�ӡ���ⳤ�ȵ������У��������ܶ�ش�ӡ�ı�	*/
main() {
	int len;				/*	current line length	*/
	int max;				/*	maximum length seen so far	*/
	char line[MAXLINE];		/*	current input line	*/
	char longest[MAXLINE];	/*	longest line saved here	*/

	max = 0;
	while ((len = getline(line, MAXLINE)) > 0) {
		printf("%d\toutput: %s\n", len, line);		/*	print current line and its length	*/
		if (len > max) {
			max = len;
			copy(longest, line);
		}
	}
	if (max > 0)
		printf("%s", longest);
	return 0;
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

/*	��from���Ƶ�to	*/
void copy(char to[], char from[]) {
	int i;

	i = 0;
	while ((to[i] = from[i]) != '\0')
		++i;
}