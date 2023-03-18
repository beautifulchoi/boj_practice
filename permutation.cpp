#include <bits/stdc++.h>
using namespace std;
int a[5] = {1, 2, 3,4,5};
int n = 3, r = 3; // r을 바꿔가면서 연습해보세요. :)

void print(){
    for(int i = 0; i < r; i++){
        cout << a[i] << " ";
    }   
    cout << "\n";
}

void makePermutation(int n, int r, int depth){
    if(r == depth){
        print();
        return;
    }
    for(int i = depth; i < n; i++){
        swap(a[i], a[depth]);
        cout<<i<<","<<depth<<"change:    ";        
        print();
        makePermutation(n, r, depth + 1);
        cout<<i<<","<<depth<<"change:    ";
        print();  
        swap(a[i], a[depth]);
    }
    return;
}
int main(){
    makePermutation(n, r, 0);
    return 0;
}