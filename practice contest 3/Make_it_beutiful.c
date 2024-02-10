#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    for(int i=0;i<t;i++) {
        int n;
        scanf("%d", &n);

        int arr[n];
        for (int i = 0; i < n; i++)
            scanf("%d", &arr[i]);

        int temp = arr[0];
        arr[0] = arr[1];
        arr[1] = temp;

        temp = arr[n - 1];
        arr[n - 1] = arr[0];
        arr[0] = temp;

        if (arr[0] == arr[1])
            printf("NO\n");
        else {
            printf("YES\n");
            for (int i = 0; i < n; i++) {
                printf("%d ", arr[i]);
            }
            printf("\n");
        }
    }

    return 0;
}
