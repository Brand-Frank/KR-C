#include<stdio.h>

/*	Description: ͳ��������ַ����� v-2
	- long
	- for()	�����
*/
main() {
	double nc;	/* double	*/
	for (nc = 0; getchar() != EOF; ++nc)
		;
	
	printf("nc = %.0f\n", nc);
}