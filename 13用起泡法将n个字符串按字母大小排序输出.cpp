//#include<iostream>
//#include<string>
//using namespace std;	
//int main() {			//�ַ����Ĵ�С������߿�ʼ��ǰ����ַ������� �Ƚ�ASCII��
//	const int n = 5;	
//	int i, j;
//	string str[5], temp;
//	cout << "please input strings: ";
//	for (i = 0; i < n; i++)
//		cin >> str[i];
//	for(i=0;i<n-1;i++)					//��n��Ԫ��  ���ݷ�����Ҫn-1��ѭ��
//		for(j=0;j<n-1-i;j++)		//���ݷ����ǽ���һ���ͺ���N-1���� ����С���󣩵ķ��ڵ�һ�� Ȼ��ڶ����ͺ���n-2����
//			if (str[j] > str[j + 1]) {
//				temp = str[j];
//				str[j] = str[j + 1];
//				str[j + 1] = temp;
//			}
//	cout << "the sorted string is: " << endl;
//	for (i = 0; i < n; i++)
//		cout << str[i] << endl;
//	return 0;
//}