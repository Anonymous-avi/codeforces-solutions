#include<bits/stdc++.h>
using namespace std;
int main(){
    int Y , W;
    cin>>Y>>W;
    int maxi=max(Y,W);
    int diff=7-maxi;
    int num=diff;
    int deno=6;
    int gcdi=__gcd(num,deno);
    num=num/gcdi;
    deno=deno/gcdi;
    cout<<num<<"/"<<deno;
    return 0;

}
