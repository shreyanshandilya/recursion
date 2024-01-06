#include<bits/stdc++.h>
using namespace std;

void storeOccurences(int a[], int n, int i, int x, vector<int>& result) {
    if(n==0) return;
    if(a[i]==x) result.push_back(i);
    storeOccurences(a,n-1,i+1,x,result);
}

int main() {
    int a[] = {1};
    vector<int> result;
    storeOccurences(a,1,0,1,result);
    for(auto it: result) cout << it << " ";
    return 0;
}