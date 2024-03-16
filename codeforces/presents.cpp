#include<bits/stdc++.h>
std::vector<int> find_gift_givers(int n, const std::vector<int>& gifts) {
    std::vector<int> givers(n, 0);  // Initialize array to store gift givers

    for (int i = 0; i < n; ++i) {
        int friendIdx = i + 1;
        int current = friendIdx;
        while (true) {
            current = gifts[current - 1];  // Get the friend who gave the gift
            if (current == friendIdx) {  // If friend gave the gift to themselves
                givers[friendIdx - 1] = friendIdx;
                break;
            } else if (gifts[current - 1] == friendIdx) {  // If friend found who gave the gift
                givers[friendIdx - 1] = current;
                break;
            }
        }
    }

    return givers;
}

int main() {
    int n;
    std::cin >> n;

    std::vector<int> gifts(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> gifts[i];
    }

    std::vector<int> result = find_gift_givers(n, gifts);

    for (int i = 0; i < n; ++i) {
        std::cout << result[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
