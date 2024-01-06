#include<bits/stdc++.h>
using namespace std;

void printAllPosition(int a[], int n, int i, int x) {
    if(i==n) return;
    if(a[i]==x) cout << i << " ";
    printAllPosition(a,n,i+1,x);
}

int main() {
    int a[] = {4,4,4,4};
    printAllPosition(a,4,0,4);
    return 0;
}