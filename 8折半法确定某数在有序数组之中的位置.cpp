//#include<iostream>
//using namespace std;
//int main() {										//在有序数组中找某一个数  找到了就输出其位置 找不到就输出找不到
//	const int n = 7;
//	int i, number, top, bottle, mid, local, a[n];
//	bool flag = true, sign;
//	char c;
//	cout << "enter data: " << endl;
//	cin >> a[0];
//	i = 1;
//	while (i < n) {
//		cin >> a[i];
//		if (a[i] >= a[i - 1])
//			i++;
//		else
//			cout << "enter this data agian: ";		//保证输入的数据是升序排列的
//	}
//	cout << endl;
//	for (i = 0; i < n; i++)
//		cout << a[i] << ' ';
//	cout << endl;
//	while (flag) {									//利用while循环 和键盘输入Y/N来确定程序的继续与否
//		cout << "input number to look for: ";
//		cin >> number;
//		sign = false;								//sign为false表示该数尚未被找到
//		top = 0;									//top是查找区间的起始位置
//		bottle = n - 1;								//bottle是查找区间的最末位置
//		if ((number < a[0]) || (number > a[n - 1]))
//			local = -1;								//要查的数不在正常区间内部 比最小小比最大大
//		while (sign==false  &&	top<=bottle) {				
//			mid = (top + bottle) / 2;
//			if (number == a[mid]) {					//如果查找的数正好等于中间元素！必须用“==”不然会进行赋值
//				local = mid;
//				cout << "find " << number << " , its position is " << local + 1 << endl;		//按照习惯 位置是下标+1
//				sign = true;						//表示该数找到了
//			}
//			else if (number < a[mid])
//				bottle = mid - 1;					//把最末位置更新成mid-1
//			else
//				top = mid + 1;						//把起始位置更新成mid+1
//		}
//		if (sign == false || local == -1)							//如果找不到数
//			cout << number << " has not found." << endl;
//		cout << "continue or not (Y/N)?: ";
//		cin >> c;
//		if (c == 'N' || c == 'n')								//双等号判定
//			flag = false;										//flag为开关变量 控制程序是否继续运行
//	}
//	return 0;
//}