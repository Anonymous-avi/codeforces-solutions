#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int totallitres=k*l;
    int mlitresfortoast=totallitres/nl;
    int limetoast=c*d;
    int salttoast=p/np;
    int result=min({mlitresfortoast , limetoast , salttoast});
    int finalans=result/n;
    cout<<finalans;

    return 0;
}