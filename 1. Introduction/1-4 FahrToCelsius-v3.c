#include<stdio.h>
/*	Description: print Fahr to Celsuis while fahr = 0, 20, ..., 300
	- lower to upper
	- for: �ʺϳ�ʼ�������Ӳ������ǵ�����䲢���߼���ص����Ρ�
*/

main() {
	int fahr;
	for (fahr = 0; fahr <= 300; fahr += 20) {	/*	for	*/
		printf("Fahr:%4d\tCelsuis:%6.1f\n", fahr, 5.0 / 9.0 * (fahr - 32.0));
	}
}