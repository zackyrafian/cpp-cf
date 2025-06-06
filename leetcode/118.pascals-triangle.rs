/*
 * @lc app=leetcode id=118 lang=rust
 *
 * [118] Pascal's Triangle
 */

// @lc code=start
impl Solution {
    pub fn generate(num_rows: i32) -> Vec<Vec<i32>> {
        let mut t: Vec<Vec<i32>> = vec![];

        for i in 0..num_rows as usize { 
            let mut row = vec![1; i + 1];

            for j in 1..i { 
                row[j] = t[i - 1][j - 1] + t[i - 1][j];
            }

            t.push(row);
        }
        t
    }
}
// @lc code=end

