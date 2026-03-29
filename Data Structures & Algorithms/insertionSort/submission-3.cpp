// Definition for a Pair
// class Pair {
// public:
//     int key;
//     string value;
//
//     Pair(int key, string value) : key(key), value(value) {}
// };
// // "copy from left to right while moving backward"
class Solution {
public:
    vector<vector<Pair>> insertionSort(vector<Pair>& pairs) {
        vector<vector<Pair>> result;
        // handle empty input:
        if (pairs.empty()) {
            return result;
        }

        result.push_back(pairs); // store original vector

        for (int i = 1; i < pairs.size(); i++) {
            Pair temp = pairs[i]; // the item's value on index i
            int j = i - 1; // j = the index of item on the left of i

            // while j is in the valid index range (not below 0), and index[j]'s value > temp's value:
            while (j >= 0 && pairs[j].key > temp.key) {
                // j's value shifts right by:
                pairs[j + 1] = pairs[j]; // j's value shifts right: copy j's value to j+1 location
                j--; // move index j to left (backwards)
            }
            pairs[j + 1] = temp; // insert temp value at index[j+1]
            // after each interation, 
            // insert current version of "pairs" at the end of "result"
            result.push_back(pairs); 
        }
        return result;

    }
};
