#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    getline(cin, s);
    s.erase(remove(s.begin(), s.end(), ' '), s.end());
    int len = s.size();
    int row = sqrt(len), col = row*row==len?row:row+1;
    row = row*col<len?row+1:row;
    for(int i=0; i<col; i++){
        for(int j=i; j<len; j+=col){
            cout<<s[j];
        }
        if(i!=col-1) cout<<' ';
    }
}
