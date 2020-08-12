//#include<iostream>
//using namespace std;
//
//
////int main() {		//用字符数组的方法
////	int i, j, k;
////	char a[5] = { '*','*','*','*','*' };
////	const char space = ' ';
////	for (i = 0; i < 5; i++) {
////		cout << endl;		//输出每行前先换行
////		cout << "    ";		//每行前面留四个空
////		for (j = 1; j <= i; j++)
////			cout << space;		//每行前面再留空格 第一行为一个 第二行为两个以此类推
////		for (k = 0; k < 5; k++)
////			cout << a[k];			//每行输出五个*
////	}
////	return 0;
////}
//
//int main() {	//用字符串的方法
//	string stars = "*****";
//	int i, j;
//	for (i = 0; i < 5; i++) {
//		cout << "    ";
//		for (j = 1; j <= i; j++)
//			cout << " ";			//每行前面再插入i个空格
//		cout << stars << endl;
//	}
//	return 0;
//}
