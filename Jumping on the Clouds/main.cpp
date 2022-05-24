#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, temp, counter = 0, loc = 0;
    vector<int> c;
    cin >> n;
    for(int i=0; i<n; ++i){
        cin >> temp;
        c.push_back(temp);
    }
    while(loc<n-1){
        if(c[loc+1] == 0 && c[loc+2] != 0){
            loc++;
            //cout << loc-1 << " jump to " << loc << endl;
        }
        else{
            loc+=2;
            //cout << loc-2 << " jump to " << loc << endl;
        }
        counter++;
    }
    cout << counter;
}
