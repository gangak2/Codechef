#include<stdio.h>
#include<stdlib.h>
 
int main(){
	int T;
	scanf("%d",&T);
	while(T--){
		long long int N,K;
		scanf("%lld%lld",&N,&K);
		if(K!=0){
			printf("%lld %lld\n",N/K,N%K);
		}
		else{
			printf("0 %lld\n",N);
		}
	}
	return 0;
} 