//#include<iostream>
//#include<iomanip>
//using namespace std;
//int main() {
//	const int n = 11;
//	int a[n][n], i, j;	//����Ϊ11��11�У�0��0�в���
//	for (i = 1; i < n; i++) {
//		a[i][1] = 1;
//		a[i][i] = 1;		//��һ��ȫ��Ϊ1���Խ���Ԫ��Ϊ1
//	}
//	for (i = 3; i < n; i++)
//		for (j = 2; j <= i - 1; j++)		//j<=i-1  ��˼���������һֱִ�е��Խ���ֵ֮ǰ��һ��Ϊֹ
//			a[i][j] = a[i - 1][j - 1] + a[i - 1][j];	//�ӵ����еڶ��п�ʼ �ǶԽ���ǰһ�����Ͷ���֮���ĺ�
//	for (i = 1; i < n; i++) {
//		for (j = 1; j <= i; j++) {						// j <=i�൱�ھʹ�ӡ��������һ��
//			cout << setw(6) << a[i][j] << " ";
//		}
//		cout << endl;
//	}
//	return 0;
//	
//}