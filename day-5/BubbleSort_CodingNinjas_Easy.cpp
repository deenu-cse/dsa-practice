// ═══════════════════════════════════════════════════
//  DSA Tracker — Auto-pushed by Extension
// ═══════════════════════════════════════════════════
//  Question  : Bubble Sort
//  URL       : https://www.naukri.com/code360/problems/bubble-sort_980524?source=youtube&campaign=love_babbar_codestudio2
//  Platform  : CodingNinjas
//  Difficulty: Easy
//  Language  : cpp
//  Day       : Day-5
//  Date      : 2026-07-27
// ═══════════════════════════════════════════════════
#include <bits/stdc++.h> 
void bubbleSort(vector<int>& arr, int n)
{   
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[i]){
                swap(arr[i], arr[j]);
            }else{
                continue;
            }
        }
    }
}
