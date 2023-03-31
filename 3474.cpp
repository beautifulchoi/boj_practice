#include <bits/stdc++.h>
using namespace std;

int countFive(int n){
    int i=1;
    int cnt=0;
    while(n>=pow(5,i)){
        int temp=n/pow(5,i);
        //cout<<pow(5,i)<<"\n";
        cnt+=temp;
        i++;
    }
    return cnt;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t,n;
    cin>>t;
    for(int i=0; i<t; i++){
        cin>>n;
        int ret=countFive(n);
        cout<<ret<<"\n";
    }
    

    return 0;
}