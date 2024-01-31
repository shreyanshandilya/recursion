#include<bits/stdc++.h>
using namespace std;

void remove(char a[], char q) {
    if(a[0]=='\0') return;
    if(a[0]==q) {
        for(int i=0; a[i]!='\0'; i++) {
            a[i] = a[i+1];
        }
        remove(a,q);
    }
    else remove(a+1,q);
}

int main() {
    char a[] = "abcd";
    remove(a,'a');
    cout << a;
    return 0;
}