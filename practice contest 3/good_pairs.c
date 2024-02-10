#include <stdio.h>
#include <limits.h>

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        int n;
        scanf("%d", &n);

        int arr[n];
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[j]); 
        }

        int max = INT_MIN, min = INT_MAX;
        int maxindex = -1, minindex = -1;

        for (int k = 0; k < n; k++) {
            if (arr[k] > max) {
                max = arr[k];
                maxindex = k;
            }
            if (arr[k] < min) {
                min = arr[k];
                minindex = k;
            }
        }

        printf("%d %d\n", minindex + 1, maxindex + 1); 
    }
    return 0;
}