#include<bits/stdc++.h>
using namespace std;
void pattern(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=n-i-1;j++){
            cout<<" ";
        }
        for(int j=0;j<((2*i)-1);j++){
            cout<<"*";

        }
        for(int j=0;j<n-i-1;j++){
            cout<<" ";

        }
        cout<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    int n;
    
    for(int i=0;i<t;i++){
        cin>>n;
        pattern(n);
        
    }

}