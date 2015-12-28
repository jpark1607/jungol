#include <stdio.h>

int main(void) {
	char bArr[8];
	int i = 0;
	int bin = 1;
	int dec = 0;
	
	scanf("%s", bArr);
	
	if(bArr[0] == '0') {
		for(i = 7; i > 0; i--) {
			if(bArr[i] == '1') {
				dec += bin;
			}
			bin *= 2;
		}
	}
	else {
		
		
		
		
	}
	104 
	01101000
	10011000
	printf("%d", dec);
	
	return 0;
}
