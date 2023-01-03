class Solution {
public:
    vector<int> asteroidCollision(vector<int>& a) {
        stack<int>s;
        int n = a.size();
        for (int i = 0; i < n; i++) {
            int x = a[i];
            if (!s.empty() and s.top() > 0 and x < 0) {
                //Collison Occurs.
                int flag = true;
                while (!s.empty() and s.top() > 0 and x < 0) {
                    if (abs(x) == abs(s.top())) {
                        flag = false;
                        s.pop();
                        break;
                    } else if (abs(x) > abs(s.top())) {
                        s.pop();
                        flag = true;
                        continue;
                    } else {
                        //abs(x)<abs(s.top())//x ko push nahi karna
                        flag = false;
                    }
                }
                if (flag == true) {
                    s.push(x);
                }
            } else {
                //No Collision occurs.
                s.push(x);
            }
        }
        //Stack: Iterate karne ke baad avector me store karo and return  vector.
        vector<int>ans(s.size());

        int k = s.size() - 1;

        while (!s.empty()) {
            ans[k] = s.top();
            k--;
            s.pop();
        }

        return ans;
    }
};




// 10 2 - 12;

// -12
// 2
// 10




// ulta print:

// array ko reverse karna hain toh stack use kar sakte hain.