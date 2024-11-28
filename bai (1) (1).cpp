#include<bits/stdc++.h>

using namespace std;
double a,b,c,d;
int main(){
    cin>>a>>b>>c>>d;
    if (a == 0 || b == 0 || c == 0 || d ==0) cout<<0;
    else cout<<(a/abs(a))*(b/abs(b))*(c/abs(c))*(d/abs(d));
}
