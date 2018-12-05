#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n;
	scanf("%d",&n);
	getchar();
	char in[n][n];
	for (int i = 0; i < n; ++i)
	{
		getchar();
		for (int j = 0; j < n; ++j)		scanf("%c",&in[i][j]);
		getchar();
	}
	for (int i = 0; i < n; ++i){
		for (int j = 0; j < n; ++j){
			if(in[i][j]=='Q'){
				for (int k = i; k < n; ++k){
					for (int l = j+1; l < n; ++l){
						if(in[k][l]=='Q'){
							if(i==k||j==l||(i+j==k+l)||(i-j==k-l)){								
								printf("No\n");
								return 0;
							}
						}
					}
				}
			}
		}
	}
	printf("Yes\n");
	return 0;
}