///week08-1.cpp LeetCode
///3370. Smallest Number With All Set Bits

class Solution {
public:
    int smallestNumber(int n) {
        int N = 0; ///材˙ ブ猭тn琌 秈 碭计
        while(n>0){
            n = n/2; //奔糷ブ
            N++; ///计
        }
        cout << "瞷祇瞷N琌碭计㎡?" << N << "计\n";
        int ans = 0; ///材2˙ ノ癹伴舱场常琌秈N计
        for(int i=0; i<N; i++){
            ans = ans*2+1;
        }
        return ans;
    }
};
