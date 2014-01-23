#include<stdio.h>
#include<stdlib.h>
 
double Calculate_expected_gain(double p){
	double return_val;
	if(p == 0.5){
		return_val = 0;
	}
	else if(p<0.5){
		return_val = (1-2*p)*p*10000;
	}
	else if(p>0.5){
		return_val = (2*p-1)*(1-p)*10000;
	}
	return return_val;
}
 
int main(){
	int N;
	scanf("%d\n",&N);
	double Expected_gain=0;
	while(N--){
		double prob;
		scanf("%lf\n",&prob);
		Expected_gain = Calculate_expected_gain(prob);
		printf("%lf\n",10000+Expected_gain);
	}
	return 0;
} 
