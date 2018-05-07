#include <bits/stdc++.h>

using namespace std;

int rev(int x)
{
	int rem=0,r,n;
	n=x;
	while(n>0)
	{
		r=n%10;
		rem=rem*10+r;
		n=n/10;
	}
	return rem;

}
int beautifulDays(int i, int j, int k) {
    // Complete this function
    int x,count=0;
    for(x=i;x<=j;x++)
    {
    	int y = rev(x);
    	int z = y-x;
    	if(z%k==0)
    		count++;
    }
    return count;
}

int main() {
    int i;
    int j;
    int k;
    cin >> i >> j >> k;
    int result = beautifulDays(i, j, k);
    cout << result << endl;
    return 0;
}
