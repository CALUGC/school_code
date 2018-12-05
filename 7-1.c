#include <stdio.h>



int main(int argc, char const *argv[])
{
	int in[10];
	for (int i = 0; i < 10; ++i)
	{
		scanf("%d",&in[i]);
	}
	for (int i = 0; i < 10; ++i)
	{
		for (int i = 0; i < 9; ++i)
		{
			int temp=in[i];
			if(in[i]>in[i+1]){
			in[i]=in[i+1];
			in[i+1]=temp;
		}
		}
	}
	for (int i = 0; i < 10; ++i)
	{
		if(i!=0) printf(" ");
		printf("%d",in[i] );
		if(i==9) printf("\n");
	}
	return 0;
}