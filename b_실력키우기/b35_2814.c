#include <stdio.h>

int main(void) {
	char bArr[30];
	int de = 0, bi = 0;
	int len = 0;
	int i = 0;

	scanf("%s", bArr);
 
	while(bArr[len] != '\0') {
		len++;
	}

	bi = 1;
	for(i = len - 1; i >= 0; i--) {	
		if(bArr[i] % 2 == 0) {
			de += 0;
		}
		else {
			de += bi;
		}
		bi *= 2;
	}
 
	printf("%d\n", de);
	return 0;
}
