#include<stdio.h>

int bitcount(unsigned x);

main() {
	unsigned int x;

	scanf("%d", &x);

	printf("n(1) = %d\n", bitcount(x));

	return 0;
}

/*	bitcount()����: ͳ��x��ֵλ1�Ķ�����λ��	*/
int bitcount(unsigned x) {
	int i;

	for (i = 0; x != 0; x >>= 1)		//��x���ƣ����λ��1�Աȣ�Ϊ1�� i ��һ
		if (x & 01)
			i++;

	return i;
}