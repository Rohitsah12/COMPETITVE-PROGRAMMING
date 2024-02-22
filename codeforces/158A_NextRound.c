#include <stdio.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    int scores[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &scores[i]);
    }

    int kth_score = scores[k - 1];
    int advanced_count = 0;

    for (int i = 0; i < n; i++) {
        if (scores[i] >= kth_score && scores[i] > 0) {
            advanced_count++;
        } else {
            break; 
        }
    }

    printf("%d\n", advanced_count);

    return 0;
}
