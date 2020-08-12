//#include<iostream>
//#include<string>
//using namespace std;	
//int main() {			//字符串的大小是由左边开始最前面的字符决定的 比较ASCII码
//	const int n = 5;	
//	int i, j;
//	string str[5], temp;
//	cout << "please input strings: ";
//	for (i = 0; i < n; i++)
//		cin >> str[i];
//	for(i=0;i<n-1;i++)					//有n个元素  起泡法就需要n-1次循环
//		for(j=0;j<n-1-i;j++)		//起泡法就是将第一个和后面N-1个比 把最小（大）的放在第一个 然后第二个和后面n-2个比
//			if (str[j] > str[j + 1]) {
//				temp = str[j];
//				str[j] = str[j + 1];
//				str[j + 1] = temp;
//			}
//	cout << "the sorted string is: " << endl;
//	for (i = 0; i < n; i++)
//		cout << str[i] << endl;
//	return 0;
//}