#include <stdio.h>
#include <stdlib.h>

int main (){
	int a, b, c, MAIORAB, MAIORC;

	scanf("%d %d %d", &a, &b, &c);

	MAIORAB = ((a+b+abs(a-b))/2);

	MAIORC = ((c+MAIORAB+abs(c-MAIORAB))/2);

	printf("%d eh o maior\n", MAIORC);

	return 0;
}