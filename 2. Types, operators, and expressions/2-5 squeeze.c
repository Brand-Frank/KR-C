#include<stdio.h>

void squeeze(char s[], int c);

main() {
	//char s[5] = "Acsda";
	char s[5] = { 'A','c','s','w','a' };
	int c = 'b';		/*	��ɾ�����ַ���	*/

	squeeze(s, c);
	
	for(int i=0;i<5;++i)
		printf("%c", s[i]);
}

/*	squeeze()����:���ַ���s��ɾ���ַ�c	*/
void squeeze(char s[], int c) {
	int i, j;

	for (i = 0, j = 0; s[i] != '\0'; i++) {
		if (s[i] != c) {
			s[j] = s[i];	/*	�����൱�� s[j++] = s[i];	*/
			j++;
		}
	}
	s[j] = '\0';
}