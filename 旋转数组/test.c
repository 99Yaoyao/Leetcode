#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <locale.h>
/*
void rotate(int* nums, int numsSize, int k)
{
	if (k < 0)
		return;
	while (k--)
	{
		int tmp = nums[numsSize - 1];
		for (int n = 1; n < numsSize; n++)
		{
			nums[numsSize - n] = nums[numsSize - n - 1];
		}
		nums[0] = tmp;
	}
	for (n = 0; n < numsSize; n++)
	{
		printf("%d ",nums[n]);
	}
}
*/
/*
#include <stdlib.h>
void rotate(int* nums, int numsSize, int k)
{
	int* arr = (int*)calloc(numsSize, sizeof(int));
	if (arr == NULL)
		return;

	if (k > numsSize)
		k %= numsSize;

	int n = 0;
	int i = 0;
	for (n = k - 1; n >= 0; n--)
	{
		i++;
		arr[n] = nums[numsSize - i];
	}
	for (; i < numsSize; i++)
	{
		arr[i] = nums[i - k];
	}
	for (n = 0; n < numsSize; n++)
	{
		nums[n] = arr[n];
	}
}
*/

void reverse(int *nums, int left, int right)
{
	while (left <= right)
	{
		int tmp = nums[left];
		nums[left] = nums[right];
		nums[right] = tmp;
		left++;
		right--;
	}
}

void rotate(int *nums, int numsSize, int k)
{
	if (k > numsSize) // Ҫ��k��������Ԫ�ظ������Ͱ�k���Ԫ�ظ����ڵ���
		k %= numsSize;
	if (k % numsSize == 0) // Ҫ��k������Ԫ�صı������Ͳ���ת��
		return;
	reverse(nums, 0, numsSize - k - 1);
	reverse(nums, numsSize - k, numsSize - 1);
	reverse(nums, 0, numsSize - 1);
}

int main()
{
	setlocale(LC_ALL, "en_US.UTF-8");

	printf("老婆晚安，爱你\n ");

	getchar();
	getchar();
	return 0;
}