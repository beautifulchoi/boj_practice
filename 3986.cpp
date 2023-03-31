#include <bits/stdc++.h>
using namespace std;


int n;
string s;
int cnt=0;
int main(){
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>s;
        string str;
        str=s;
        if(s.size()%2!=0) continue;
        while(str.size()!=0){
            string tmp="";
            for(int k=0; k<str.size()-1; k++){
                if(str[k]!=str[k+1]){
                    tmp=tmp+str[k];
                    if(k>=str.size()-2) 
                    tmp=tmp+str[k+1];
                }
                else{
                    if(k<str.size()-2) k++;
                }
            }
            //cout<<tmp<<"\n";
            if(str==tmp) break;
            else str=tmp;
        }
        if(str.size()==0) cnt++;
    }
    cout<<cnt;    

    return 0;
}