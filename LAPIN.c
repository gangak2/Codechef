#include<stdio.h>
#include<stdlib.h>
 
int main(){
	int N;
	scanf("%d\n",&N);
	while(N--){
		char input[1000],c = getchar();
		int i,k=0;
		while(c != '\n'){
			input[k] = c;
			c = getchar();
			k++;
		}
		//printf("%d\n",i);
		int first[26] = {0},second[26] = {0};
		for(i=0;i<k/2;i++){
			switch(input[i]){
				case('a'):	first[0]++;
				case('b'):	first[1]++;
				case('c'):	first[2]++;
				case('d'):	first[3]++;
				case('e'):	first[4]++;
				case('f'):	first[5]++;
				case('g'):	first[6]++;
				case('h'):	first[7]++;
				case('i'):	first[8]++;
				case('j'):	first[9]++;
				case('k'):	first[10]++;
				case('l'):	first[11]++;
				case('m'):	first[12]++;
				case('n'):	first[13]++;
				case('o'):	first[14]++;
				case('p'):	first[15]++;
				case('q'):	first[16]++;
				case('r'):	first[17]++;
				case('s'):	first[18]++;
				case('t'):	first[19]++;
				case('u'):	first[20]++;
				case('v'):	first[21]++;
				case('w'):	first[22]++;
				case('x'):	first[23]++;
				case('y'):	first[24]++;
				case('z'):	first[25]++;
			}
		}
		for(i=(k+1)/2;i<k;i++){
			switch(input[i]){
				case('a'):	second[0]++;
				case('b'):	second[1]++;
				case('c'):	second[2]++;
				case('d'):	second[3]++;
				case('e'):	second[4]++;
				case('f'):	second[5]++;
				case('g'):	second[6]++;
				case('h'):	second[7]++;
				case('i'):	second[8]++;
				case('j'):	second[9]++;
				case('k'):	second[10]++;
				case('l'):	second[11]++;
				case('m'):	second[12]++;
				case('n'):	second[13]++;
				case('o'):	second[14]++;
				case('p'):	second[15]++;
				case('q'):	second[16]++;
				case('r'):	second[17]++;
				case('s'):	second[18]++;
				case('t'):	second[19]++;
				case('u'):	second[20]++;
				case('v'):	second[21]++;
				case('w'):	second[22]++;
				case('x'):	second[23]++;
				case('y'):	second[24]++;
				case('z'):	second[25]++;
			}
		}
		for(i=0;i<26;i++){
			if(first[i] == second[i]) continue;
			else{
				
				printf("NO\n");
				break;
			}
		}
		if(i==26) printf("YES\n");
	}
} 