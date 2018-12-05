#include <stdio.h>

void fun_value(int a,int b){

    a = a + b;
}

void fun_reference(int *a,int *b){

    *a = *a + *b; 

}

int main(int argc, char const *argv[])
{
    int in1,in2,save1,save2;
    
    scanf("%d %d",&in1,&in2);
    save1=in1; //把in1複製給save1
    save2=in2; //把in2複製給save2

    fun_value(in1,in2); //把兩變數給副程式
    
    printf("call by value of %d add %d is %d.\n",save1,save2,in1); //輸出

    fun_reference(&in1,&in2); //把兩變數的地址給副程式

    printf("call by reference of %d add %d is %d.\n",save1,save2,in1); //輸出



    return 0;
}


