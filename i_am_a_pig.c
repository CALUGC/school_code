#include <string.h>
#include <stdio.h>

int main () {
	char in[10000];
	gets(in);
	for (int i = strlen(in)-1; i >= 0 ; --i){
		if(in[i]==' '){		
			for (int j = i+1;  ; j++){
 				printf("%c",in[j] );
 				if(in[j]==' ' || in[j]=='\0') break;	
 		}	
 		} 			
 	}
 	for (int i = 0 ;  ; ++i){
 		if(in[i]==' ' || in[i]=='\0') break;
 		printf("%c",in[i] );
 	}
 	return 0;
}