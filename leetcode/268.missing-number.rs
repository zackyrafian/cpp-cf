/*
 * @lc app=leetcode id=268 lang=rust
 *
 * [268] Missing Number
 */

// @lc code=start
impl Solution {
    pub fn missing_number(nums: Vec<i32>) -> i32 {
        let n = nums.len() as i32; 
        let esum = n * (n + 1) / 2;
        let asum: i32 = nums.iter().sum();
        
        esum - asum
    }
}
// @lc code=end

