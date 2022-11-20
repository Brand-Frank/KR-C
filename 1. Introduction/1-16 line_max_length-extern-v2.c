#include<stdio.h>
#define MAXLINE 1000
/*	Description: ���������е����ֵ
*	- extern �����ڴ�(share memory)
*/

int max;	/*	ĿǰΪֹ��г���	*/
char line[MAXLINE];
char longest[MAXLINE];

int getline(void);
void copy(void);

main() {
	int len;
	extern int max;
	extern char longest[];

	max = 0;
	while ((len = getline()) > 0) {
		if (len > max) {
			max = len;
			copy();
		}
	}
	if (max > 0)
		printf("%s", longest);
	return 0;
}



/*	getline()	��һ�ж��뵽s�������䳤��	*/
int getline(void) {
	char c, i;
	extern char line[];

	for (i = 0; i < MAXLINE-1 && (c = getchar()) != EOF && c != '\n'; ++i) {
		if (c == 'q')	//replace EOF with q to quit!
			break;
		line[i] = c;
	}
	if (c == '\n') {
		line[i] = c;
		++i;
	}

	line[i] = '\0';	//���������з�ʱ�����һλ��'\0'.
	return i;		//������'\0'.
}

/*	copy()		��from���Ƶ�to,�ٶ�to�㹻��	*/
void copy(void) {
	int i;
	extern char line[], longest[];

	i = 0;
	while ((longest[i] = line[i]) != '\0')
		++i;
}