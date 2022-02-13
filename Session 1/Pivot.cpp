// problem link: https://leetcode.com/problems/find-pivot-index/
#include<bits/stdc++.h>
using namespace std;
int pivotIndex(vector<int>& nums) {
        int n=nums.size(); //Define n to be the size of the vector.
        int p[n];
        p[0]=nums[0];
        for(int i=1;i<n;i++){
            p[i]=p[i-1]+nums[i];
        }
        int ans;
        for(int i=0;i<n;i++){
            //check the left and right sums using the prefix array
            if(p[n-1]-p[i]==p[i]-nums[i]){
                ans=i;
                break;
            }
        }
        return ans;
}
int main(){
    
}