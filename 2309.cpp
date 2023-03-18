#include <bits/stdc++.h>

using namespace std;
int t;
int arr[9];
int i1,i2;
void solve(int sum){
    int stat=0;
    for(int i=0; i<9; i++){
        if(stat==1) break;
        for(int j=i; j<9; j++){
            if(sum-arr[i]-arr[j]==100){
                stat=1;
                //printf("끝");
                for(int k=0; k<9; k++){
                    if ((k==i)||(k==j)) continue;
                    printf("%d\n", arr[k]);
                }
                break;
            }
        }
    }
}

int main(){
    int sum=0;
    for(int i=0; i<9; i++){
        cin>>arr[i];
        sum=sum+arr[i];
    }
    sort(arr, arr+9);
    printf("\n");
    solve(sum);
    
    return 0;
}