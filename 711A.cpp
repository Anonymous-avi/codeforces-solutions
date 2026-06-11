#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int count = 1;
    int temp = -1;
    int first = -1;
    int second = -1;

    int ans = n;

    vector<string> bus;
    string s;

    while(n--){
        cin >> s;
        bus.push_back(s);

        if(count == 1){   
            if(s[0]=='O' && s[1]=='O'){
                count++;
                temp = ans - n - 1;
                first = 0;
                second = 1;
            }
            else if(s[3]=='O' && s[4]=='O'){
                count++;
                temp = ans - n - 1;
                first = 3;
                second = 4;
            }
        }
    }

    if(count < 2){
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;

        bus[temp][first] = '+';
        bus[temp][second] = '+';

        for(int i = 0; i < ans; i++){
            cout << bus[i] << endl;
        }
    }

    return 0;
}