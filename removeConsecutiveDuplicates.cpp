#include<bits/stdc++.h>
using namespace std;

void replaceDuplicates(char a[]) {
    if(a[0]=='\0') return;
    if(a[0]==a[1]) {
        for(int i=0; a[i]!='\0'; i++) {
            a[i] = a[i+1];
        }
        replaceDuplicates(a);
    }
    else replaceDuplicates(a+1);
}

int main() {
    char a[] = "aabbccddeeff";
    replaceDuplicates(a);
    cout << a;
    return 0;
}