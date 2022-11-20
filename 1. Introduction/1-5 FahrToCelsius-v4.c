#include<stdio.h>
/*	Description: print Fahr to Celsuis while fahr = 0, 20, ..., 300
	- lower to upper
	- for(): �ʺϳ�ʼ�������Ӳ������ǵ�����䲢���߼���ص����Ρ�
	- #define
*/
#define LOWER 0
#define UPPER 300
#define STEP 20

main() {
	int fahr;
	for (fahr = LOWER; fahr <= UPPER; fahr += STEP) {	/*	for	*/
		printf("Fahr:%4d\tCelsuis:%6.1f\n", fahr, 5.0 / 9.0 * (fahr - 32.0));
	}
}