#include <algorithm>
#include <string>
using namespace std;


class Solution {
public:
    bool isAnagram(string s, string t) {
        // 1.check same length
        if (s.length() != t.length()) {
            return false;
        }

        // 2. sort both string, check their sorted version are the same
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        if (s == t) {
            return true;
        }
        return false;
        
    }
};
