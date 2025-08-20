/*
 * @lc app=leetcode id=78 lang=rust
 *
 * [78] Subsets
 */

// @lc code=start
impl Solution {
    pub fn subsets(nums: Vec<i32>) -> Vec<Vec<i32>> {
        let mut res = Vec::new();
        let mut subset = Vec::new();
        Self::dfs(&nums, 0, &mut subset, &mut res); 
        res
    }

    fn dfs(nums: &Vec<i32>, index: usize, subset: &mut Vec<i32>, res: &mut Vec<Vec<i32>>) { 
        res.push(subset.clone());

        for i in index..nums.len() { 
            subset.push(nums[i]);
            Self::dfs(nums, i + 1, subset, res);
            subset.pop();
        }
    }
}
// @lc code=end

