#include<stdio.h>
/**
 * @brief for: 适合初始化和增加步长都是单独语句并且逻辑相关的情形。
 */

int main() {
	int fahr;
	for (fahr = 0; fahr <= 300; fahr += 20) {	/*	for	*/
		printf("Fahr:%4d\tCelsuis:%6.1f\n", fahr, 5.0 / 9.0 * (fahr - 32.0));
	}
}