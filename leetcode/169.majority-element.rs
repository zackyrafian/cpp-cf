/*
 * @lc app=leetcode id=169 lang=rust
 *
 * [169] Majority Element
 */

// @lc code=start
impl Solution {
    pub fn majority_element(nums: Vec<i32>) -> i32 {
        let mut count = 0; 
        let mut c = 0;

        for num in nums { 
            if count == 0 { 
                c = num; 
            }
            if num == c  {
                count += 1;
            }else { 
                count -= 1;
            }
        }
        c
    }
}
// @lc code=end

