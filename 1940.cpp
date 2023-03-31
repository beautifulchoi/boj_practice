#include <bits/stdc++.h>
using namespace std;

vector<int> arr;
int n,m,e;
int main(){

    cin>>n;
    cin>>m;
    for(int i=0; i<n; i++){
    cin>>e;
    arr.push_back(e);
    }
    int ret=0;
    for(int j=0; j<arr.size()-1; j++){
        for(int k=j+1; k<arr.size(); k++){
            
            if(arr[j]+arr[k]==m) ret++;
        }
    }
    cout<<ret;

    return 0;
}