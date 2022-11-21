#include <stdio.h>

// #define TIME1
#define TIME2

#ifdef TIME1
int main() {
	float fahr;
	for (fahr = 300; fahr >= 0; fahr -= 20)
		printf("%3.0f\t%6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32.0));
}
#else  //TIME2
int main() {
	float celsius;
	for (celsius = 0; celsius <= 60; celsius += 1)
		if(celsius == 0)	printf("Celsius to Fahr:\nCelsius\t\tFahr\n");
		else{
			printf("%3.0f\t\t%6.1f\n", celsius, (9.0 * celsius / 5.0) + 32.0);
		}
}
#endif