#include<bits/stdc++.h>
using namespace std;
void explainVector(){
    vector<int> v;              //line1
    v.push_back(1);             //line2
    v.emplace_back(2);          //line3
    vector<pair<int,int>>vec;   //line4
    vec.push_back({1,2});       //line5
    vec.emplace_back(1,2);      //line6
    vector<int>v3(5,100);        //line7
    vector<int> v4(5);           //line8
    vector<int> v1(5,20);       //line9
    vector<int>v2(v1);          //line10
    vector<int>::iterator it=v.begin();
    it++;
    cout<<*(it)<<" ";
    it=it+2;
    cout<<*(it)<<" ";
    //vector<int>::iterator it=v1.end();
   // vector<int>::iterator it=v1.rend();
    //vector<int>::iterator it=v1.rbegin();

    cout<<v[0]<<" "<<v.at(0);
    cout<<v.back()<<" ";
    
    for(vector<int>::iterator it=v.begin();it!=v.end();it++){
        cout<<*(it)<<" ";
    }
    for(auto it=v.begin();it!=v.end();it++){
        cout<<*(it)<<" ";
    }
    for(auto it:v){
        cout<<endl;
        cout<<it<<" ";
    }

 
    /*for all the below code, consider the input as 
    {10,20,12,23} and predicted output as given below in the commented lines*/
    /**********/
    //input:{10,20,12,23}
    v.erase(v.begin()+1);
    //output: {10,12,23}
    /*********/
    /**********/
    //input:{10,20,12,23}
    v.erase(v.begin()+1);
    //output: {10,12,23}
    /*********/
    //input:{10,20,12,23,35}
    v.erase(v.begin()+2,v.begin()+4);
    //output: {10,20,35}
    /*********/
    /*******/
    vector<int>v(2,100); //output: {100,100}
    v.insert(v.begin(),300); //output:{300,100,100}
    v.insert(v.begin()+1,2,10); //{300,10,10,100,100}
    vector<int>copy(2,50); //{50,50}
    v.insert(v.begin(),copy.begin(),copy.end()); //{50,50,300,10,10,100,100}
    /*****************/
    /*******/
    /*input:{10,20}*/
    cout<<v.size(); //output:2
    /*********/
    /**********/
    //input: {10,20}
    v.pop_back(); //output:10
    /**********/
    /*********/
    //input:v1->{10,20} v2->{30,40}
    v1.swap(v2);
    //output v1->{30,40} v2->{10,20}
    /*******/
    /******/
    v.clear(); //erases the entire vector
    /**********/
    cout<<v.empty(); // output:true if empty and output:false  if not empty






    
    


        


}
int main(){
    explainVector();
}