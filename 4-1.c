#include <stdio.h>  
  
int main(int argc, char const *argv[])  
{  
    int a,b,count,de=1,ans;  
  
    scanf("%d %d",&a,&b);  //輸入兩數
  
    count=a>b?a:b;  //選一個比較大的數字做迴圈
  
    for (int i = 2; i < count; ++i)  //做一個起始值為2的for迴圈
    {  
        while(a%i==0&&b%i==0){  //只要兩數可同除i則做:
            de*=i;  //將公因數乘進de變數裡
            a/=i;   //將a跟b都除以i
            b/=i;  
        }  
  
    }  
  
    ans=(a*b)*de;  //將互質的兩數a,b乘上最大公因數
    printf("%d\n",ans);  

    return 0;  
}