class Solution {
public:
    
    string padding (string s){
        string ln;
        int len = s.length();
        int zeroes = 3 - len;
        while (zeroes--){
            ln.push_back('0');
        }
        ln += s;

        return ln;
    }

    string encode(vector<string>& strs) {
        string s = "";
        for (auto &str:strs){
            string len = padding(to_string(str.length()));
            s += len;
            s += str;
        }

        return s;
    }

    vector<string> decode(string s) {
        int i = 0;
        vector<string> ans;
        while (i < s.length()){
            string len = "";
            int t = 3;
            while (t--){
                len.push_back(s[i++]);
            }
            int ln = stoi(len);
            string str = "";
            while (ln--){
                str.push_back(s[i++]);
            }
            ans.push_back(str);   
        }

        return ans;
    }
};
