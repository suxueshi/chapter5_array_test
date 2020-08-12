//#include<iostream>
//#include<cmath>
//#include<iomanip>
//using namespace std;
//int main() {
//	int a[101], i, j, n;	//定义一个101个元素的数组 
//	for (i = 1; i <= 100; i++)
//		a[i] = i;		//为各个元素赋值，a[0]舍去不要
//	a[1] = 0;			//1不是素数 直接变为0 先挖掉
//	for (i = 2; i < sqrt(100); i++)				//除数 从2开始一直到根号100
//		for (j = i + 1; j <= 100; j++)			//被除数 从除数的后一位开始一直到100
//			if (a[i] != 0 && a[j] != 0)			//先去掉之前每次挖掉的坑 坑既是0
//				if (a[j] % a[i] == 0) a[j] = 0;	//把素数挖坑  等于0
//	for (i = 1, n = 0; i <= 100; i++) {
//		if (a[i] != 0) {
//			cout << setw(5) << a[i] << " ";		//输出素数 宽度为5列
//			n++;
//		}
//		if (n == 10) {
//			cout << endl;
//			n = 0;
//		}					//每输出10个数字就换行
//	}
//	return 0;
//}