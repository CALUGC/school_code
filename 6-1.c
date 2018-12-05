#include <stdio.h>
#include <math.h>
void find_perfect_number(long long int x){
    for (int i = 1; ; ++i) {
        long long int sum=0; //2(n)-1的所有因數和
        long long int temp=((pow(2,i))-1); /*根據2^(n-1)*2^(n)-1的正因數和=(2(n)-1)*(2(n)-1的所有因數和)
        其中temp保留2(n)-1 待找到(2(n)-1的所有因數和後再乘回去*/
        if((pow(2,i-1)*(pow(2,i))-1)>x) break;
        else  
            for (int j = 1; j <= (int)sqrt(temp) ; ++j){
                if(!(temp%j))   sum+=(j+(temp/j));
            }
            if(sum/2==(pow(2,i-1))&&i!=1) /*因所有正因數和(不包含本身)相加剛好等於其本身
            換句話說就是其正因數和(包含自己)的一半等於其本身*/
            printf("%lld\n",temp*sum/2);
    }
}
int main(int argc, char const *argv[]){
    long long int in;
    scanf("%lld",&in);
    find_perfect_number(in);
    return 0;
}
