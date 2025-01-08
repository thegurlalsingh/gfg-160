class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
       vector<int> nums(arr.size(),0);
       int j=0;
       for(int i=0;i<arr.size();i++){
           if(arr[i]!=0){
               nums[j]=arr[i];
               j++;
           }
       }
       arr=nums;
       nums.clear();
    }
};