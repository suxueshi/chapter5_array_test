//#include<iostream>
//using namespace std;
//int main() {
//	const int n = 5;				//���������С���ı�ֱ�Ӹ�nֵ����
//	int a[n], temp, i;
//	cout << "enter array a : ";
//	for (i = 0; i < n; i++)
//		cin >> a[i];
//	cout << "array a: ";
//	for (i = 0; i < n; i++)
//		cout << a[i] << ' ';
//	for (i = 0; i < n / 2; i++) {		//	���൱�ڽ��Գ�λ�õ���ֵ����
//		temp = a[i];
//		a[i] = a[n - 1 - i];	//���������Ҫn-1
//		a[n - 1 - i] = temp;
//	}
//	cout << endl << "now, array a : ";
//	for (i = 0; i < n; i++)
//		cout << a[i] << ' ';
//	return 0;
//}