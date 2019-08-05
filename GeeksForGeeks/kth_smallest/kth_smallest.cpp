#include<bits/stdc++.h>
using namespace std;

void min_heapify(long arr[], long i, long n) {
    long left = 2 * i, right = 2 * i + 1, smallest;
    if(left <= n && arr[left] < arr[i]) smallest = left;
    else smallest = i;
    if(right <= n && arr[right] < arr[smallest]) smallest = right;
    if(smallest != i) {
        swap(arr[i], arr[smallest]);
        min_heapify(arr, smallest, n);
    }
}

void build_heap(long arr[], long n) {
    for(long i = n / 2; i >= 1; i--) {
        min_heapify(arr, i, n);    
    }
}

int main() {
    int t;
    cin >> t;
    long n, temp, k;
    while(t--) {
        cin >> n;
        long arr[n + 1];
        for(long i = 1; i <= n; i++) cin >> arr[i];
        cin >> k;
        build_heap(arr, n);
        /*for(long i = 1; i <= n; i++) cout << arr[i] << " ";
        cout << "\n";*/
        long ptr = 0;
        for(long i = 1; i <= k; i++) {
            temp = arr[1];
            swap(arr[1], arr[n]);
            n--;
            min_heapify(arr, 1, n);
        }
        cout << temp << "\n";
    }
    return 0;
}