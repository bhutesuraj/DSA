#include<iostream>
#include <queue>
#include<vector>
using namespace std;
int kthsmallest(vector<int>& nums, int k){
    priority_queue<int,vector<int>,greater<int>>minh;
    for(int i=0;i<nums.size();i++){
        minh.push(nums[i]);
        if(minh.size()>k){
            minh.pop();
        }
    }
    return minh.top();
}
int main(){
    vector<int> nums={1,2,3,4,5,6,7,8,9,10};
    int k=1;
    cout<<kthsmallest(nums,k);
    return 0;
}