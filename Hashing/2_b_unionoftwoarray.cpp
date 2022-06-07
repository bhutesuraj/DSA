#include<iostream>
#include<unordered_set>
#include<vector>
using namespace std;
// define a function who does union of two arrays
int unionoftwo(int a[],int b[],int m,int n){
    unordered_set<int>set;
    for(int i=0;i<m;i++){
        set.insert(a[i]);

    }
    for(int i=0;i<n;i++){
        set.insert(b[i]);
    }
// traversing the set and print it
    for(auto it=set.begin();it!=set.end();it++){
        cout<<*(it)<<" ";
    }

    cout<<endl;

    return set.size();
    }


int main(){
    int a[]={5,5,2,1,5};
    int m=sizeof(a)/sizeof(a[0]);
    int b[]={5,5,2,2,5,3,6};
    int n=sizeof(b)/sizeof(b[0]);
    cout<<unionoftwo(a,b,m,n);
    return 0;

}