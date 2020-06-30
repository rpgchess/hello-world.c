#include <stdio.h>

int main (){
	int N, HORAS, MIN, SEG;

	scanf("%d", &N);

	HORAS = N / 3600;

	N = ( N - (HORAS * 3600));

	MIN = N / 60;

	N = (N - (MIN * 60));

	SEG = N;	

	printf ("%d:%d:%d\n", HORAS, MIN, SEG);

	return 0;
}