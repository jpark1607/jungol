#include <stdio.h>

void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main(void) {
	int N = 0;
	int nArr[10] = {0, };
	int i = 0;
	int GCD = 0, LCM = 0;
	int comp = 0, temp = 0;
	int chk = 0;
	
	scanf("%d", &N);
	
	for(i = 0; i < N; i++) {
		scanf("%d", &nArr[i]);
	}
	
	GCD = nArr[0];
	LCM = nArr[0];
	
	for(i = 1; i < N; i++) {
		comp = nArr[i];
		if(GCD > comp) {
			swap(&GCD, &comp);
		}
		chk = comp % GCD;
		while(chk != 0) {
			temp = comp - GCD;
			comp = GCD;
			GCD = temp;
			
			if(GCD > comp) {
				swap(&GCD, &comp);
			}
			chk = comp % GCD;
		}
		
		LCM *= (nArr[i] / GCD) / (LCM / GCD);
	}
	
	printf("%d %d", GCD, LCM);
	return 0;
}

