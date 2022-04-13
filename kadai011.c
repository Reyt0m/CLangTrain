#include <stdio.h>

int	main (void)
{
	int	BMI;
	double	height;
	double	stdWeight;

	BMI = 22;
	printf("身長は何cmですか？\n");
	scanf("%le",&height);
	stdWeight = (height/100) * (height/100) * BMI;
	printf("%f",stdWeight);
	return	(0);
}
