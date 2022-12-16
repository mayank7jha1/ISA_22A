class Solution {
public:
    vector<int> advantageCount(vector<int>&a, vector<int>&b) {
        int n = a.size();
        sort(a.begin(), a.end());
        vector<pair<int, int>>c;

        for (int i = 0; i < b.size(); i++) {
            c.push_back({b[i], i});
        }
        sort(c.begin(), c.end());

        vector<int>ans(n, -1);
        vector<int>extra;

        int j = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] > c[j].first) {
                ans[c[j].second] = a[i];
                j++;
            } else {
                extra.push_back(a[i]);
            }
        }

        if (extra.size() == 0) {
            return ans;
        }

        j = 0;
        for (int i = 0; i < n; i++) {
            if (ans[i] == -1) {
                ans[i] = extra[j];
                j++;
            }
            if (j == extra.size()) {
                break;
            }
        }

        return ans;
    }
};

