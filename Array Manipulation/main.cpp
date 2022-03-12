#include <bits/stdc++.h>
using namespace std;

int main(){
    long int n, m, a, b, k, max=0, temp=0;
    cin>>n>>m;
    long int *x= new long int[n+1]();
    for(int i=0; i<m; i++){
        cin>>a>>b>>k;
        x[a]+=k;
        if(b+1<=n) x[b+1]-=k;
    }
    for(long int i=0; i<=n; i++){
        temp+= x[i];
        if(max<temp) max=temp;
    }
    cout<<max;
}
