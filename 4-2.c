#include <stdio.h>  
  
int main(int argc, char const *argv[])  
{  
    int in;  
    scanf("%d",&in);  //輸入一個數字
    for (int i = 1; i <= in; ++i)  //設置一個for迴圈，其會執行輸入數字之次數 從1開始
    {  
        if (i%10==0)  //如果逢10的倍數就輸出數字+換行  
            printf("%d\n",i );    
        else  
        printf("%d ",i );  //如果不是10的倍數就輸出數字並空格
    }  
    return 0;  
}  