#include <stdio.h>
void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main(void) {
	int nD1 = 0, nD2 = 0;
	int a = 0, b = 0;
	int GCD = 0, LCM = 0;
	int gCheck = 0;
	int temp = 0;
	
	scanf("%d %d", &nD1, &nD2);
	a = nD1;
	b = nD2;
	if(b > a) {
		swap(&a, &b);
	}
	gCheck = a % b;
	
	while(gCheck != 0) {
		temp = b;
		b = a - b;
		a = temp;
		if(b > a) {
			swap(&a, &b);
		}
		gCheck = a % b;
	}
	GCD = b;
	LCM = nD1 * (nD2 / b);
	
	printf("%d\n%d", GCD, LCM);
	return 0;
}
