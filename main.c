#include <stdio.h>

int binary_search(int arr[], int left, int right, int key) {
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == key)
            return mid;
        if (arr[mid] < key)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1; 
}

int main() {
int n;
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i=i+1)
{
    scanf("%d",&arr[i]);
}
binary_search(arr,0,n-1,n);
}
