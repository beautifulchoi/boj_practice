#include <bits/stdc++.h>

using namespace std;
int A,B,C;
int a,b;
int sum=0;
int arr[100]={0,};
int main(){
    cin>>A>>B>>C; 
    for(int i=0; i<3; i++){
        cin>>a>>b;
        for(int j=a; j<b; j++){
            arr[j]=arr[j]+1;
            }
        }
    for(int k=0; k<100; k++){
        if(arr[k]==1){
            sum=sum+A;
            }
        else if(arr[k]==2){
            sum=sum+(2*B);
            }
        else if(arr[k]==3){
            sum=sum+(3*C);
            }
        else continue;
        }
    cout<<sum;
    return 0;
}