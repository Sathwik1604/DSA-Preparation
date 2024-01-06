#include<bits/stdc++.h>
using namespace std;
void pattern(int n){
    for(int i=1;i<=n;i++){
        for(int j=0;j<n-i+1;j++){
            cout<<"*";
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