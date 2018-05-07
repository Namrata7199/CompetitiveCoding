#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int t,n,k;
	cin>>t;
	while(t--)
	{
		cin>>n;
		long int a[n];
		int i,x;
		for(i=0;i<n;i++)
			cin>>a[i];
		cin>>k;
		x=a[k-1];
		sort(a,a+n);
		for(i=0;i<n;i++)
			if(a[i]==x)
				break;
		cout<<i+1<<endl;
	}
}