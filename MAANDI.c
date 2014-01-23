#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
int isoverlucky(int K){
	int flag = 0;
	while(K != 0){
		if(K%10 == 4 || K%10 == 7){
			flag = 1;
			break;
		}
		else {
			K/= 10;
		}
	}
	return flag;
}
int main(){
	int N,i,T,count;
	scanf("%d",&N);
	while(N--){
		count = 0;
		scanf("%d",&T);
		for(i=1;i<sqrt(T);i++){
			if((T%i) == 0){
				if(isoverlucky(i)) count++;
				if(isoverlucky(T/i)) count++;
			}
		}
		printf("%d\n",count);
	}
	return 0;
} 