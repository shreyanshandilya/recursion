#include<bits/stdc++.h>
using namespace std;

int firstIndex(int a[], int n, int i, int x) {
    if(n==0) return -1;
    if(a[0]==x) return i;
    return firstIndex(a+1,n-1,i+1,x);
}

int main() {
    int a[] = {2,1,2,1};
    cout << firstIndex(a,4,0,1);
    return 0;
}