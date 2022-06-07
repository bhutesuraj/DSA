#include<iostream>
#include<unordered_set>
#include<vector>
using namespace std;

// define a function to count the number of distinct elements in an array
int countdistinct(int a[],int n){
    unordered_set<int>set;
    for(int i=0;i<n;i++){
        set.insert(a[i]);
    }
// we are using set which allow only unique elements
    return set.size();
}
int main(){
    int a[]={5,5};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<countdistinct(a,n);

}



