//#include<iostream>
//using namespace std;
//int main() {
//	const int n = 5;				//给出数组大小，改变直接改n值即可
//	int a[n], temp, i;
//	cout << "enter array a : ";
//	for (i = 0; i < n; i++)
//		cin >> a[i];
//	cout << "array a: ";
//	for (i = 0; i < n; i++)
//		cout << a[i] << ' ';
//	for (i = 0; i < n / 2; i++) {		//	就相当于将对称位置的数值互换
//		temp = a[i];
//		a[i] = a[n - 1 - i];	//数组的特性要n-1
//		a[n - 1 - i] = temp;
//	}
//	cout << endl << "now, array a : ";
//	for (i = 0; i < n; i++)
//		cout << a[i] << ' ';
//	return 0;
//}