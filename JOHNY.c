#include <stdio.h>
#include <stdlib.h>
 
int main(){
	int T,i;
	scanf("%d",&T);
	while(T--){
		int N,*arr,K,pos=0;
		scanf("%d",&N);
		arr = (int*)malloc(N*sizeof(int));
		for(i=0;i<N;i++){
			scanf("%d",&arr[i]);
		}
		scanf("%d",&K);
		for(i=0;i<N;i++){
			if(arr[i]<=arr[K-1]){
				pos++;
			}
		}
		printf("%d\n",pos);
	}
	return 0;
} 