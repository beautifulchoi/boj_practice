#include <bits/stdc++.h>
using namespace std;


int main(){
    int h,w;
    cin>>h>>w;
    char map[h][w];
    int ret[h][w];
    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            char l;
            cin>>l;
            map[i][j]=l;
        }
    }
    vector<int> temp;
    for(int i=0; i<h; i++){
        temp.clear();
        for(int j=0; j<w; j++){
            if(map[i][j]=='c'){
                //cout<<'c';
                temp.push_back(j);
                ret[i][j]=0;
                //cout<<ret[i][j];
                //cout<<temp.size();
            }
            else if(!temp.size()) ret[i][j]=-1;
            else {ret[i][j]=j-temp.back();}
            //cout<<ret[i][j];
        }
    }
    
    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            cout<<ret[i][j]<<" ";
        }
        cout<<"\n";
    }



    

  return 0;
}