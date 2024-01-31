#include<bits/stdc++.h>
using namespace std;

void replace(char a[], char q, char w) {
    if(a[0]=='\0') return;
    if(a[0]==q) a[0] = w;
    replace(a+1,q,w);
}

int main() {
    char a[] = "abcd";
    replace(a,'a','x');
    cout << a;
    return 0;
}