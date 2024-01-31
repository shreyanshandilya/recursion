#include<bits/stdc++.h>
using namespace std;

void printAllPermutations(string s, int i) {
    if(s[i]=='\0') {
        cout << s << endl;
        return;
    }
    for(int j=i; s[j]!='\0'; j++) {
        swap(s[i], s[j]);
        printAllPermutations(s,i+1);
        swap(s[i], s[j]);
    }
}

int main() {
    printAllPermutations("abc",0);
    return 0;
}