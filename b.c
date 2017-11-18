#include <stdio.h>
#include <math.h>

void main() {
	float a,b,c,d,e;

	printf("Enter your A, B, and C value\n");
	scanf("%f %f %f",&a, &b, &c);

	d = -b + sqrt(b*b - 4*a*c);
	d = d/2*a;
	e = -b - sqrt(b*b - 4*a*c);
	e = e/2*a;

	printf("%f %f\n",d,e);
	return;
}
