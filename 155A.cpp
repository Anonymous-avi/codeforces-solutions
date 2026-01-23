#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>points(n);

    for(int i=0 ; i<n ; i++){
        cin>>points[i];
    }
    int best=points[0];
    int worst=points[0];
    int amazingCount=0;

    for(int i=1 ; i<n ; i++){
        if(points[i]>best){
            amazingCount++;
            best=points[i];
        }
        else if(points[i]<worst){
            amazingCount++;
            worst=points[i];
        }
    }
    cout<<amazingCount;
    return 0;


}