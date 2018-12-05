#include <string.h>
#include <stdio.h>
 
int main () {
 char in[10000];
 gets(in);
 int len= strlen(in);
 int count=0;
 for (int i = len-1; i >= 0 ; --i)
 {
 	if(in[i]==' ') {		
 		for (int j = i+1; count > 0 ; count--,j++)
 		{
 			printf("%c",in[j] );
 		}
 		printf(" ");
 		count=0;
 	}
 	else count++;
 	
 	if(i==0){
 		for (int i = 0; ; ++i)
 		{
 			if(in[i]!=' '){
 				printf("%c",in[i] );
 				break;
 			}
 		}
 	}
 }
}