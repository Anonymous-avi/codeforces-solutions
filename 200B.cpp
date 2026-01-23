#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    double sum=0;
    int pi;
    for(int i=0 ; i<n ; i++){
       
        cin>>pi;

        sum=sum+pi;


    }
    double den=n*100;
    double result=sum/den;
    double ans=result*100;

    cout << fixed << setprecision(10) << ans;

    return 0;
}