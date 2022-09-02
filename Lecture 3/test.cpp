class Solution {
public:
    int arrayPairSum(vector<int>& a) {
        int ans = 0;
        long long const int left = -10000;
        long long const int right = 10000;
        long long const int size = right - left + 1;

        int freq[size] = {0};
        for (int i = 0; i < a.size(); i++) {
            freq[a[i] - left]++;
        }

        int Residue = 0;

        for (int i = left; i <= right; i++) {
            if (freq[i - left] > 0) {
                ans = (ans + ((freq[i - left] + 1 - Residue) / 2) * i);
                Residue = (freq[i - left] - Residue) % 2;
            }
        }
        return ans;
    }
};