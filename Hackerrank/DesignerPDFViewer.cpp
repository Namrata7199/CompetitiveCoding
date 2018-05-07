#include <bits/stdc++.h>
#include<algorithm>
using namespace std;

int designerPdfViewer(vector <int> h, string word) {
    // Complete this function
    //cout<<"ngfhjgih";
    int i,j=0;
    vector <int> x(10);
    for(i=0;word[i]!='\0';i++)
    {
        x[j]=h[word[i]-97];
        j++;
    }
    int y = *max_element(x.begin(),x.end());
    //cout<<y;
    return y*word.size();
}

int main() {
    vector<int> h(26);
    for(int h_i = 0; h_i < 26; h_i++){
       cin >> h[h_i];
    }
    string word;
    cin >> word;
    int result = designerPdfViewer(h, word);
    cout << result << endl;
    return 0;
}
