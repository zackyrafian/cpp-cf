/*
 * @lc app=leetcode id=283 lang=rust
 *
 * [283] Move Zeroes
 */

// @lc code=start
impl Solution {
    pub fn move_zeroes(nums: &mut Vec<i32>) {
        let mut p = 0; 

        for i in 0..nums.len() {
            if nums[i] != 0 { 
                nums[p] = nums[i];
                p += 1;
            }
        }
        while p < nums.len() { 
            nums[p] = 0; 
            p += 1;
        }
    }
}
// @lc code=end

