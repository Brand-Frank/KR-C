#include<stdio.h>

/*	Description: ͳ��������ַ��ĸ��������� v-1
* 	- while
*	- '\n'
*/
main() {
	int nc = 0, nl = 0;	/* int	*/
	int c;

	while ((c = getchar()) != EOF) {
		++nc;	/*	numbers	*/
		if (c == '\n')
			++nl;
	}

	printf("nc = %d\nnl = %d\n", nc, nl);
}