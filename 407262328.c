#include <stdio.h>
#include <string.h>

#define str_len 100000 //預設位元最多可輸入100000
int main()
{
	char input[str_len];
	char mask[str_len];
	for (int i = 0; i < str_len; ++i)
	{
		mask[i]=1; //遮罩選用全為1
	}

	gets(input); //讀取input字串
	int input_len=strlen(input);

	printf("Output after first Xor caculate\n");

	for (int i = 0; i < input_len; ++i)
	{
		input[i]=(input[i]-48)^mask[i]; //與遮罩做xor
		printf("%d",input[i] );
	}
	printf("\nOutput after Second Xor caculate\n");

	for (int i = 0; i < input_len; ++i)
	{
		input[i]=input[i]^mask[i]; //與遮罩做第二次Xor
		printf("%d",input[i] );
	}
	return 0;
}
