#include<bits/stdc++.h>
using namespace std;
int INF=(1<<29);
int selectionsort(int arr[],int n)
{
	 int mini=-INF;
	 for(int i=0;i<n-1;i++)
	 {
		 
		 for(int j=i+1;j<n;j++)
		 {
			 if(arr[j]<arr[i])
				mini=j;
		 }
		 swap(arr[mini],arr[j]);
	 }
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	selectionsort(arr,n);
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	return 0;
}