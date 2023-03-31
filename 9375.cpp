#include <bits/stdc++.h>
using namespace std;

vector<string> types;
int t,n;
string cloth, type;
vector<int> ret;

int main(){
    cin>>t;
    for(int i=0;i<t; i++){
        cin>>n;
        int ti[10000];
        fill_n(ti, 10000, 1); 
        for(int j=0; j<n; j++){
            cin>>cloth>>type;
            if(find(types.begin(), types.end(), type)==types.end()){
                types.push_back(type);
            }
            else{
               int idx= find(types.begin(), types.end(), type)-types.begin();
               ti[idx]++;
            }
        }
        int sum=1; 
        for(int k=0; k<types.size(); k++){
            //cout<<ti[k]<<"ti[k]\n";
            sum=sum*(ti[k]+1);
        }
        //cout<<sum<<"\n";
        ret.push_back(sum-1);     
    }
    for(int a=0; a<ret.size(); a++) cout<<ret[a]<<"\n";
    return 0;
}