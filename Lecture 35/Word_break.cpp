class Solution {
public:
    unordered_map<string, bool>h;
    int *dp;

    bool Solve(string &s, int pos) {
        if (pos == s.length()) {
            //Iska matlab tum abhi tak kahi par bhi false
            //encounter nahi kar paaye;
            return 1;
        }
        if (dp[pos] != -1) {
            return dp[pos];
        }
        //We are standing at pos value of index:
        for (int end = pos + 1; end <= s.length(); end++) {
            string x = s.substr(pos, end - pos);//x=c

            if (h.count(x) and Solve(s, end)) {
                return dp[pos] = true;
            }
        }

        return dp[pos] = false;
    }

    bool wordBreak(string s, vector<string>& wordDict) {
        for (int i = 0; i < wordDict.size(); i++) {
            h.insert({wordDict[i], true});
        }

        dp = new int[s.length() + 1];
        for (int i = 0; i <= s.length(); i++) {
            dp[i] = -1;
        }

        return Solve(s, 0);
    }
};



//substr: subtring laake deta hain:

// substr(pos, pos + 4);


// pos vaha se lekar 4 character ko laake deta hain.





// catsandog:

// pos = 0;

// end = 1;


// end - pos = 1;


// catsandog :: s.substr(0, 1);

// //o index se ek character nikal lo:

// c   atsandog


// check karna hain ki ye "c" ye dictionary me aaye and atsandog
// ko recursion ko do and usko bolo ki isko "atsandog " is tarah
//     break kare ki iske saare sequence dic me aaye.


//     Agar recursion mujhe true deta hain:
//     and mera ye c bhi true hain:
//     c hain ye dictionary me hain:
//     //word usko aap break karsakte ho.





// cat::::: break karo and false

// cats:::     break:  andog

// catsandog