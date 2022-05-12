#include <stdio.h>

struct pair
{
  int min;
  int max;
};

struct pair getMinMax(int arr[], int low, int high)
{
  struct pair minmax, mml, mmr;      
  int mid;
   
  if (low == high)
  {
     minmax.max = arr[low];
     minmax.min = arr[low];    
     return minmax;
  }   
   
  if (high == low + 1)
  { 
     if (arr[low] > arr[high]) 
     {
        minmax.max = arr[low];
        minmax.min = arr[high];
     } 
     else
     {
        minmax.max = arr[high];
        minmax.min = arr[low];
     } 
     return minmax;
  }
   
  mid = (low + high)/2; 
  mml = getMinMax(arr, low, mid);
  mmr = getMinMax(arr, mid+1, high); 
   
  if (mml.min < mmr.min)
    minmax.min = mml.min;
  else
    minmax.min = mmr.min;    
  if (mml.max > mmr.max)
    minmax.max = mml.max;
  else
    minmax.max = mmr.max;    
  
  return minmax;
}
int main()
{
    int a[8]={12,-3,8,-1,-9,78,-23,62};
    int n=8;
	int i=0,j=n-1;
	struct pair m1 = getMinMax(a,i,j);
	printf("%d %d",m1.min,m1.max);
}
