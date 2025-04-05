#include <stdio.h> 
#include <math.h>
#include "chuong trinh tich phan.h"

double f(double x) {
	return pow(x, 2);
}
int main() {
	int a, b; 
	scanf_s("%d %d", &a, &b);
	double result = tichphan(a,b);
	printf("%.4lf \n", result );
	return 0;
}