class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int> ans = prices;
        for(int i = 0; i < prices.size(); i++) {
            for(int j = i+1; j < prices.size(); j++){
                if(prices[j] <= prices[i]){
                    ans[i] = prices[i] - prices[j];
                    break;
                }
            }
        }
        return ans;
    }
};
    vector<int> finalPrices(vector<int>& A) {
        vector<int> stack;
        for (int i = 0; i < A.size(); ++i) {
            while (stack.size() && A[stack.back()] >= A[i]) {
                A[stack.back()] -= A[i];
                stack.pop_back();
            }
            stack.push_back(i);
        }
        return A;
    }
