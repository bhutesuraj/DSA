#include<iostream>
#include<unordered_set>
#include<vector>
using namespace std;
// define a function who does intersection of two arrays
int intersectionoftwo(int a[],int b[],int m,int n){
    unordered_set<int>st;
    for(int i=0;i<m;i++){
        st.insert(a[i]);

    }
    int cnt=0;
    for(int i=0;i<n;i++){
        if(st.find(b[i])==st.end()){
            cnt++;
            st.erase(b[i]);
        }
    }
    // traversing the set and print unique elements
    for(auto it=st.begin();it!=st.end();it++){
        cout<<*(it)<<" ";
    }

    cout<<endl;

    return cnt;
}

   



int main(){
    int a[]={5,5,2,1,5};
    int m=sizeof(a)/sizeof(a[0]);
    int b[]={5,5,2,2,5,3,6};
    int n=sizeof(b)/sizeof(b[0]);
    cout<<intersectionoftwo(a,b,m,n);
    return 0;

}