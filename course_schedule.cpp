class Solution {
public:
    bool dfs(vector<vector<int>> &ad, vector<bool> &vis, stack<int> &st, int i, vector<bool> &stk) {
        vis[i] = 1;
        stk[i] = 1;
        for (auto it: ad[i]) {
            if (!vis[it]) {
                if (dfs(ad, vis, st, it, stk))return true;
            } else if (stk[it])return true;
        }
        st.push(i);
        stk[i] = false;
        return false;
    }

    vector<int> findOrder(int n, vector<vector<int>> &pp) {
        vector<vector<int>> ad(n);
        vector<bool> vis(n, false), stk(n, false);
        vector<int> ans;
        for (int i = 0; i < pp.size(); i++) {
            ad[pp[i][1]].push_back(pp[i][0]);


        }
        stack<int> st;

        for (int i = 0; i < n; i++) {
            if (!vis[i]) {
                if (dfs(ad, vis, st, i, stk))return {};
            }
        }
        while (!st.empty()) {
            ans.push_back(st.top());
            st.pop();
        }
        return ans;
    }
};
