//F: �ϲ�ʯ��
//Time Limit : 1 Sec     Memory Limit : 128 Mb     Submitted : 55     Solved : 16
//Description
//��һ��Բ�βٳ������ܰڷ� N ��ʯ��, ��Ҫ��ʯ���д���غϲ���һ��.�涨ÿ��ֻ��ѡ���ڵ�2�Ѻϲ����µ�һ�ѣ������µ�һ�ѵ�ʯ��������Ϊ�ôκϲ��ĵ÷֡�
//
//����Ƴ�һ���㷨, ������� N��ʯ�Ӻϲ��� 1�ѵ���С�÷ֺ����÷֡�
//
//Input
//���ݵĵ� 1���������� N����ʾ�� N ��ʯ��, N <= 500��
//
//�� 2 ���� N ���������� i������ ai ��ʾ�� i ��ʯ�ӵĸ���, ai <= 50��
//
//Output
//����� 2 �У��� 1 ��Ϊ��С�÷֣��� 2 ��Ϊ���÷֡�
//
//Sample Input
//4
//4 5 9 4
//Sample Output
//43
//54
//Hint


//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//#include<iostream>
//#include<cstring>
//#include<algorithm>  //sort��max�������õĿ�
//using namespace std;
//
//int dpMin[1010][1010], dpMax[1010][1010], a[1010], n, temp;
//
//int getSum(int start, int step) {
//	int sum = 0;
//	for (int i = 0; i < step; i++)
//		sum += a[(start + i) % n];
//	return sum;
//}
//int main()
//{
//	while (scanf("%d", &n) != EOF) {
//		memset(dpMin, 127 / 3, sizeof(dpMin));
//		memset(dpMax, 0, sizeof(dpMax));
//		memset(a, 0, sizeof(a));
//		for (int i = 0; i < n; i++)
//		{
//			scanf("%d", &a[i]);
//			dpMin[i][1] = 0;
//			dpMax[i][1] = 0;
//
//		}
//		for (int t = 2; t <= n; t++) {
//			for (int i = 0; i < n; i++) {
//				int sum = getSum(i, t);
//				for (int k = 1; k < t; k++)
//					dpMin[i][t] = min(dpMin[i][t], dpMin[i][k] + dpMin[(i + k) % n][t - k] + sum);
//			}
//		}
//		for (int t = 2; t <= n; t++) {
//			for (int i = 0; i < n; i++) {
//				int sum = getSum(i, t);
//				for (int k = 1; k < t; k++)
//					dpMax[i][t] = max(dpMax[i][t], dpMax[i][k] + dpMax[(i + k) % n][t - k] + sum);
//			}
//		}
//		int ans = dpMin[0][n];
//		for (int i = 1; i < n; i++)
//			ans = min(ans, dpMin[i][n]);
//		cout << ans << endl;
//		ans = dpMax[0][n];
//		for (int i = 1; i < n; i++)
//			ans = max(ans, dpMax[i][n]);
//		cout << ans << endl;
//
//	}
//	return 0;
//}