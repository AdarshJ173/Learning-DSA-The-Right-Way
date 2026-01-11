#include<iostream>
#include<array>
#include<vector>
using namespace std;

// Brute foce O(n^2)

vector<int> twoSum(vector<int>& nums, int target) { //function definition
    int n = nums.size();
    // Your logic here:
    // 1. Loop through the array for the first number
    for(int i = 0; i<n;i++){
    // 2. Loop through the rest for the second number
        for(int j = i+1;j<n;j++){
    // 3. Check if they add up to target
            if(nums[i]+nums[j] == target){
                return {i , j}; //to return a vector
            }
        }
    }
    return {};
    // 4. Return indices if they do
}

int main(){

    vector<int>myNum = {2,11,7,15};
    int mytar = 9;

    vector<int> result = twoSum(myNum,mytar);

    if(result.size()==2){
        cout<<"indices found:"<<result[0]<<","<<result[1]<<endl;
    }else{
        cout<<"No solutions found"<<endl;
    }

    return 0;
}
