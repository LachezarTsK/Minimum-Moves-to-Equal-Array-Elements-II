
/**
 * @param {number[]} nums
 * @return {number}
 */
var minMoves2 = function (nums) {

    nums.sort((x, y) => x - y);
    let front = 0;
    let end = nums.length - 1;
    let minMovesToEqualArrayElements = 0;

    while (front < end) {
        minMovesToEqualArrayElements += nums[end] - nums[front];
        ++front;
        --end;
    }
    return minMovesToEqualArrayElements;
};
