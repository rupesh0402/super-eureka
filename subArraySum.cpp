#include <bits/stdc++.h>
using namespace std;

int findMaximumSumSubarrayLen(int arr[], int n, int k) {
    //two pointer approach
    int i=0;
    int j=0;
    int sum = arr[j];
    int res = INT_MIN;
    while(j<n) {
        while(i<=j && sum > k) {
            sum -= arr[i];
            i++;
        }
        
        if(sum == k) {
            res = max(res, j - i + 1);
        }
        
        j++;
        if(j < n) {
        sum += arr[j];
        }
        
        cout <<"SUM => "<< sum << " " << "i => "<< i << "j => "<<j <<"\n";

    }
    return res;
}
int main () {
    int array[] = {2,3,5,1,9,1,3,1,5};
    int n = 9;
    int k = 10;
    int result = findMaximumSumSubarrayLen(array, n, k);
    cout << result;
}
