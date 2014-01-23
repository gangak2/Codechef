#include<stdio.h>
#include<stdlib.h>
 
int main(){
	int T;
	scanf("%d",&T);
	while(T--){
		int best_plan=0,i;
		double current_rate;
		double current_bill;
		int usage_mins,plans;
		scanf("%lf%d%d",&current_rate,&usage_mins,&plans);
		current_bill = usage_mins*current_rate;
		for(i=1;i<=plans;i++){
			int activ_months;
			double rate,cost;
			scanf("%d%lf%lf",&activ_months,&rate,&cost);
			if(rate*usage_mins+cost/activ_months < current_bill){
				best_plan=i;
				current_bill = rate*usage_mins+cost/activ_months; 
			}
		}
		printf("%d\n",best_plan);
	}
	return 0;
} 