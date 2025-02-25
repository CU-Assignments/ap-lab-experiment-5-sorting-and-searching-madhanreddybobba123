class Solution {
public:
    int firstBadVersion(int n) {
        int first = 1;
        int last = n;

        while (first < last) {
            int mid = first + (last - first) / 2;

            if (isBadVersion(mid)) {
                last = mid; 

            } else {
                first = mid + 1; 
                                 
            }
        }

        return first; 
    }
};

Input: n = 5
bad = 4
Output:4
