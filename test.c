#include <stdio.h>
#include <string.h>
#define  size 10000
int main()
{
    char in[size];
    fgets(in,sizeof(in),stdin);
    char *ptr;
    ptr=strtok(in," ()-"); //把空白()-全部篩掉
    printf("%s ",ptr );
    while(ptr!=NULL){
        ptr=strtok(NULL," ()-");
        if(ptr!=NULL)  printf("%s",ptr );
    }
    return 0;
}