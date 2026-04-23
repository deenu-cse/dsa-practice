// ═══════════════════════════════════════════════════
//  DSA Tracker — Auto-pushed by Extension
// ═══════════════════════════════════════════════════
//  Question  : Chocolate Pickup
//  URL       : https://www.naukri.com/code360/problems/ninja-and-his-friends_3125885?interviewProblemRedirection=true&page=2
//  Platform  : CodingNinjas
//  Difficulty: Hard
//  Language  : cpp
//  Day       : Day-1
//  Date      : 2026-04-23
// ═══════════════════════════════════════════════════
#include <bits/stdc++.h>

int dp[51][51][51]; 

int solve(int row, int ac, int bc, int r, int c, vector<vector<int>> &grid) {
    if (ac < 0 || ac >= c || bc < 0 || bc >= c) return -1e9;
    if (row == r) return 0;
    
    if (dp[row][ac][bc] != -1) return dp[row][ac][bc];
    
    int chocolates = (ac == bc) ? grid[row][ac] : grid[row][ac] + grid[row][bc];
    
    int best = INT_MIN;
    for (int da = -1; da <= 1; da++) {
        for (int db = -1; db <= 1; db++) {
            int next = solve(row + 1, ac + da, bc + db, r, c, grid);
            best = max(best, next);
        }
    }
    
    return dp[row][ac][bc] = chocolates + best;
}

int maximumChocolates(int r, int c, vector<vector<int>> &grid) {
    memset(dp, -1, sizeof(dp));
    return solve(0, 0, c - 1, r, c, grid);
}