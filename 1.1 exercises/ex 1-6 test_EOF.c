/*	��֤���ʽgetchar()!=EOF��ֵ��0����1	*/
#include<stdio.h>

int main() {
	int c;
	while (c = (getchar() != EOF))
		printf("%d\n", c);	//Star
	printf("%d - at EOF\n", c);
}