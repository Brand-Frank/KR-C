#include<stdio.h>

unsigned getbits(unsigned x, int p, int n);

main() {
	unsigned int x, p, n;
	unsigned int result;

	scanf("%o%d%d", &x, &p, &n);		//����Ϊ16����

	result = getbits(x, p, n);
	printf("dec = %d\noct = %o", result, result);

	return 0;
}

/*	����x�д�������pλ��ʼ������nλ���ֶ�	*/
unsigned getbits(unsigned x, int p, int n) {
	return (x >> (p + 1 - n)) & ~(~0 << n);
}