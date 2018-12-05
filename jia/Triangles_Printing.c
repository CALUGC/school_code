#include<stdio.h>

#include<stdlib.h>

void printA(int);

void printB(int);

void printC(int);

void printD(int);


int main(void){

 char c;

 int num,flag=0;

 while(scanf("%c %d",&c,&num)!=EOF){

  //getchar();


  if((flag&&num!=0)&&c!=10) printf("\n");
  flag=1;


  if (c == 'A')

   printA(num);

  else if (c == 'B')

   printB(num);

  else if (c == 'C')

   printC(num);

  else if (c == 'D')

   printD(num);

 }

 return 0;

}

void printA(int num) {

 int i,j;

 for (i=1; i<=num; i++)
{
    for (j=1; j<=i; j++)
    {
        printf("*");
    }

    printf("\n");

}

}


void printB(int num) {

 int i,j;

 for (i=num; i>=1; i--){

        for (j=1; j<=i; j++){

            printf("*");
        }
        printf("\n");
 }

}


void printC(int num) {

 int i,j;

 for (i=1; i<=num; i++){

        for (j=1; j<=num; j++){

            if (j <= (num-i)){
                printf(" ");
            }

            else{
                printf("*");
            }
        }
    printf("\n");
 }
}

void printD(int num) {

 int i,j;

 for (i=1; i<=num; i++){

        for (j=1; j<=num; j++){

            if (j >= i){

                printf("*");
            }

        else{

            printf(" ");
        }
        }
    printf("\n");
 }


}