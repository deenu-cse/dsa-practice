// ═══════════════════════════════════════════════════
//  DSA Tracker — Auto-pushed by Extension
// ═══════════════════════════════════════════════════
//  Question  : Ninja And The String Operations
//  URL       : https://www.naukri.com/code360/problems/ninja-and-the-string-operations_4510753?leftPanelTabValue=PROBLEM
//  Platform  : CodingNinjas
//  Difficulty: Easy
//  Language  : cpp
//  Day       : Day-1
//  Date      : 2026-04-24
// ═══════════════════════════════════════════════════
#include <bits/stdc++.h>
using namespace std;

int isPossibleToMakeEqual(int n, vector<string> &s) {
    int totalLen = 0;
    int freq[26] = {0};

    for (string &str : s) {
        totalLen += str.size();
        for (char c : str) {
            freq[c - 'a']++;
        }
    }

    if (totalLen % n != 0) return 0;

    for (int i = 0; i < 26; i++) {
        if (freq[i] % n != 0) return 0;
    }

    return 1;
}