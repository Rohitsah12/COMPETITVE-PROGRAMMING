#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    int arr[n][2];
    int numberofswaps = 0;
    
    for (int i = 0; i < n; i++) {
        int min_index = i;
        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[min_index]) {
                min_index = j;
            }
        }
        if (min_index != i) {
            arr[numberofswaps][0] = i;
            arr[numberofswaps][1] = min_index;
            numberofswaps++;
            
            int temp = a[i];
            a[i] = a[min_index];
            a[min_index] = temp;
        }
    }
    
    printf("%d\n", numberofswaps);
    for (int i = 0; i < numberofswaps; i++) {
        printf("%d %d\n", arr[i][0], arr[i][1]);
    }
    
    return 0;
}
