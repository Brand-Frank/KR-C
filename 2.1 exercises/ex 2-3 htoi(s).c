#include<stdio.h>
#define YES 1
#define NO 0

int hoti(char s[]);

/*	test	(0x2E)	*/
main() {
	/*	pre test collective	*/
	char s[50] = "0x2E";		//	I have 0x2E pens.

	printf("%s was convert to %d\n", s, hoti(s));

	return 0;
}

/*	��ʮ������������ɵ��ַ���ת��Ϊ��֮�ȼ۵�����ֵ		*/
int hoti(char s[]) {
	int hexdigit, i, inhex, n;

	i = 0;
	if (s[i] == '0') {		//������ѡ��0x��0X
		++i;
		if (s[i] == 'x' || s[i] == 'X')
			++i;
	}

	n = 0;			//��Ҫ���ص�ֵ
	inhex = YES;	//assume��Ч��ʮ������ֵ
	for (; inhex == YES; ++i) {
		if (s[i] >= '0' && s[i] <= '9')
			hexdigit = s[i] - '0';
		else if (s[i] >= 'a' && s[i] <= 'f')
			hexdigit = s[i] - 'a' + 10;
		else if (s[i] >= 'A' && s[i] <= 'F')
			hexdigit = s[i] - 'A' + 10;		//exemplify: E -- (E-A+10 = 14)
		else
			inhex = NO;		//ת�������Լ��ж��Ƿ�Ϸ�
		if (inhex == YES)
			n = 16 * n + hexdigit;
	}
	return n;
}