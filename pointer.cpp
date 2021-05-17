#include<bits/stdc++.h>
using namespace std;
void update(int *a,int *b) {
    int x = *a + *b;
    int y = abs(*a - *b);
    *a = x;
    *b = y;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    cin>>a>>b;
    update(pa, pb);
    cout<<a<<endl<<b;
    return 0;
}