#include<bits/stdc++.h>
using namespace std;
int main(){
    int press[3][3];
    int light[3][3];
    for(int i=0 ; i<3 ; i++){
     for(int j=0 ; j<3 ; j++){
            cin>>press[i][j];
            light[i][j]=1;
        }
    }
    for(int i=0 ; i<3 ; i++){
        for(int j=0 ; j<3 ; j++){
            if(press[i][j]%2==1){
                light[i][j]^=1;

                if(i-1>=0){
                    light[i-1][j]^=1;
                }
                if(i+1<3){
                    light[i+1][j]^=1;
                }
                if(j-1>=0){
                    light[i][j-1]^=1;
                }
                if(j+1<3){
                    light[i][j+1]^=1;
                }
            }
        }
    }
    for(int i=0 ; i<3 ; i++){
        for(int j=0 ; j<3 ; j++){
            cout<<light[i][j];
        }
        cout<<endl;
    }
    return 0;
}