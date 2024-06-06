class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> h = {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}
    };


        int num = 0, size = s.size();

        for(int i=0; i< size; i++){
            if(i < size - 1 && h[s[i]] < h[s[i+1]])
                num -= h[s[i]];
            else
                num += h[s[i]];
        }

        return num;
    }
};
