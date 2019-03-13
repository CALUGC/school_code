#include <cstdio>
#include <iostream>
#include <cmath>
#include <vector>
#define si 1000000
using namespace std;
bool prime_table[si];

void table (){
	for (int i = 0; i < si; ++i)
		prime_table[i]=true;
	prime_table[0]=prime_table[1]=false;
	for (int i = 2; i < sqrt(si); ++i)
	{
		if(prime_table[i]){
			for (int j = i*i; j <= si; j+=i)
			{
				prime_table[j]=false;
			}
		}
	}

}

void do_thing(int in){
	int count_column=0;
		
		for (int i = 0; i <= in; ++i)
		{
			
			if(prime_table[i]){
				if(count_column%5==0)
					printf("%d.",(count_column/5)+1 );
				printf(" %d",i );
				count_column++;
				if(count_column%5==0)
					printf("\n");
			}
		}
}



int main(){

	table();
	int in;
	while(cin>>in){
		do_thing(in);
		vector <int> v;
		for (int i = 2; i <= in; ++i)
	    {
	    	if(prime_table[i]){
	    		while(in%i==0){
	    			v.push_back(i);
	    			in/=i;
	    		}
	    	}
	    }
	    printf(" \n");
	    if(!v.empty()){
	    	// printf("aaaa\n");
	    	for (int j = 0; j < v.size() ; ++j){

	    		if(j!=0){
	    			printf("*");
	    		}
	    		printf("%d",v[j]);
	    	}
	    	printf("\n");
	    }
	    else{
	    	printf("1*%d\n",in );
	    }
	}
	return 0;
}
