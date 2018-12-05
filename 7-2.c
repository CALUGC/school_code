#include <stdio.h>

int main(){
	int n,count=0; //count下面會用到 先歸零
	scanf("%d",&n); //輸入整數n 代表幾x幾矩陣
	getchar(); //吃題目的enter
	char in,arr[2][n]; //宣告可放皇后的x,y座標的陣列arr 因為有n個皇后 所以開[2][n]
	for (int i = 0; i < n; ++i){

		getchar(); //吃題目的enter

		for (int j = 0; j < n; ++j){

			scanf("%c",&in); //讀取in 總共n*n次(雙層for loop)
			
			if(in=='Q'){ //如果輸入是皇后
				arr[0][count]=i; //x座標存給arr[0][count]
				arr[1][count]=j; //y座標存給arr[1][count]
				count++; //當前位置已經放滿,讓count+1儲存下一組座標
			}
		}
		getchar(); //吃題目的enter
	}


	for (int i = 0; i < n; ++i){

		for (int j = i+1; j < n; ++j){
			
			if(arr[0][i]==arr[0][j]||arr[1][i]==arr[1][j]||(arr[0][i]+arr[1][i]==arr[0][j]+arr[1][j])||(arr[0][i]-arr[1][i]==arr[0][j]-arr[1][j])){
				printf("No\n");
				return 0;
			}
		}
	}
	printf("Yes\n");
	return 0;
}