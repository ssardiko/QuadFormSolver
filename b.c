#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	if(argc != 4) {
		printf("Please enter 3 parameters! \n");
		return(0);
	}
	else {
		float a = atof(argv[1]);
		float b = atof(argv[2]);
		float c = atof(argv[3]);
		float d, e;

		d = -b + sqrt(b*b - 4*a*c);
		d = d/(2*a);
		e = -b - sqrt(b*b - 4*a*c);
		e = e/(2*a);
		printf("%f %f\n",d,e);

		return(0);

	}
}
