#include<iostream>
using namespace std;
int INF=(1<<29);
int maxi(int a,int b)
{
	return a>b?a:b;
}

int RodCut(int price[],int n)
{
	int profit[n+1];
	proft[0]=0;
	int maxProfit;
	for(int i=1;i<=n;i++)
	{
		maxProfit=-INF;
		for(int j=0;j<i;j++)
		   maxProject=maxi(maxProject,price[j]+profit[i-j-1]);
		profit[i]=maxProject;
		
	}
	return maxProject;
}
int main()
{
	int priceList[]={1,5,8,9,1,2,4,5,6};
	int rodLength =sizeof(priceList)/sizeof(priceList[0]);
	cout<<"Maximum pice "<<RodCut(priceList,rodLength);
	return 0;
	
}
