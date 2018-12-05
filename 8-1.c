#include <stdio.h>
#include <string.h>

void reverse(char *a, char *b){
    char *tem;
    printf("%p\n%p\n",&a,a );
    tem=a;
    a=b;
    b=tem;
}


int main(int argc, char const *argv[])
{
    char in[10000];
    char *ptr=in;

    gets(in);

    int len=strlen(in);

    char save[len];
    char *prtsave=save;

    for (int i = 0; i < len; ++i)   save[i]=in[i];
    
    for (int i = 0; i < len/2; ++i) reverse(&in[i],&in[len-i-1]);

    for (int i = 0; i < len; ++i)   printf("%c", *(ptr+i));

    printf("\n");

    for (int i = 0; i < len; ++i)   printf("%c", *(prtsave+i));
    
    printf("\n");

    return 0;
}
