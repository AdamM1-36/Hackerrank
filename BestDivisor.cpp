#include <bits/stdc++.h>
using namespace std;

int sumDigits(int x){
    int ans=0;
    while(x){
        ans += x%10;
        x /= 10;
    }
    return ans;
}

int main(){
    int x, max = 0, ans;
    cin >> x;
    vector<int> arr;
    for(int i=1; i<=x; ++i){
        if(x%i == 0) arr.push_back(i);
    }
    for(int i=0; i<arr.size(); ++i){
        if(sumDigits(arr[i]) > max){
            max = sumDigits(arr[i]);
            ans = arr[i];
        }
    }
    cout << ans;
    return 0;
}
