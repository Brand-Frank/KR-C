#include<stdio.h>
/*	ͳ�ƿո��Ʊ���ͻ��з�����	*/

main() {
	int c;		/*	receive input from keyboard	*/
	int nspace, ntable, nline;
	
	nspace = ntable = nline = 0;
	while ((c = getchar()) != EOF) {
		if (c == ' ')
			++nspace;
		if (c == '\t')
			++ntable;
		if (c == '\n')
			++nline;
	}
	printf("Space = %d\nTable = %d\nLine = %d\n", nspace, ntable, nline);
}