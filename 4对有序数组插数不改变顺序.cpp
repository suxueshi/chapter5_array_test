//#include<iostream>
//using namespace std;
//int main() {
//	int a[11] = { 1,6 ,13 ,17 ,28 ,40 ,56 ,78 ,89 ,100 };
//	int num, i, j;
//	cout << "array a: ";
//	for (i = 0; i < 10; i++)
//		cout << a[i] << ' ';
//	cout << endl;
//	cout << "insert data: ";
//	cin >> num;
//	if (num > a[9])			//如果num比最后的数字还大 直接插入a[10]
//		a[10] = num;
//	else
//	{
//		for (i = 0; i < 10; i++) {
//			if (a[i] > num) {
//				for (j = 9; j >= i; j--) {	//后面的数字往后移动一位
//					a[j + 1] = a[j];
//				}
//				a[i] = num;
//				break;				//插入数字后跳出循环
//								
//			}
//		}
//	}
//	cout << "now, array a: " << endl;
//	for (i = 0; i < 11; i++)
//		cout << a[i] << ' ';
//	return 0;
//}
