#include <bits/stdc++.h>
#define AND &&
#define OR ||
using namespace std;
/*
//Function to merge two subarrays of A
void merge(long A[], long p, long q, long r) {
    long L[r], R[r], ptr = 0;
    for(long i = p; i <= q; i++) 
        L[ptr++] = A[i];
//Sentinel Value to avoid checking underflow of L and R
    L[ptr] = 10e9;       
    ptr = 0;
    for(long i = q + 1; i <= r; i++) 
        R[ptr++] = A[i];
    R[ptr] = 10e9;
    int ptr1 = 0, ptr2 = 0;
    for(long i = p; i <= r; i++) {
        if(L[ptr1] <= R[ptr2]) {
            A[i] = L[ptr1];
            ptr1 ++;
        }
        else {
            A[i] = R[ptr2];
            ptr2 ++;
        }
    }
}

//Function to sort any subarray of A
void merge_sort(long A[], long p, long r) {
    if(p < r) {
        int q = (p + r) / 2;
        merge_sort(A, p, q);
        merge_sort(A, q + 1, r);
        merge(A, p, q, r);
    }
}
*/

int main(int argc, char const *argv[])
{
    long n, arr[1000000];
    cin >> n;
    for(int i = 0; i < n; i++) 
        cin >> arr[i];
    sort(arr, arr + n);
    for(int i = 0; i < n; i++)
        cout << arr[i] << "\n";
    return 0;
}