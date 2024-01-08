#include<bits/stdc++.h>
using namespace std;
void explainDeque(){
    deque<int>dq;
    dq.push_back(1); //{1}
    dq.emplace_back(2); //{1,2}
    dq.push_front(4); //{4,1,2}
    dq.emplace_front(3); //{3,4,1,2}
     
    for(auto it:dq){
        cout<<it;
    }
    cout<<endl;

    dq.pop_back();  //{3,4,1}
    cout<<endl;
    dq.pop_front();  //{4,1}
    cout<<endl;
    cout<<dq.back(); //1
    
    cout<<endl;
    cout<<dq.front();   //4
    cout<<endl;
    

}
int main(){
    explainDeque();
}