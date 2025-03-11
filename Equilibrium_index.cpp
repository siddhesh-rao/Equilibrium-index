#include<iostream>
#include<vector>
using namespace std;

class solution{
    public:
        int  pivotIndex(vector<int> & nums){
            for(int i=0; i<nums.size(); ++i){
                int leftsum = 0;
                for(int j=0; j<i; j++){
                    leftsum += nums[j];
                }
                int rightsum=0;
                for(int j=i+1; j<nums.size(); j++){
                    rightsum +=nums[j];
                }
                if(leftsum == rightsum){
                    return i;
                }    
            }
            return -1;
        }
        int main(){
            vector<int> nums = {-7, 1, 5, 2, -4, 3, 0, 3};
            cout<<pivotIndex(nums);
            return 0;
        }    
};
        
