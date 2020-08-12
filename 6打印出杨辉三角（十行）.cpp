//#include<iostream>
//#include<iomanip>
//using namespace std;
//int main() {
//	const int n = 11;
//	int a[n][n], i, j;	//数组为11行11列，0行0列不用
//	for (i = 1; i < n; i++) {
//		a[i][1] = 1;
//		a[i][i] = 1;		//第一列全部为1，对角线元素为1
//	}
//	for (i = 3; i < n; i++)
//		for (j = 2; j <= i - 1; j++)		//j<=i-1  意思是这个操作一直执行到对角数值之前那一个为止
//			a[i][j] = a[i - 1][j - 1] + a[i - 1][j];	//从第三行第二列开始 是对角线前一个数和顶上之数的和
//	for (i = 1; i < n; i++) {
//		for (j = 1; j <= i; j++) {						// j <=i相当于就打印数组的左边一半
//			cout << setw(6) << a[i][j] << " ";
//		}
//		cout << endl;
//	}
//	return 0;
//	
//}