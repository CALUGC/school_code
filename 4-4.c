#include <stdio.h>  
  
int main(int argc, char const *argv[])  
{  
  
    int in;  
    scanf("%d",&in);  //輸入一個數字
    for (int i = 1; i <= in; ++i)  //做一個迴圈 迴圈執行次數=輸入的數字
    {  
        for (int j = 1; j<=i; ++j)  //在迴圈裡做一個迴圈 迴圈執行次數=上一層的i
        {  
            printf("a");  //i=多少就會輸出多少a
        }  
        printf("\n");  //輸入完一列記得換行
    }  
    return 0;  
  
}  