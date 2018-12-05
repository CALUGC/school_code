#include <stdio.h>
#include <string.h>
#define size 1000

int main(int argc, char const *argv[])
{
    char s1[size],s2[size];
    int num;
    fgets(s1,sizeof(s1),stdin);
    fgets(s2,sizeof(s2),stdin);
    s1[strlen(s1)-1]='\0';
    scanf("%d",&num);
    strncat(s1,s2,num);
    puts(s1);
    return 0;
}
