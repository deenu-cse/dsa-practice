// ═══════════════════════════════════════════════════
//  DSA Tracker — Auto-pushed by Extension
// ═══════════════════════════════════════════════════
//  Question  : Print Like A Wave
//  URL       : https://www.naukri.com/code360/problems/print-like-a-wave_893268?utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_6
//  Platform  : CodingNinjas
//  Difficulty: Easy
//  Language  : cpp
//  Day       : Day-6
//  Date      : 2026-07-31
// ═══════════════════════════════════════════════════
#include <bits/stdc++.h> 
vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    vector<int>ans;
    for(int i=0; i<mCols; i++){
        if(i%2==0){
            for(int j=0;j<nRows; j++){
                ans.push_back(arr[j][i]);
            }
        }else{
            for(int j=nRows-1;j>=0; j--){
                ans.push_back(arr[j][i]);
            }
        }
    }
    return ans;
}