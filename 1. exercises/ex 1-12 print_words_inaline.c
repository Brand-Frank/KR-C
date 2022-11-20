#include<stdio.h>
#define OUT 0
#define IN 1
/*	ÿ��һ�����ʵ���ʽ��ӡ���	*/

main() {
	int c;	/*	receive input from keyboard	*/
	int state = OUT;

	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\n' || c == '\t') {
			if (state == IN) {		/*	�пո����ڵ����ڲ�--����	*/
				putchar('\n');
				state = OUT;
			}
		}
		else if (state == OUT) {	/*	ÿ�����ʵ�����ĸ	*/
			state = IN;
			putchar(c);
		}
		else
			putchar(c);
	}
}

/*	test:input()
*	"abc"
*	"abc def gehi"
*	"  abc def ghi"
*	"  abc def ghi "
*/