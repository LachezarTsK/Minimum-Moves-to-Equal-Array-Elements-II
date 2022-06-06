
#include <vector>
using namespace std;

class Solution {
    
public:
    int minMoves2(vector<int>& nums) {

        sort(nums.begin(), nums.end());
        int front = 0;
        int end = nums.size() - 1;
        int minMovesToEqualArrayElements = 0;

        while (front < end) {
            minMovesToEqualArrayElements += nums[end] - nums[front];
            ++front;
            --end;
        }
        return minMovesToEqualArrayElements;
    }
};
