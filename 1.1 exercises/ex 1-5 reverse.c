/**
 * @file ex 1-5 reverse.c
 * @author codebug (zhang_classmate@qq.com)
 * @brief 逆序打印温度转换表
 * @version 0.1
 * @date 2022-11-21 20:11
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include<stdio.h>

main() {
	float fahr, celsius;
	float lower = 0, upper = 300, step = 20;

	printf("Celsius\t  Fahr\n");

	celsius = upper;
	while (celsius >= lower) {
		fahr = (float)(9.0 * celsius / 5.0 + 32.0);
		printf("%3.0f\t%6.1f\n", celsius, fahr);
		celsius -= step;
	}
}