#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int input_int;
	float input_float;
	
	printf("Enter an integer: ");
	scanf("%d", &input_int);
	
	printf("Enter an float: ");
	scanf("%f", &input_float);
	
	printf("integer:%d, float:%f\n", input_int, input_float);
	return 0;
}
