#include <bits/stdc++.h>
using namespace std;

string s;
map<char, int> ret;

int main(){
    cin>>s;
    for(int i=0; i<s.size(); i++){
        if(ret.find(s[i])!=ret.end()) ret[s[i]]++;
        else ret[s[i]]=1;
        //cout<<ret[s[i]]<<"\n";
    }

    if(s.size()%2==0){//짝수의 경우
        string str="";
        for(auto iter: ret){
            if(iter.second%2!=0){
                cout<<"I'm Sorry Hansoo";
                str="";
                return 0;
                break;
            }
            for(int k=0; k<iter.second /2; k++) str = str + iter.first;
        }
        cout<<str;
        reverse(str.begin(),str.end());
        cout<<str;
    }
    else{
        string str="";
        int cnt=0;
        char sp;
        for(auto iter: ret){
            if(cnt>1){
                cout<<"I'm Sorry Hansoo";
                str="";
                return 0;
                break;
            }
            if(iter.second%2!=0){
                sp=iter.first;
                cnt++;
            }
            for(int k=0; k<iter.second /2; k++) str = str + iter.first;
        }
        cout<<str+sp;
        reverse(str.begin(),str.end());
        cout<<str;

    }
    

    return 0;
}