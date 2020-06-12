#include <stdio.h>

int main () {
	int n, horas;
	float porhora, sal;

	scanf("%d %d %f", &n, &horas, &porhora);

	sal = horas * porhora;

	printf("NUMBER = %d\nSALARY = U$ %.2f\n", n, sal);

	return 0;
}