// ═══════════════════════════════════════════════════
//  DSA Tracker — Auto-pushed by Extension
// ═══════════════════════════════════════════════════
//  Question  : Selection Sort
//  URL       : https://www.naukri.com/code360/problems/selection-sort_981162?source=youtube&campaign=love_babbar_codestudio2
//  Platform  : CodingNinjas
//  Difficulty: Easy
//  Language  : cpp
//  Day       : Day-4
//  Date      : 2026-07-23
// ═══════════════════════════════════════════════════
#include <bits/stdc++.h> 
void selectionSort(vector<int>& arr, int n)
{   
    for(int i=0; i<n; i++){
        int minIndx = i;
        
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[minIndx]){
                minIndx = j;
            }
        }
        swap(arr[i], arr[minIndx]);
    }
}