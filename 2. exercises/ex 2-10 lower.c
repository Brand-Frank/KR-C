#include<stdio.h>

int lower(int c);

main() {
	char c;

	scanf("%c", &c);

	printf("%c\n", lower(c));

	return 0;
}

/*	lower():����д��ĸת��ΪСд��ĸ	*/
int lower(int c) {
	return (c >= 'A' && c <= 'Z') ? (c + 'a' - 'A') : (c);
}