#include <bits/stdc++.h>

using namespace std;

int viralAdvertising(int n) {
    // Complete this function
    int sum=0;
    int x=5;
    int m=n;
    while(m--)
    {
    	sum+=x/2;
    	x=(x/2)*3;
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    int result = viralAdvertising(n);
    cout << result << endl;
    return 0;
}