#include <stdio.h>  
  
int main(int argc, char const *argv[])  
{  
    int sum=0,count=0;  
    while(1){  //做一個會不斷執行的while迴圈
        int in;  
        scanf("%d",&in);  //輸入欲平均的數字
        if(in==0) break;  //如果數字為零(題目設為結束) 則結束迴圈
        sum+=in;  //將輸入的數字加入sum變數裡，用來記所輸入數字的和
        count++;  //每輸入一個數字count就加一，用來記有多少數字
    }  
    printf("%d\n",sum/count);  //輸出數字和除以數字數量，也就是平均
    return 0;  
}  