//#include<iostream>
//#include<string>
//using namespace std;
//
//
////int main() {		//用字符数组 ，不用strcat_s 函数（即自己编写一个具有strcat功能的函数）
////	char s1[80], s2[80];
////	int i = 0, j = 0;
////	cout << "input string1: ";
////	gets_s(s1);						//这个输入法可以带空格 或者用cin.getline(s1,80)
////	cout << "intput string2: ";
////	gets_s(s2);
////	while (s1[i] != '\0')		//相当于用i去记数s1有多长
////		i++;
////	while (s2[j] != '\0')		//再s1后面拼接上s2
////		s1[i++] = s2[j++];
////	s1[i] = '\0';				//最后加上一个结束符
////	cout << "the new string is: " << s1 << endl;
////	return 0;
////}
//
////int main() {	//用字符数组 且用标准库中的strcat_s函数
////	char s1[80], s2[80];
////	int i = 0, j = 0;
////	cout << "input string1: ";
////	gets_s(s1);						//这个输入法可以带空格 或者用cin.getline(s1,80)
////	cout << "intput string2: ";
////	gets_s(s2);
////	strcat_s(s1, s2);					//合并s1和s2并赋值给s1	标准答案中的strcat会在VS里面爆错
////	cout << "the new string is: " << s1 << endl;
////	return 0;
////}
//
//int main() {		//用string 方法定义字符串变量 该方法最为直观且简单
//	string s1, s2;
//	cout << "input string1: ";
//	getline(cin, s1);	//字符串方法用这个输入最好 字符数组要用上面的方法
//	cout << "input string2: ";
//	getline(cin, s2);
//	s1 = s1 + s2;
//	cout << "the new string is: " << s1 << endl;
//	return 0;
//}