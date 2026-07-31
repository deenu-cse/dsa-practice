// ═══════════════════════════════════════════════════
//  DSA Tracker — Auto-pushed by Extension
// ═══════════════════════════════════════════════════
//  Question  : Search a 2D Matrix
//  URL       : https://leetcode.com/problems/search-a-2d-matrix/
//  Platform  : LeetCode
//  Difficulty: Medium
//  Language  : cpp
//  Day       : Day-6
//  Date      : 2026-07-31
// ═══════════════════════════════════════════════════
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int col = matrix[0].size();
        int row = matrix.size();
        int s = 0;
        int e = row*col-1;

        int mid = s+(e-s)/2;

        while(s<=e){
            int element = matrix[mid/col][mid%col];
            if(element == target){
                return true;
            }
            if(element<target){
                s=mid+1;
            }else{
                e = mid-1;
            }
            mid = s+(e-s)/2;
        }
        return false;
    }
};