#include<iostream>
#include<map>
using namespace std;
map<long long int, long long int> dp;
long long int rec(long long int n)
{
	if(n==0)
		return 0;
	if(dp[n]>0)
		return dp[n];
	long long int var = rec(n/2) + rec(n/3) + rec(n/4);
	dp[n] = max(n,var);
	return dp[n];
}
int main()
{
	long long int n;
	while(scanf("%lld",&n)>0)
	{
		long long int sum = rec(n);
		cout<<sum<<endl;
	}
}