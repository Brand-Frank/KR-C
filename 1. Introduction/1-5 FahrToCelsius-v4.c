#include<stdio.h>
/**
 * @brief for loop and symbolic constant 
 * 
 */
#define LOWER 0
#define UPPER 300
#define STEP 20

int main() {
	int fahr;
	for (fahr = LOWER; fahr <= UPPER; fahr += STEP) {	/*	for	*/
		printf("Fahr:%4d\tCelsuis:%6.1f\n", fahr, 5.0 / 9.0 * (fahr - 32.0));
	}
}