#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
double get_area(int x1, int y1, int x2, int y2, int x3, int y3){
	double s1 = pow(pow((x1-x2),2)+pow((y1-y2),2),0.5);
	double s2 = pow(pow((x2-x3),2)+pow((y2-y3),2),0.5);
	double s3 = pow(pow((x3-x1),2)+pow((y3-y1),2),0.5);
	double s = (s1+s2+s3)/2;
	return pow(s*(s-s1)*(s-s2)*(s-s3),0.5);
}
 
 
int main(){
	int N;
	scanf("%d",&N);
	if(N==1){
		printf("%d %d",N,N);
	}
	else{
		int smallest,largest;
		int x1,x2,x3,y1,y2,y3;
		double area_smallest,area_largest,area1,area2,area;
		double s1,s2,s3;
		scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
		area1 = get_area(x1,y1,x2,y2,x3,y3);
		scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
		area2 = get_area(x1,y1,x2,y2,x3,y3);
		if(area1 > area2){
			area_smallest = area2;
			area_largest = area1;
			smallest = 2;
			largest = 1;
		}
		else if(area1 < area2){
			area_smallest = area1;
			area_largest = area2;
			smallest = 1;
			largest = 2;
		}
		else{
			area_smallest = area2;
			area_largest = area1;
			smallest = 2;
			largest = 2;
		}
		int T=N-2,count=2;
		while(T--){
			count++;
			scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
			area = get_area(x1,y1,x2,y2,x3,y3);
			if(area <= area_smallest){
				area_smallest = area;
				smallest = count;
			}
			if(area >= area_largest){
				area_largest = area;
				largest = count;
			}
		}
		printf("%d %d\n",smallest,largest);
	}
	return 0;
} 