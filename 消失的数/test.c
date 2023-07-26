#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int lose_num(int* nums, int numsSize)
{
	int i = 0;
	int tmp = 0;
	int count = 0;
	for (i = 0; i <= numsSize; i++)
	{
		if (count == numsSize)
			return tmp;
		if (nums[i] != tmp)
			count++;
		else
		{
			i = -1;
			count = 0;
			tmp++;
		}
	}
	return 0;
}

int missingNumber(int* nums, int numsSize) 
{
	int n = numsSize;
	int expected_sum = (n * (n + 1)) / 2;
	int actual_sum = 0;
	for (int i = 0; i < numsSize; i++) 
	{
		actual_sum += nums[i];
	}
	return expected_sum - actual_sum;
}

int missingNum(int* nums, int numssize) 
{
	int x = 0;
	for (int i = 0; i <= numssize; ++i) 
	{
		x ^= i;
	}
	for (int i = 0; i < numssize; ++i) 
	{
		x ^= nums[i];
	}
	return x;
}


int main(void)
{
	int nums[] = { 3,4,2,0,1,6};
	int less = missingNum(nums, sizeof(nums) / sizeof(int));
	printf("The less nums is %d\n", less);
	return 0;
}