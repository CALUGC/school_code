#include <stdio.h>
#include <string.h>
#define  size 10000
int main()
{
    char in[size];
    int flag=1; //flag用來印區碼與號碼之間的空白
    fgets(in,sizeof(in),stdin);
    char *ptr;
    ptr=strtok(in," ()-"); //把空白()-全部篩掉
    while(ptr!=NULL){
        printf("%s",ptr );
        ptr=strtok(NULL," ()-");
        if(flag>0){ //這個if只會執行一次
            flag--;
            printf(" ");
        }
    }
    return 0;
}