/**
 * @file 1-8 cnt_character-v1.c
 * @author codebug (zhang_classmate@qq.com)
 * @brief ͳ��������ַ����� v-1
 * @version 0.1
 * @date 2022-11-21 20:11
 * 
 * @copyright Copyright (c) 2022
 * @note - EOF: end of file(�ļ�����)
 */
#include<stdio.h>
// #define TIME1
#define TIME2

#ifdef TIME1 
int main() {
	int nc = 0, c;	/* number of characters*/

	while ((c = getchar()) != EOF) {
		putchar(c);
		++nc;
	}
	printf("nc = %d\n", nc);
}

#else //TIME2
int main() {
	int cnt = 0, c;	/* number of characters*/

	while ((c = getchar()) != EOF) { //Note:interesting method-2
		putchar(c);
		if(c == 'q') break;
		++cnt;
	}
	printf("\ncnt = %d\n", cnt);
}
#endif