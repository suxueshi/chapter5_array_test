//#include<iostream>
//using namespace std;
//int main() {										//��������������ĳһ����  �ҵ��˾������λ�� �Ҳ���������Ҳ���
//	const int n = 7;
//	int i, number, top, bottle, mid, local, a[n];
//	bool flag = true, sign;
//	char c;
//	cout << "enter data: " << endl;
//	cin >> a[0];
//	i = 1;
//	while (i < n) {
//		cin >> a[i];
//		if (a[i] >= a[i - 1])
//			i++;
//		else
//			cout << "enter this data agian: ";		//��֤������������������е�
//	}
//	cout << endl;
//	for (i = 0; i < n; i++)
//		cout << a[i] << ' ';
//	cout << endl;
//	while (flag) {									//����whileѭ�� �ͼ�������Y/N��ȷ������ļ������
//		cout << "input number to look for: ";
//		cin >> number;
//		sign = false;								//signΪfalse��ʾ������δ���ҵ�
//		top = 0;									//top�ǲ����������ʼλ��
//		bottle = n - 1;								//bottle�ǲ����������ĩλ��
//		if ((number < a[0]) || (number > a[n - 1]))
//			local = -1;								//Ҫ������������������ڲ� ����СС������
//		while (sign==false  &&	top<=bottle) {				
//			mid = (top + bottle) / 2;
//			if (number == a[mid]) {					//������ҵ������õ����м�Ԫ�أ������á�==����Ȼ����и�ֵ
//				local = mid;
//				cout << "find " << number << " , its position is " << local + 1 << endl;		//����ϰ�� λ�����±�+1
//				sign = true;						//��ʾ�����ҵ���
//			}
//			else if (number < a[mid])
//				bottle = mid - 1;					//����ĩλ�ø��³�mid-1
//			else
//				top = mid + 1;						//����ʼλ�ø��³�mid+1
//		}
//		if (sign == false || local == -1)							//����Ҳ�����
//			cout << number << " has not found." << endl;
//		cout << "continue or not (Y/N)?: ";
//		cin >> c;
//		if (c == 'N' || c == 'n')								//˫�Ⱥ��ж�
//			flag = false;										//flagΪ���ر��� ���Ƴ����Ƿ��������
//	}
//	return 0;
//}