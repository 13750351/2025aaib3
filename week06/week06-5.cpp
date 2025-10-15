///week06-5.cpp
///學習計畫 3350. Adjacent Increasing Subarrays Detection II
///題目跟3349很像 但是昨天給你k 今天問你最大可能的k
///3349用 combo 今天3350用兩個combo 左到右 右到左 累積多少
class Solution {
public:
    int maxIncreasingSubarrays(vector<int>& nums) {
        int N = nums.size(); /// 陣列大小
        vector<int> left(N,1);
        vector<int> right(N,1);
        for(int i=1;i<N ;i++){
            if(nums[i-1] < nums[i] ) left[i] = left[i-1] +1;
         }///如果有連續 就更新變更大
        for(int i=N-2 ; i>=0 ; i--){
            if( nums[i] < nums[i+1]) right[i] = right[i+1] + 1;
        }
        int ans = 0;  /// 要找到最大的k 也就是 兩個相鄰陣列 要持續增加的最長的長度k
        for(int i=0;i<N-1 ;i++){
            int now =min(left[i], right[i+1]); ///現在左邊combo 右邊combo都符合
            if(now>ans) ans = now; /// 有大的l 就用來更新ans
        }
        return ans;
    }
};
