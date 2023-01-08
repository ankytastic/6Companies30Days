//LeetCode - 149. Max Points on a Line

class Solution {
public:
	int maxPoints(vector<vector<int>>& points) {
		int sol = 2;
        int num = points.size();
		if (num <= 1) 
            return num;
		for (int i = 0; i < num; i++) {
            for (int j = i + 1; j < num; j++) {
                int ans = 2;
				  for (int k = 0; k < num; k++) {
                    if (k == i || k == j) continue;
					  if ((points[j][1] - points[i][1]) * (points[i][0] - points[k][0]) == (points[i][1] - points[k][1]) * (points[j][0] - points[i][0])) {
                        ans++;
                    }
                }
                sol = max(sol, ans);
            }
        }
        return sol;
    }
};
