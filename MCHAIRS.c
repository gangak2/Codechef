#include <stdio.h>
#include <stdlib.h>
 
#define p 1000000007
 
long long int power(long long int a, long long int b, long long int MOD) {
long long int x = 1, y = a;
    while(b > 0) {
        if(b%2 == 1) {
            x=(x*y);
            if(x>MOD) x%=MOD;
        }
        y = (y*y);
        if(y>MOD) y%=MOD;
        b /= 2;
    }
    return x;
}
 
int main(){
	int T;
	scanf("%d\n",&T);
	while(T--){
		long long int N;
		scanf("%lld",&N);
		printf("%lld\n",power(2,N,p)-1);
	}
	return 0;
} 