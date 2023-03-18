#include <bits/stdc++.h>
using namespace std;

int n,m;
string mon;
map<int, string> map1;
map<string, int> map2;
vector <string> sv;

int main(){
    cin>>n>>m;
    for (int i=0; i<n; i++){
        cin>>mon;
        map1.insert({i+1, mon});
        map2.insert({mon, i+1});
    }

    for(int j=1; j<m+1; j++){
        string q;
        cin>>q;

         auto q2 = map2.find(q);
        
        if (q2 != map2.end()) sv.push_back(to_string(q2->second));//cout << q2->second<< "\n";
        else{
            istringstream iss(q);
            int q_new;
            iss >> q_new;
            auto q1 = map1.find(q_new);
            if (q1 != map1.end()) sv.push_back((q1->second));//cout << q1->second<< "\n";
        }
    }
    for(int k=0; k<sv.size(); k++){
        cout<<sv[k]<<"\n";
    }
    return 0;
}