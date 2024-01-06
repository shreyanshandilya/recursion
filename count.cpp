#include<bits/stdc++.h>
using namespace std;

int countOccurences(int a[], int n,int x) {
    if(n==0) return 0;
    if(a[0]==x) return 1 + countOccurences(a,n-1,x);
    else return countOccurences(a+1,n-1,x);
}

int main() {
    int a[] = {1,2,3,4};
    cout << countOccurences(a,4,4);
    return 0;
}