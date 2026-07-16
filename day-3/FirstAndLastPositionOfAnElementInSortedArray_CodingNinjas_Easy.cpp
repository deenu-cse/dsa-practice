// ═══════════════════════════════════════════════════
//  DSA Tracker — Auto-pushed by Extension
// ═══════════════════════════════════════════════════
//  Question  : First and Last Position of an Element In Sorted Array
//  URL       : https://www.naukri.com/code360/problems/first-and-last-position-of-an-element-in-sorted-array_1082549?source=youtube&campaign=love_babbar_codestudio2
//  Platform  : CodingNinjas
//  Difficulty: Easy
//  Language  : cpp
//  Day       : Day-3
//  Date      : 2026-07-16
// ═══════════════════════════════════════════════════
int firstocr(vector<int>& arr, int key, int n){
    int s = 0, e = n-1;
    int mid = s+(e-s)/2;
    int ans=-1;
    
    while(s<=e){
        if(arr[mid] == key){
            ans = mid;
            e = mid-1;
        }else if(key>arr[mid]){
            s = mid+1;
        }else{
            e = mid-1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}

int lastocr(vector<int>& arr, int key, int n){
    int s = 0, e = n-1;
    int mid = s+(e-s)/2;
    int ans=-1;
    
    while(s<=e){
        if(arr[mid] == key){
            ans = mid;
            s = mid+1;
        }else if(key>arr[mid]){
            s = mid+1;
        }else{
            e = mid-1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}


pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    pair<int, int>p;
    p.first = firstocr(arr,k,n);
    p.second = lastocr(arr,k,n);
    return p;
}
