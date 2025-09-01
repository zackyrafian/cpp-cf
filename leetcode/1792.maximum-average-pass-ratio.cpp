/*
 * @lc app=leetcode id=1792 lang=cpp
 *
 * [1792] Maximum Average Pass Ratio
 */

// @lc code=start
class Solution {
public:
    struct Class { 
        int pass; 
        int total; 
        double delta() const { 
            return double(pass + 1) / (total + 1) - double(pass) / total;
        }
    };

    struct cmp { 
        bool operator()(const Class &a, const Class &b) { 
            return a.delta() < b.delta(); 
        }
    }; 
    double maxAverageRatio(vector<vector<int>>& classes, int extraStudents) {
        priority_queue<Class, vector<Class>, cmp> pq;

        for (auto &cls: classes) { 
            pq.push({cls[0], cls[1]});
        }
        while(extraStudents--) { 
            Class top = pq.top(); 
            pq.pop(); 
            top.pass += 1; 
            top.total += 1;
            pq.push(top);
        }

        double result = 0.0;
        int n = classes.size(); 
        while (!pq.empty()) { 
            Class cls = pq.top(); 
            pq.pop(); 
            result += double(cls.pass) / cls.total; 
        }
        return result / n;
    }
};
// @lc code=end

