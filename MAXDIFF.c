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
	int T,i;
	scanf("%d",&T);
	while(T--){
		int *w,temp,totalsum=0,N,K,sum1=0,sum2=0;
		scanf("%d%d",&N,&K);
		w = (int *)malloc(N*sizeof(int));
		for(i=0;i<N;i++){
			scanf("%d",&w[i]);
			totalsum+=w[i];
		}
		temp=totalsum;
		MergeSort(w,0,N-1);
		for(i=0;i<K;i++){
			sum1 += w[i]; 
		}
		for(i=0;i<N-K;i++){
			sum2 += w[i]; 
		}
		if(sum1<=sum2){
			totalsum -= 2*sum1;
		}
		else{
			totalsum -= 2*sum2;
		}
	printf("%d\n",totalsum);
	}
} 