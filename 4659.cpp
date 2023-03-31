#include <bits/stdc++.h>
using namespace std;

int isVowel(char a){
    if(a=='a'||a=='e'||a=='o'||a=='u'||a=='i') return 1;
    else return 0;
}

void isAccept(string s, int i){
    if(i) printf("<%s> is acceptable\n", s.c_str());
    else printf("<%s> is not acceptable\n", s.c_str());
}

int main(){
    string str;
    while(1){
        int vow=0;
        cin>>str;
        if(str=="end") break;
        if (str.size()<=1) {
            if (isVowel(str[0]))isAccept(str,1);
            else isAccept(str,0); continue;
            }
        for(int i=0; i<str.size()-1; i++){
            int ch=1;
            int isv=isVowel(str[i]);
            //cout<<isv<<"\n";
            if((str[i]==str[i+1]) && str.substr(i,2)!="ee"&& str.substr(i,2)!="oo") ch=0;
            //cout<<isv;
            if(isv==1) vow=1;
            string sub=str.substr(i,3);
            if(sub.size()==3&&(isVowel(sub[0])==isVowel(sub[1]))&&(isVowel(sub[1])==isVowel(sub[2]))) ch=0; 
            if(ch==0) {isAccept(str, 0); break;}
            if(i==str.size()-2 && ch==1&&vow==1) isAccept(str,1);
        }
        if (isVowel(str[str.size()-1])) vow=1;
        if(vow==0){
            isAccept(str, 0);
        } 
    }

    return 0;
}