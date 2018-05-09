#include<iostream>
using namespace std;
int main()
{
	int n,d;
	cin>>n>>d;
	int a[n];
	int i,pos=0;
	for(i=0;i<n;i++)
		cin>>a[i];
	pos=pos+d;
	int x;
	x=pos;
	do{
		cout<<a[pos]<<" ";
		pos=(pos+1)%n;
	}while(pos!=x);
	return 0;
}