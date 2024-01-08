#include<bits/stdc++.h>
using namespace std;
void explainPair(){
    pair<int,int> p={1,3};
    cout<<p.first<<" "<<p.second<<endl;
    pair<int, pair<int,int>>p1={1,{3,4}};
    cout<<p1.first<<endl<<p1.second.first<<endl<<p1.second.second;
    pair<int,int> arr[]={{1,2},{2,3},{5,1}};
    cout<<endl<<arr[1].second;
    }
int main(){
    explainPair();
    }