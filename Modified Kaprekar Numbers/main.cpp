#include <bits/stdc++.h>

using namespace std;

int digits(long n){
    string a = to_string(n);
    return a.size();
}

void kaprekar(long p, int &n){
    long l, r, div = pow(10,digits(p));
    r=p*p%div;
    l=(p*p-r)/div;
    if(r+l==p){
        n++;
        cout<<p<<" ";
    }
}

int main(){
    int counter = 0;
    long p, q;
    cin>>p>>q;
    while(p<=q){
        kaprekar(p, counter);
        p++;
    }
    if(counter==0) cout<<"INVALID RANGE";
}
