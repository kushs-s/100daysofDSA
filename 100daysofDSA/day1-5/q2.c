#include <stdio.h>

int main() {
    int n, target;
    
    // Input array size
    scanf("%d", &n);

    int nums[n];

    // Input array elements
    for(int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    // Input target
    scanf("%d", &target);

    // Check all pairs
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(nums[i] + nums[j] == target) {
                printf("[%d, %d]", i, j);
                return 0;   // Stop after finding the answer
            }
        }
    }

    return 0;
}
