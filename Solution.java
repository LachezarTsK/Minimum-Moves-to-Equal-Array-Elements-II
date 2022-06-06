
import java.util.Arrays;

public class Solution {

    public int minMoves2(int[] nums) {

        Arrays.sort(nums);
        int front = 0;
        int end = nums.length - 1;
        int minMovesToEqualArrayElements = 0;

        while (front < end) {
            minMovesToEqualArrayElements += nums[end] - nums[front];
            ++front;
            --end;
        }
        return minMovesToEqualArrayElements;
    }
}
