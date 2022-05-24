#include <bits/stdc++.h>
using namespace std;

vector<double> solve(int l, int s1, int s2, vector<unsigned long long> q){
    vector<double> ans;
    for(int i=0; i<q.size(); ++i){
        ans.push_back(abs((sqrt(2)*(sqrt(q[i])-l)/(s1-s2))));
    }
    return ans;
}

int main(){
    int l, s1, s2, n;
    unsigned long long temp;
    vector<unsigned long long> q;
    cin >> l >> s1 >> s2 >> n;
    for(int i=0; i<n; ++i){
        cin >> temp;
        q.push_back(temp);
    }
    vector<double> ans = solve(l, s1, s2, q);
    cout << std::fixed;
    for(auto x: ans){
        cout << x << endl;
    }
}
