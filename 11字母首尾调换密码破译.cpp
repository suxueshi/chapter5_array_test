//#include<iostream>
//#include<string>
//using namespace std;
//
////int main() {	//用字符数组的方法
////	int j, n;
////	char ch[80], tran[80];
////	cout << "input cipher code: ";
////	cin.getline(ch, 80);									//字符数组用这个函数，可以输入空格，遇到回车结束    或者用gets_s
////	cout << "cipher code:" << ch << endl;
////	j = 0;
////	while (ch[j] != '\0') {
////		if ((ch[j] >= 'A') && (ch[j] <= 'Z'))				//判断是否为大写字母
////			tran[j] = 155 - ch[j];
////		else if ((ch[j] >= 'a') && (ch[j] <= 'z'))			//判断是否为小写字母
////			tran[j] = 219 - ch[j];
////		else
////			tran[j] = ch[j];	
////		j++;
////	}
////	n = j;													//n为电报中字符的个数
////	cout << "original text: ";
////	for (j = 0; j < n; j++)
////		putchar(tran[j]);									//输出
////	return 0;
////}
//
////int main() {		//用字符串string的方法
////	int j;
////	string ch = "I will visit China next week.", tran;
////	tran = ch;
////	cout << "ciper code: " << ch << endl;
////	j = 0;
////		while (j<ch.size()) {									//用ch.size()测定ch的长度  不能用sizeof(ch) 因为它得出的是ch的内存长度
////			if ((ch[j] >= 'A') && (ch[j] <= 'Z'))				//判断是否为大写字母
////				tran[j] = 155 - ch[j];
////			else if ((ch[j] >= 'a') && (ch[j] <= 'z'))			//判断是否为小写字母
////				tran[j] = 219 - ch[j];
////			else
////				tran[j] = ch[j];	
////			j++;
////		}
////														//n为电报中字符的个数
////		cout << "original text: ";
////		cout << tran << endl;								//输出
////		return 0;
////
////}
//
//int main() {		//用字符串变量和指针的方法，用键盘输入电文
//	int j;
//	string ch = "    ";					//ch的初始值为若干个空格
//	char* p = &ch[0];					//定义字符指针并使之指向ch的首字符
//	cout << "input ciper code: ";
//	getline(cin,ch);					//带指针字符串用这个函数  如何读入一个字符指针？还没有解决
//	cout << "ciper code: " << ch << endl;
//	j = 0;
//	while (j<ch.size()) {									//用ch.size()测定ch的长度  不能用sizeof(ch) 因为它得出的是ch的内存长度
//		if ((ch[j] >= 'A') && (ch[j] <= 'Z'))				//判断是否为大写字母
//			ch[j] = 155 - ch[j];
//		else if ((ch[j] >= 'a') && (ch[j] <= 'z'))			//判断是否为小写字母
//			ch[j] = 219 - ch[j];
//		else
//			ch[j] = ch[j];	
//		j++;
//	}
//														//n为电报中字符的个数
//	cout << "original text: ";
//	cout << ch << endl;								//输出
//	return 0;
//}