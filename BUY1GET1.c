#include<stdio.h>
#include<stdlib.h>
 
int main()
{
	char string[300];
	int i,T,N[52];
	scanf("%d",&T);
	fgets(string, 300,stdin);
while(T--){
	for(i=0;i<52;i++) N[i]=0;
	fgets(string, 300,stdin);
	for(i=0;string[i] !='\n';i++)
	{
	switch(string[i])
		{
		case 'a' : {N[0]++; continue;}
		case 'b' : {N[1]++; continue;}
		case 'c' : {N[2]++; continue;}
		case 'd' : {N[3]++; continue;}
		case 'e' : {N[4]++; continue;}
		case 'f' : {N[5]++; continue;}
		case 'g' : {N[6]++; continue;}
		case 'h' : {N[7]++; continue;}
		case 'i' : {N[8]++; continue;}
		case 'j' : {N[9]++; continue;}
		case 'k' : {N[10]++; continue;}
		case 'l' : {N[11]++; continue;}
		case 'm' : {N[12]++; continue;}
		case 'n' : {N[13]++; continue;}
		case 'o' : {N[14]++; continue;}
		case 'p' : {N[15]++; continue;}
		case 'q' : {N[16]++; continue;}
		case 'r' : {N[17]++; continue;}
		case 's' : {N[18]++; continue;}
		case 't' : {N[19]++; continue;}
		case 'u' : {N[20]++; continue;}
		case 'v' : {N[21]++; continue;}
		case 'w' : {N[22]++; continue;}
		case 'x' : {N[23]++; continue;}
		case 'y' : {N[24]++; continue;}
		case 'z' : {N[25]++; continue;}
		case 'A' : {N[26]++; continue;}
		case 'B' : {N[27]++; continue;}
		case 'C' : {N[28]++; continue;}
		case 'D' : {N[29]++; continue;}
		case 'E' : {N[30]++; continue;}
		case 'F' : {N[31]++; continue;}
		case 'G' : {N[32]++; continue;}
		case 'H' : {N[33]++; continue;}
		case 'I' : {N[34]++; continue;}
		case 'J' : {N[35]++; continue;}
		case 'K' : {N[36]++; continue;}
		case 'L' : {N[37]++; continue;}
		case 'M' : {N[38]++; continue;}
		case 'N' : {N[39]++; continue;}
		case 'O' : {N[40]++; continue;}
		case 'P' : {N[41]++; continue;}
		case 'Q' : {N[42]++; continue;}
		case 'R' : {N[43]++; continue;}
		case 'S' : {N[44]++; continue;}
		case 'T' : {N[45]++; continue;}
		case 'U' : {N[46]++; continue;}
		case 'V' : {N[47]++; continue;}
		case 'W' : {N[48]++; continue;}
		case 'X' : {N[49]++; continue;}
		case 'Y' : {N[50]++; continue;}
		case 'Z' : {N[51]++; continue;}
		default : continue;
		}
	}
	int sum=0;
	for(i=0;i<52;i++){
		sum += (N[i]+1)/2;
	}
	printf("%d\n",sum);
	}
return 0;
}
