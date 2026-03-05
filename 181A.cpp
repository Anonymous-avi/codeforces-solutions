#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ,m ;
    cin>>n>>m;
    vector<vector<char>>vec(n,vector<char>(m));//declaring a 2d vector matrix
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++){
          cin>>vec[i][j];
        }
    }
    vector<pair<int,int>> stars;

    // find positions of '*'
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(vec[i][j] == '*'){
                stars.push_back({i, j});
            }
        }
    }
 int r1 = stars[0].first, c1 = stars[0].second;
    int r2 = stars[1].first, c2 = stars[1].second;
    int r3 = stars[2].first, c3 = stars[2].second;

    int r4, c4;

    // find missing row
    if(r1 == r2) r4 = r3;
    else if(r1 == r3) r4 = r2;
    else r4 = r1;

    // find missing column
    if(c1 == c2) c4 = c3;
    else if(c1 == c3) c4 = c2;
    else c4 = c1;

    cout << r4 + 1 << " " << c4 + 1 << endl;



}