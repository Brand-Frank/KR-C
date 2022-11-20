#include<stdio.h>
#define MAXLINE 1000
/*	Description: ���������е����ֵ	
*	main()		�Ƚϳ��Ȳ������������copy����
*	getline()	��ȡ���룬���㳤��
*	copy()		������֪���������
*/


int getline(char s[], int lim);
void copy(char to[], char from[]);

main() {
	int len;	/*	��ǰ�г���	*/
	int max;	/*	ĿǰΪֹ��г���	*/
	char line[MAXLINE];		/*	��ǰ��������	*/
	char longest[MAXLINE];	/*	���浱ǰ�����	*/

	max = 0;
	while ((len = getline(line, MAXLINE)) > 0) {
		if (len > max) {
			max = len;
			copy(longest, line);
		}
	}
	if (max > 0)
		printf("%s", longest);
	return 0;
}



/*	getline()	��һ�ж��뵽s�������䳤��
*	args1: s[]	��ȡ������
*	args2: lim	���������
*	retrun:int	�����еĳ���
*/
int getline(char s[], int lim) {
	char c = 0, i;

	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
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

/*	copy()		��from���Ƶ�to,�ٶ�to�㹻��	*/
void copy(char to[], char from[]) {
	int i;

	i = 0;
	while ((to[i] = from[i]) != '\0')
		++i;
}