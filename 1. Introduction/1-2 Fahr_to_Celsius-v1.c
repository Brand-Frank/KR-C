/**
 * @brief print Fahr to Celsuis while fahr = 0, 20, ..., 300	
 * @note - lower to upper
 * 		 - int
 */
#include <stdio.h>

#define FOR
//#define WHILE

#ifdef FOR
int main() {
	int fahr, celsuis;		/*	int	*/ 
	int lower = 0, upper = 300, step = 20;
	fahr = lower;
	while (fahr <= upper) {
		celsuis = 5 * (fahr - 32) / 9;
		printf("Fahr:%4d\tCelsuis:%6d\n", fahr, celsuis);
		fahr += step;
	}
}

#else //while
int main() {
	int fahr, celsuis;		/*	int	*/ 
	int upper = 300, step = 20;
	for(fahr = 0; fahr <= upper; fahr += step) {
		celsuis = 5 * (fahr - 32) / 9;
		//celsuis = 5/9*(fahr-32);  //ERROR:
		printf("Fahr:%4d\tCelsuis:%6d\n", fahr, celsuis);
	}
}
#endif