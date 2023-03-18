#include <bits/stdc++.h>
using namespace std;

int n, k, a;
int best=-1e9; int temp=0;
vector<int> ret;

int main(){
    cin>>n>>k;
    for(int i=0; i<n; i++){
        cin>>a;
        ret.push_back(a);
        temp=temp+a;
        
        if(i>=k-1){
            if(temp>best) best=temp;
            temp=temp-ret[i-k+1];
        }

    }
    cout<<best;
    return 0;
}