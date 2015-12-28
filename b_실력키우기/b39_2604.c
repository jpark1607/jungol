#include <stdio.h>
int main(void) {
	char plate[50];
	char prePlate;
	int height = 0;
	int i = 0;
	
	scanf("%s", plate);
	
	prePlate = plate[0];
	height += 5;
	
	for(i = 0; plate[i] != '\0'; i++) {
		if(plate[i] == prePlate) {
			height += 5;
		}
		else {
			height += 10;
		}
		prePlate = plate[i];
	}
	
	printf("%d", height);
	return 0;
}
