#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int sum=nums[0];
        int max=0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i]-1){
                sum+=nums[i+1];
            }else{
                if(sum>max){
                    max=sum;
                }
                sum=nums[i+1];
            }
        }
        return max;
    }
};

int main(){
    vector<int> v={3,4,5,1,12,14,15};
    Solution s;
    int ans=s.missingInteger(v);
    cout<<ans<<endl;
    return 0;
}