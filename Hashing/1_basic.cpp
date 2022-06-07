#include<iostream>
#include<unordered_set>
#include<vector>
using namespace std;
int main(){
    unordered_set<int> s;

    // insert some elements
    s.insert(1);
    s.insert(2);

    // check whether an element is present or not
    if(s.find(3)==s.end()){
        cout<<"not found"<<endl;
    }
    else{
        cout<<"found"<<endl;
    }

    // printing the elements
    for(auto it=s.begin();it!=s.end();it++){
        cout<<*(it)<<" "<<endl;

    }
    cout<<s.count(1)<<endl;

    // erase an element
    s.erase(s.begin(),s.end());
    cout<<s.size()<<endl;
   
    // s.clear();
    // cout<<s.size()<<endl;
}