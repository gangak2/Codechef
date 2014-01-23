#include<stdio.h>
#include<stdlib.h>
 
void Merge(int *array, int left, int mid, int right);
 
void MergeSort(int *array, int left, int right)
{
        int mid = (left+right)/2;
        if(left<right)
        {
                MergeSort(array,left,mid);
                MergeSort(array,mid+1,right);
                Merge(array,left,mid,right);
        }
}
 
void Merge(int *array, int left, int mid, int right)
{
        int tempArray[right-left+1];
        int pos=0,lpos = left,rpos = mid + 1;
        while(lpos <= mid && rpos <= right)
        {
                if(array[lpos] < array[rpos])
                {
                        tempArray[pos++] = array[lpos++];
                }
                else
                {
                        tempArray[pos++] = array[rpos++];
                }
        }
        while(lpos <= mid)  tempArray[pos++] = array[lpos++];
        while(rpos <= right)tempArray[pos++] = array[rpos++];
        int iter;
        for(iter = 0;iter < pos; iter++)
        {
                array[iter+left] = tempArray[iter];
        }
        return;
}
 
int main(){
	int T;
	scanf("%d",&T);
	while(T--){
		int n,m,drunk=0;
		scanf("%d %d",&n,&m);
		int i,rounds[m],counts[n],bottles[n];
		for(i=0;i<m;i++){
			scanf("%d",&rounds[i]);
		}
		int **drinks;
		drinks = (int**)malloc(n*sizeof(int*));
		for(i=0;i<n;i++){
			int j;
			scanf("%d",&bottles[i]);
			drinks[i]=malloc(bottles[i]*sizeof(int));
			for(j=0;j<bottles[i];j++){
				scanf("%d",&drinks[i][j]);
			}
			MergeSort(drinks[i],0,bottles[i]-1);
		}
		for(i=0;i<n;i++){
			counts[i]=0;
		}
		for(i=0;i<m;i++){
			if(bottles[rounds[i]]-1-counts[rounds[i]] >= 0){
				drunk+=drinks[rounds[i]][bottles[rounds[i]]-1-counts[rounds[i]]];
			}		
			counts[rounds[i]]++;
		}
		printf("%d\n",drunk);
	}
	return 0;
} 