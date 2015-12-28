#include <stdio.h>

void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main(void) {
	
	int garo = 0, sero = 0;
	int a = 0, b = 0;
	int temp = 0;
	int S = 0;
	
	scanf("%d %d", &garo, &sero);
	
	a = garo;
	b = sero;
	
	if(a < b) {
		swap(&a, &b);
	}
	
	while(a % b != 0) {
		temp = a - b;
		a = b;
		b = temp;
		if(a < b) {
			swap(&a, &b);
		}
	}
	
	S = (garo / b) * (sero / b);
	
	printf("%d", S);
}
