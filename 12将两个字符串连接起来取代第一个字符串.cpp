//#include<iostream>
//#include<string>
//using namespace std;
//
//
////int main() {		//���ַ����� ������strcat_s ���������Լ���дһ������strcat���ܵĺ�����
////	char s1[80], s2[80];
////	int i = 0, j = 0;
////	cout << "input string1: ";
////	gets_s(s1);						//������뷨���Դ��ո� ������cin.getline(s1,80)
////	cout << "intput string2: ";
////	gets_s(s2);
////	while (s1[i] != '\0')		//�൱����iȥ����s1�ж೤
////		i++;
////	while (s2[j] != '\0')		//��s1����ƴ����s2
////		s1[i++] = s2[j++];
////	s1[i] = '\0';				//������һ��������
////	cout << "the new string is: " << s1 << endl;
////	return 0;
////}
//
////int main() {	//���ַ����� ���ñ�׼���е�strcat_s����
////	char s1[80], s2[80];
////	int i = 0, j = 0;
////	cout << "input string1: ";
////	gets_s(s1);						//������뷨���Դ��ո� ������cin.getline(s1,80)
////	cout << "intput string2: ";
////	gets_s(s2);
////	strcat_s(s1, s2);					//�ϲ�s1��s2����ֵ��s1	��׼���е�strcat����VS���汬��
////	cout << "the new string is: " << s1 << endl;
////	return 0;
////}
//
//int main() {		//��string ���������ַ������� �÷�����Ϊֱ���Ҽ�
//	string s1, s2;
//	cout << "input string1: ";
//	getline(cin, s1);	//�ַ������������������� �ַ�����Ҫ������ķ���
//	cout << "input string2: ";
//	getline(cin, s2);
//	s1 = s1 + s2;
//	cout << "the new string is: " << s1 << endl;
//	return 0;
//}