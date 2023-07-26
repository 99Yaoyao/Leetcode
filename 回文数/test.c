#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdbool.h>

// ʱ�临�Ӷ� O(N)
// �ռ临�Ӷ� O(1)
bool isPalindrome1(int x)
{
	if (x < 0)
		return false;
	if (x >= 0 && x < 10)
		return true;

	int tmp = 0;
	int i = 1;
	int count = 1;
	if (x >= 10)
	{
		tmp = x;
		while (tmp /= 10)
		{
			count *= 10;
			i *= 10;
		}
		for (; count >= 10; )
		{
			if (x % 10 == x / i)
			{
				i /= 100;
				x %= count;
				x /= 10;
				count /= 100;
			}
			else
			{
				return false;
			}
		}
		return true;
	}
}



//�Ż�
bool isPalindrome(int x) 
 {
	if (x < 0 || (x % 10 == 0 && x != 0))
	{
		return false;
	}
	int reversed = 0;
	while (x > reversed)
	{
		reversed = reversed * 10 + x % 10;//�� 123321 ��� 123 123 �������Ⱦ��ǻ�����
		x /= 10;
	}
	return x == reversed || x == reversed / 10;
}


int main()
{
	int x = 0;
	scanf("%d", &x);
	int a = isPalindrome(x);
	printf("%d\n", a);
	return 0;
}