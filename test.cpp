#include <bits/stdc++.h>
using namespace std;

int n, k, a;
int best=0; int temp=0;
vector<int> ret;

int main(){
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a;
        ret.push_back(a);
        }
    for(int i=0; i<n; i++){
        cout<<ret[i]<<" ";
        }
    return 0;
}