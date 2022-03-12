#include <bits/stdc++.h>
using namespace std;

int leoPrimeFactor(unsigned long long n){
    int prime [] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67};
    int counter = 0;
    unsigned long long x = 1;
    for(int i=0; i<n; ++i){
        x *= prime[i];
        if(x <= n) counter++;
        else if(x > n) break;
    }
    return counter;
}

int main(){
    int t;
    cin >> t;
    unsigned long long n;
    vector<int> ans;
    while(t--){
        cin >> n;
        ans.push_back(leoPrimeFactor(n));
    }
    for(auto x : ans) cout << x << endl;
    return 0;
}
