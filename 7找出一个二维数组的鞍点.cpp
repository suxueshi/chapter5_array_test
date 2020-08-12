//#include<iostream>
//using namespace std;
//int main() {
//	const int n = 4, m = 5;
//	int i, j, max, maxj, a[n][m];
//	bool flag;
//	cout << "enter " << n << " * " << m << " data: " << endl;
//	for (i = 0; i < n; i++)
//		for (j = 0; j < m; j++)
//			cin >> a[i][j];
//	cout << endl;
//	for (i = 0; i < n; i++) {
//		max = a[i][0];					//先将每行的第一个数视作最大值
//		maxj = 0;
//		for (j = 0; j < m; j++) {
//			if (max < a[i][j]) {
//				max = a[i][j];			//先找到一行之中最大的那个数
//				maxj = j;				//将该数的列号赋给maxj
//			}
//		}
//		flag = true;					//先假设是鞍点 flag等于true
//		for (int k=0;k<n;k++)			//在同一列比较，重新定义一个k值代表行号
//			if (max > a[k][maxj]) {
//				flag = false;
//				continue;				//如果max不是同列最小，则表示不是鞍点，flag为false
//			}
//		if (flag) {
//			cout << "a[" << i << "][" << maxj << "]"" = " << max ;
//			break;						//一个数组就只有一个鞍点，如果找到了的话直接结束循环
//		}
//	}
//	if (!flag)
//		cout << "it does not exist!" << endl;
//	return 0;
//}