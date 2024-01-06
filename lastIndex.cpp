#include<bits/stdc++.h>
using namespace std;

int lastIndex(int a[], int n, int i, int x) {
    if(n==0) return -1;
    if(a[i]==x) return i;
    return lastIndex(a,n-1,i-1,x);
}

int lastIndex2(int a[], int n, int x) {
    if(n==0) return -1;
    if(a[n-1]==x) return n-1;
    return lastIndex2(a,n-1,x);
}

int lastIndex3(int a[], int n, int x, int i) {
    if(n==0) return -1;
    int q = lastIndex3(a,n-1,x,i+1);
    if(q==-1) {
        if(a[i]==x) return i;
        else return -1;
    }
    return lastIndex3(a,n-1,x,i+1);
}

int main() {
    int a[] = {1,2,2,4};
    cout << lastIndex3(a,4,2,0);
    return 0;
}