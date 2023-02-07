#include <bits/stdc++.h>
using namespace std;

long solve(int r, int c) {
    vector<vector<int>> dp(r, vector<int>(c));
    for (int i = 0; i < r; ++i)
        dp[i][0] = 1;
    for (int i = 0; i < c; ++i)
        dp[0][i] = 1;
    for (int i = 1; i < r; ++i)
        for (int j = 1; j < c; ++j)
            dp[i][j] += dp[i-1][j] + dp[i][j-1];
    return dp[r-1][c-1];
}

int main(void) {
    int t;
    cin >> t;
    while (t--) {
    	int r, c;
    	cin >> r >> c;
    	cout << solve(r, c) << endl;
    }
}
