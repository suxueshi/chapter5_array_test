//#include<iostream>
//using namespace std;
//int main() {
//	int i, j, temp, min, a[11];
//	cout << "please enter data: " << endl;
//	for (i = 1; i <= 10; i++) {			//������10������
//		cout << "a[" << i << "]= ";		//�����������Ҫ�μ�������
//		cin >> a[i];
//	}
//	cout << endl << "the originl numbers: " << endl;
//	for (i = 1; i <= 10; i++)
//		cout << a[i] << " ";
//	cout << endl;
//	for(i=1;i<=9;i++)			//ʮ������ ��ѡ�񷨱ȽϹ����о���
//		for(j=i+1;j<=10;j++)	
//			if (a[j] < a[i]) {	//�ο���ΪʲôҪ��min ����м�����
//				temp = a[i];
//				a[i] = a[j];
//				a[j] = temp;
//			}
//	cout << endl << "the sorted numbers: " << endl;
//	for (i = 1; i <= 10; i++)
//		cout << a[i] << " ";
//	return 0;
//}