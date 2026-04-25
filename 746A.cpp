#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int sets=min({a,b/2,c/4});
    cout<<sets*7;
    return 0;
}