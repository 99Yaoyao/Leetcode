#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
	int* result = (int*)malloc(2 * sizeof(int));
	*returnSize = 2;
	for (int i = 0; i < numsSize - 1; i++)
	{
		for (int j = i + 1; j < numsSize; j++)
		{
			if (nums[i] + nums[j] == target)
			{
				result[0] = i;
				result[1] = j;
				return result;
			}
		}
	}
	return result;
}


int main()
{
	int nums[] = { 2,7,11,15 };
	int target = 0;
	int sz = sizeof(nums) / sizeof(int);
	int* returnSize = NULL;
	scanf("%d", &target);
	int* tmp = twoSum(nums, sz, target, returnSize);
	printf("%d %d\n", *tmp, *(tmp + 1));
	return 0;
}