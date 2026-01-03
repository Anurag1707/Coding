#include <stdio.h>

int maxSumSubarray(int arr[], int n, int k)
{
    int windowSum = 0, maxSum = 0;

    // First window
    for(int i = 0; i < k; i++)
    {
        windowSum += arr[i];
    }

    maxSum = windowSum;

    // Slide the window
    for(int i = k; i < n; i++)
    {
        windowSum = windowSum + arr[i] - arr[i - k];

        if(windowSum > maxSum)
            maxSum = windowSum;
    }

    return maxSum;
}

int main()
{
    int arr[] = {2, 1, 5, 1, 3, 2};
    int n = 6, k = 3;

    printf("Maximum sum = %d", maxSumSubarray(arr, n, k));

    return 0;
}
