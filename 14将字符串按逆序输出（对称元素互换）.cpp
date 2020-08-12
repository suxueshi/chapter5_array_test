//#include<iostream>
//#include<string>
//using namespace std;
//
////int main() {		//用字符数组 注意字符数组每次都要指定确定的大小
////	const int n = 10;
////	int i;
////	char a[n], temp;
////	cout << "please input a string: ";
////	for (i = 0; i < n; i++)
////		cin >> a[i];
////	for (i = 0; i < n / 2; i++) {
////		temp = a[i];
////		a[i] = a[n - 1 - i];		//注意要减个1
////		a[n - 1 - i] = temp;
////	}
////	for (i = 0; i < n; i++)
////		cout << a[i];
////	cout << endl;
////}
//
//int main() {
//	string a;
//	int i, n;
//	char temp;
//	cout << "please input a string: ";
//	cin >> a;
//	n = a.size();					//用这个函数计算字符串a的长度
//	for (i = 0; i < n / 2; i++) {
//		temp = a[i];
//		a[i] = a[n - 1 - i];		//注意要减个1
//		a[n - 1 - i] = temp;
//	}
//	cout << a << endl;
//	return 0;
//
//}
//
