#include<stdio.h>

main() {

	//���ѽϳ�������ת��Ϊ�϶̵����ͻ�char��ʱ�������ĸ�λ���ֽ���������
	//int i = 69;
	//char c = 69;

	//c = i;
	//i = c;
	///*c = i;*/

	//printf("i = %d\nc = %c\n", i, c);

	//x��float���� i��int���ͣ���ôx=i��i=x��ִ�е�ʱ��Ҫ��������ת��
	float x = 78.0;
	int i = 80;
	x = i;		//int to float --> x = 80.0
	i = x;		//float to int --> i = 80
	printf("x = %f\ni = %d", x, i);
}
