
/*
 * 题目描述：罗马数字包含以下七种字符: I， V， X， L，C，D 和 M。、
 * 例如， 罗马数字 2 写做 II ，即为两个并列的 1 。12 写做 XII ，即为 X + II 。 27 写做  XXVII, 即为 XX + V + II 。
 * 通常情况下，罗马数字中小的数字在大的数字的右边。但也存在特例，例如 4 不写做 IIII，而是 IV。数字 1 在数字 5 的左边，
 * 所表示的数等于大数 5 减小数 1 得到的数值 4 。
 * 同样地，数字 9 表示为 IX。这个特殊的规则只适用于以下六种情况：
 * I 可以放在 V (5) 和 X (10) 的左边，来表示 4 和 9。
 * X 可以放在 L (50) 和 C (100) 的左边，来表示 40 和 90。 
 * C 可以放在 D (500) 和 M (1000) 的左边，来表示 400 和 900。
 * 给定一个罗马数字，将其转换成整数。 
*/


#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        int sum = 0;
        for (int i = s.size() - 1; i >= 0; i--) {
            switch(s[i]) {
				case 'I': sum += 1; break;
                case 'V': 
					if ((i - 1) >= 0 && s[i - 1] == 'I') {
						sum += 4;
						i--;
					} else {
						sum += 5;
					}
					break;
                case 'X': 
					if ((i - 1) >= 0 && s[i - 1] == 'I') {
						sum += 9;
						i--;
					} else {
						sum += 10; 
					}
					break;
                case 'L': 
					if ((i - 1) >= 0 && s[i - 1] == 'X') {
						sum += 40;
						i--;
					} else {
						sum += 50; 
					}	
					break;
                case 'C': 
					if ((i - 1) >= 0 && s[i - 1] == 'X') {
						sum += 90;
						i--;
					} else {
						sum += 100; 
					}	
					break;
                case 'D': 
					if ((i - 1) >= 0 && s[i - 1] == 'C') {
						sum += 400;
						i--;
					} else {
						sum += 500; 
					}	
					break;
                case 'M': 
					if ((i - 1) >= 0 && s[i - 1] == 'C') {
						sum += 900;
						i--;
					} else {
						sum += 1000; 
					}	
					break;
            }
        }
        return sum;
    }
};

int main() {
	Solution s;
	cout << s.romanToInt("V") << endl;

	system("pause");
    return 0;
}