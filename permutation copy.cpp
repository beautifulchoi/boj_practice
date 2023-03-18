#include <bits/stdc++.h>
using namespace std;

int find_star_idx(string s){
    int i=0;
    while(s[i]!=char('*')){
        i++;
    }
    return i;
}

int is_pat(string s,string pat, int idx){ //s는 테케, 테케 한글자인경우 걸러야
//    cout<<idx<<"\n";
    if(s.size()==1)return 0;
    for(int i=0; i<idx; i++){
        if(s[i]!=pat[i]){
            //cout<<"1x"<<s[i]<<""<<pat[i]<<"\n";
            return 0;
        }
    }
    int rest_len=pat.size()-idx;
    while(rest_len>0){
        if(s[s.size()-rest_len-1]!=pat[pat.size()-rest_len-1])
        {
            return 0;
        }
        rest_len--;
    }
    return 1;

}

int main(){
    int n;
    string pat, test;
    cin>>n;    
    cin>>pat;
    int star=find_star_idx(pat);
    
    for(int i=0; i<n; i++){
        cin>>test;
        int ret=is_pat(test,pat,star);
        if(ret==0)cout<<"NE\n";
        else cout<<"DA\n";

    }
    return 0;
}