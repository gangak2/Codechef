#include<stdio.h>
#include<stdlib.h>
 
int main(){
	int T,K,d,n,v;
	char dot='.';
	scanf("%d",&T);
	while(T--){
		scanf("%d",&K);
		v=K++;
		if(v==0)	printf("3\n");
		else{
			n=103993;
			d=33102;
			while(K--){
				if(v==K){
					printf("%d%c",n/d,dot);
					}
				else 		printf("%d",n/d);
				n = (n%d)*10;
			}
			printf("\n");
		}
	}
} 