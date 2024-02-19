class Solution {
public:
    int romanToInt(string s) { // Use std::string for string type
        int n = s.size();
        unordered_map<char, int> romanToInt = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };
        
        int intVal = 0;
        int i = 0;
        while (i < n - 1) { // Loop until i reaches n-1
            if (romanToInt[s[i]] >= romanToInt[s[i + 1]]) {
                intVal += romanToInt[s[i]];
                i++;
            }
            else {
                intVal += romanToInt[s[i + 1]] - romanToInt[s[i]];
                i += 2;
            }
        }
        if (i == n - 1) { // Handle the case when there is only one character left
            intVal += romanToInt[s[i]];
        }
        return intVal;
    }
};
