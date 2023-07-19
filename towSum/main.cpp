#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *twoSum(int *nums, int numsSize, int target, int *returnSize) {
    if (nums == NULL)
        exit(-1);
    int *p = (int *) malloc(2 * sizeof(int));
    if (p == NULL)
        exit(-1);

    int begin = 0;
    int end = numsSize - 1;
    for (; begin < numsSize - 1; ++begin) {
        for (end = numsSize - 1; begin < end; --end) {
            if (nums[begin] + nums[end] == target) {
                p[0] = begin;
                p[1] = end;
                *returnSize = 2;
                return p;
            }
        }
    }
    *returnSize = 0;
    return NULL;
}

int main() {
    int nums[] = {2, 7, 11, 15}, target = 9;
    int tmp = 0;
    int *p = twoSum(nums, 3, target, &tmp);
    cout << *p << endl << p[1] << endl;
    delete p;
    return 0;
}
