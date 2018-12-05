#include <stdio.h>
#include <string.h>

void reverse(char *a){

	int len=strlen(a);
	for (int i = 0; i < (len/2); ++i)
	{
		char tem=*(a+i);
		*(a+i)=*(a+len-i-1);
		*(a+len-i-1)=tem;
	}
}

int main(int argc, char const *argv[])
{
	char in[100000],*ptr=in;

	fgets(in,sizeof(in),stdin);
	
	int len=strlen(in);

	char copy[len],*copy_ptr=copy;

	for (int i = 0; i < len; ++i)	copy[i]=in[i];

	reverse(in);

	for (int i = 0; i < len; ++i)	printf("%c",*(ptr+i) );
	printf("\n");

	for (int i = 0; i < len; ++i)	printf("%c",*(copy_ptr+i) );
	printf("\n");

	return 0;
}