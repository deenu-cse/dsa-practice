// ═══════════════════════════════════════════════════
//  DSA Tracker — Auto-pushed by Extension
// ═══════════════════════════════════════════════════
//  Question  : Count Inversions
//  URL       : https://www.naukri.com/code360/problems/count-inversions_615?interviewProblemRedirection=true
//  Platform  : CodingNinjas
//  Difficulty: N/A
//  Language  : cpp
//  Day       : Day-1
//  Date      : 2026-04-23
// ═══════════════════════════════════════════════════
#include <bits/stdc++.h>
using namespace std;

long long merge(long long *arr, int left, int mid, int right) {
    vector<long long> temp;
    int i = left;
    int j = mid + 1;
    long long inv = 0;

    while(i <= mid && j <= right) {
        if(arr[i] <= arr[j]) {
            temp.push_back(arr[i++]);
        } else {
            temp.push_back(arr[j++]);
            inv += (mid - i + 1); // key line
        }
    }

    while(i <= mid) temp.push_back(arr[i++]);
    while(j <= right) temp.push_back(arr[j++]);

    for(int k = left; k <= right; k++) {
        arr[k] = temp[k - left];
    }

    return inv;
}

long long mergeSort(long long *arr, int left, int right) {
    long long inv = 0;
    if(left < right) {
        int mid = (left + right) / 2;

        inv += mergeSort(arr, left, mid);
        inv += mergeSort(arr, mid + 1, right);
        inv += merge(arr, left, mid, right);
    }
    return inv;
}

long long getInversions(long long *arr, int n){
    return mergeSort(arr, 0, n - 1);
}