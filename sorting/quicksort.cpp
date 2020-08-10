#include<iostream>
using namespace std;

int partision(int arr[],int low,int high)
{
	  int i=low,j=high;
	  int pivot=arr[low];
	  while(i<j)
	  {
		  do{
			  i++;
		  }while(pivot<arr[i]);
		  do{
			  j--;
		  }while(pivot>arr[j])
		  if(i<j)
		    swap(arr[i],arr[j]);
	  }
	  swap(pivot,arr[j]);
	return j;
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
   partision(arr,0,n);
   for(int i=0;i<n;i++)
	   cout<<arr[i]<<" ";
return 0;   
}