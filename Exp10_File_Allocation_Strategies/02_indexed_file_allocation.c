/*
 * Name of the Experiment: File Allocation Strategies
 * Experiment No: 10
 * Aim: Simulate all file allocation strategies - B. Indexed
 * Roll No: 25071A6227
 */

#include <stdio.h>

int main() {
    printf("Roll no: 25071A6227\n");
    int disk[50] = {0}, idx, n, b[20], alloc = 1;

    printf("Enter index block: ");
    scanf("%d", &idx);

    printf("Enter number of blocks and block numbers: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &b[i]);

    if (disk[idx]) alloc = 0;
    for (int i = 0; i < n; i++) {
        if (disk[b[i]]) alloc = 0;
    }

    if (alloc) {
        disk[idx] = 1;
        printf("Index Block %d points to: ", idx);
        for (int i = 0; i < n; i++) {
            disk[b[i]] = 1;
            printf("%d ", b[i]);
        }
        printf("\nFile allocated successfully.\n");
    } else {
        printf("Allocation failed: Index or data blocks already allocated.\n");
    }

    return 0;
}
