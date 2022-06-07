#include<iostream>
#include <queue>
#include<vector>
using namespace std;
int kthsmallest(vector<int>& nums, int k){
    priority_queue<int> maxh;
    for(int i=0;i<nums.size();i++){
        maxh.push(nums[i]);
        if(maxh.size()>k){
            maxh.pop();
        }
        
    }
    return maxh.top();
}
int main(){
    vector<int> nums={1,2,3,4,5,6,7,8,9,10};
    int k=5;
    cout<<kthsmallest(nums,k);
    return 0;
}