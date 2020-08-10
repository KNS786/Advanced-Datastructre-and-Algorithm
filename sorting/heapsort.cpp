#include<iostream>
using namespace std;

int heapify(int arr[],int size,int i)
{
	int largest=i;
	int left=2*i+1;
	int right=2*i+2;
	
	  if(left < n && arr[left] > arr[lergest])
		  largest=left;
	  if(right < n && arr[right] > arr[lergest])
		  largest=right;
	  if(largest!=i)
	  {
		  swap(arr[i],arr[largest]);
		  heapify(arr,n,largest);
	  }

}
int heapsort(int arr[],int n)
{
    for(int i=n/2-1;i>=0;i--)
	   heapify(arr,n,i);
    for(int i=n-1;i>=0;i--){
	   swap(arr[0],arr[i]);
	   heapify(arr,i,0);
	}	   
    		
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;il
		cin>>arr[i];
    heapsort(arr,n);
  return 0;
	
}

