//#include<iostream>
//#include<string>
//using namespace std;
//
////int main() {	//���ַ�����ķ���
////	int j, n;
////	char ch[80], tran[80];
////	cout << "input cipher code: ";
////	cin.getline(ch, 80);									//�ַ������������������������ո������س�����    ������gets_s
////	cout << "cipher code:" << ch << endl;
////	j = 0;
////	while (ch[j] != '\0') {
////		if ((ch[j] >= 'A') && (ch[j] <= 'Z'))				//�ж��Ƿ�Ϊ��д��ĸ
////			tran[j] = 155 - ch[j];
////		else if ((ch[j] >= 'a') && (ch[j] <= 'z'))			//�ж��Ƿ�ΪСд��ĸ
////			tran[j] = 219 - ch[j];
////		else
////			tran[j] = ch[j];	
////		j++;
////	}
////	n = j;													//nΪ�籨���ַ��ĸ���
////	cout << "original text: ";
////	for (j = 0; j < n; j++)
////		putchar(tran[j]);									//���
////	return 0;
////}
//
////int main() {		//���ַ���string�ķ���
////	int j;
////	string ch = "I will visit China next week.", tran;
////	tran = ch;
////	cout << "ciper code: " << ch << endl;
////	j = 0;
////		while (j<ch.size()) {									//��ch.size()�ⶨch�ĳ���  ������sizeof(ch) ��Ϊ���ó�����ch���ڴ泤��
////			if ((ch[j] >= 'A') && (ch[j] <= 'Z'))				//�ж��Ƿ�Ϊ��д��ĸ
////				tran[j] = 155 - ch[j];
////			else if ((ch[j] >= 'a') && (ch[j] <= 'z'))			//�ж��Ƿ�ΪСд��ĸ
////				tran[j] = 219 - ch[j];
////			else
////				tran[j] = ch[j];	
////			j++;
////		}
////														//nΪ�籨���ַ��ĸ���
////		cout << "original text: ";
////		cout << tran << endl;								//���
////		return 0;
////
////}
//
//int main() {		//���ַ���������ָ��ķ������ü����������
//	int j;
//	string ch = "    ";					//ch�ĳ�ʼֵΪ���ɸ��ո�
//	char* p = &ch[0];					//�����ַ�ָ�벢ʹָ֮��ch�����ַ�
//	cout << "input ciper code: ";
//	getline(cin,ch);					//��ָ���ַ������������  ��ζ���һ���ַ�ָ�룿��û�н��
//	cout << "ciper code: " << ch << endl;
//	j = 0;
//	while (j<ch.size()) {									//��ch.size()�ⶨch�ĳ���  ������sizeof(ch) ��Ϊ���ó�����ch���ڴ泤��
//		if ((ch[j] >= 'A') && (ch[j] <= 'Z'))				//�ж��Ƿ�Ϊ��д��ĸ
//			ch[j] = 155 - ch[j];
//		else if ((ch[j] >= 'a') && (ch[j] <= 'z'))			//�ж��Ƿ�ΪСд��ĸ
//			ch[j] = 219 - ch[j];
//		else
//			ch[j] = ch[j];	
//		j++;
//	}
//														//nΪ�籨���ַ��ĸ���
//	cout << "original text: ";
//	cout << ch << endl;								//���
//	return 0;
//}