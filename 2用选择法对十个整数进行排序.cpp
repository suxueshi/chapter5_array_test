//#include<iostream>
//using namespace std;
//int main() {
//	int i, j, temp, min, a[11];
//	cout << "please enter data: " << endl;
//	for (i = 1; i <= 10; i++) {			//输入这10个数字
//		cout << "a[" << i << "]= ";		//这种输出输入要牢记且熟练
//		cin >> a[i];
//	}
//	cout << endl << "the originl numbers: " << endl;
//	for (i = 1; i <= 10; i++)
//		cout << a[i] << " ";
//	cout << endl;
//	for(i=1;i<=9;i++)			//十个数字 用选择法比较共进行九轮
//		for(j=i+1;j<=10;j++)	
//			if (a[j] < a[i]) {	//参考答案为什么要用min 这个中间量？
//				temp = a[i];
//				a[i] = a[j];
//				a[j] = temp;
//			}
//	cout << endl << "the sorted numbers: " << endl;
//	for (i = 1; i <= 10; i++)
//		cout << a[i] << " ";
//	return 0;
//}