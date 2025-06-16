#include<bits/stdc++.h>
using namespace std;
int binarySearch(int a[], int size, int target) {

    int left = 0;
    int right = size - 1;

    while(left <= right) {
        int mid = left + (right - left) / 2;

        if(a[mid] == target)
            return mid;
        else if(a[mid] < target)
            left = mid + 1; 
        else
            right = mid - 1;
    }

    return -1;
}
int main(){
    int n;
    cin >> n;

    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int target;
    cin >> target;

    int result = binarySearch(a, n, target);

    if(result != -1)
        cout << "Element found at index: " << result << endl;
    else
        cout << "Element not found!" << endl;
    return 0;
}