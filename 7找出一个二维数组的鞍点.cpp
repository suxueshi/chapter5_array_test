//#include<iostream>
//using namespace std;
//int main() {
//	const int n = 4, m = 5;
//	int i, j, max, maxj, a[n][m];
//	bool flag;
//	cout << "enter " << n << " * " << m << " data: " << endl;
//	for (i = 0; i < n; i++)
//		for (j = 0; j < m; j++)
//			cin >> a[i][j];
//	cout << endl;
//	for (i = 0; i < n; i++) {
//		max = a[i][0];					//�Ƚ�ÿ�еĵ�һ�����������ֵ
//		maxj = 0;
//		for (j = 0; j < m; j++) {
//			if (max < a[i][j]) {
//				max = a[i][j];			//���ҵ�һ��֮�������Ǹ���
//				maxj = j;				//���������кŸ���maxj
//			}
//		}
//		flag = true;					//�ȼ����ǰ��� flag����true
//		for (int k=0;k<n;k++)			//��ͬһ�бȽϣ����¶���һ��kֵ�����к�
//			if (max > a[k][maxj]) {
//				flag = false;
//				continue;				//���max����ͬ����С�����ʾ���ǰ��㣬flagΪfalse
//			}
//		if (flag) {
//			cout << "a[" << i << "][" << maxj << "]"" = " << max ;
//			break;						//һ�������ֻ��һ�����㣬����ҵ��˵Ļ�ֱ�ӽ���ѭ��
//		}
//	}
//	if (!flag)
//		cout << "it does not exist!" << endl;
//	return 0;
//}