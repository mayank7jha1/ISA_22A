class Solution {
public:
    string reverseWords(string a) {
        vector<string>v;
        char *str = strtok((char*)a.c_str(), " ");

        while (str != NULL) {
            v.push_back(str);
            str = strtok(NULL, " ");
        }
        reverse(v.begin(), v.end());

        string s1 = "";
        for (int i = 0; i < v.size(); i++) {
            if (i == v.size() - 1) {
                s1 = s1 + v[i];
            } else {
                s1 = s1 + v[i] + " ";
            }
        }
        return s1;
    }
};


/*
My name is Mayank:

array of string:

v[0] = My
       v[1] = Name
              v[2] = is
                     v[3] = Mayank*/

// mayank is name my

// vector of stringg:


// v[0] == My
// v[0][0] = 'M';

// v[2]=is;
// v[2][1]=i