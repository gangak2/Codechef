#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
int perfect_squarearr[100001];
int num_perfect[100001];
 
void perfectsquare(long long int x){
	long long int y = x*x;
	int flag=0;
	while(y!=0){
		if(y%10 == 2 || y%10 == 3 || y%10 == 5 || y%10 == 6 || y%10 == 7 || y%10 == 8){
			flag=1;
			break;
		}
		y/=10;
	}
	if(flag==1){
		perfect_squarearr[x]=-1;
		num_perfect[x]=num_perfect[x-1];
		}
	else{
		perfect_squarearr[x]=1;
		if(x>0)	num_perfect[x]=num_perfect[x-1]+1;
	}
}
 
int main(){
	long long int i;
	num_perfect[0]=0;
	num_perfect[1]=0;
	for(i=1;i<100001;i++){
		perfectsquare(i);
	}
	int T;
	scanf("%d",&T);
	while(T--){
		long long int add=0;
		long long int a,b;
		scanf("%lld%lld",&a,&b);
		long long int c = (int)sqrt(a);
		long long int d = (int)sqrt(b);
		if(c*c==a && perfect_squarearr[c]==1)	add++;
		//if(d*d==b && perfect_squarearr[d]==1)	add++;
		//printf("%lld\t%lld\t%lld\n",c,d,add);
		printf("%lld\n",num_perfect[d]-num_perfect[c]+add);
	}
	return 0;
} 