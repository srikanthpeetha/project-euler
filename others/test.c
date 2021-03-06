#include <stdio.h>
#include <math.h>

#define	N	600851475143

#define	divisible(x, y)		!(remainder((x),(y)))

/* Find the largest prime factor of 317584931803 */

int main(int argc, char *argv[]) {
	double mcp3(double n);
	printf("--- %.1f\n", mcp3(N));
	return 0;
}

double mcp3(register double n) {
	double sqrt(double x);
	double remainder(double x, double y);
	register double d = 3;
	register double rt;
	double count = 0;
	if(n < 2)
		return -1;
	while(divisible(n, 2)){
		n /= 2;
		count++;
	}
	 printf("-----%.1f\n",count);
	if(n == 1)
		return 2;
	rt = sqrt(n);
	while(d <= rt) {
		if(divisible(n, d)) {
			n /= d;
			rt = sqrt(n);
			continue;
		}
		d += 2;
		count++;
	}
	printf("-----%.1f\n",count);
	return n;
}
