#include<stdio.h>

unsigned setbits(unsigned x, int p, int n, unsigned y);

main() {
	unsigned int x, y;
	int p, n;
	unsigned int result;

	scanf("%d%d%d%d", &x, &p, &n,&y);		//����Ϊ16����

	result = setbits(x, p, n, y);
	printf("dec = %d\noct = %o", result, result);

	return 0;
}

/*	��x�д�������pλ��ʼ������nλ���ֶΣ�����Ϊy�����ұߵ�nλ��ֵ		*/
unsigned setbits(unsigned x, int p, int n, unsigned y) {
	return (x & ~((~(~0 << n)) << (p + 1 - n))) | ((y & (~((~0) << n))) << (p + 1 - n));
}