#include<stdio.h>
/*	Description: ͳ�ƿո�/�Ʊ��/���з����� - v1	
*/

main() {
	int ns = 0, nt = 0, nl = 0, total = 0;
	int c = 0;
	while ((c = getchar()) != EOF) {
		++total;
		if (c == ' ')
			++ns;
		else if (c == '\t')
			++nt;
		else if (c == '\n')
			++nl;
	}
	printf("Spaces = %d\tTables = %d\tLines = %d\n", ns, nt, nl);
}