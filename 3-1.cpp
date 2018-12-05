#include <stdio.h>

int main(int argc, char const *argv[])
{
	float w,h,bmi;
	scanf("%f %f",&h,&w);
	bmi=w/((h/100)*(h/100));
	if(bmi>=30)
		printf("Obese\n");
	else if(bmi<30&&bmi>=24.9)
		printf("Overweight\n");
	else if(bmi<24.9&&bmi>=18.5)
		printf("Normal\n");
	else
		printf("Underweight\n");
	return 0;
}