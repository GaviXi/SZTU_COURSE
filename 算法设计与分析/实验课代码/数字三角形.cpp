//E: ����������
//Time Limit : 1 Sec     Memory Limit : 128 Mb     Submitted : 75     Solved : 32
//Description
//��������ͼ�����������Σ�Ҫ��Ӷ����ߵ��ײ㣬��ÿһ��ֻ���ߵ����ڵĽ�㣬�򾭹��Ľ�������֮������Ƕ��٣�
//
//Input
//�����������Ȱ���һ������T, ��ʾ����ʵ���ĸ�����
//
//ÿ������ʵ���ĵ�һ����һ������N(1 <= N <= 100)����ʾ�����ĸ߶ȡ�
//
//��������N�����ֱ�ʾ���������е�i���и�i�������������е�������������[0, 99]�ڡ�
//
//Output
//����ÿ������ʵ����������ܵõ������ͣ�ÿ��ʵ�������ռһ�С�
//
//Sample Input
//1
//5
//7
//3 8
//8 1 0
//2 7 4 4
//4 5 2 6 5
//Sample Output
//30
//Hint


//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//#include<iostream>
//#include<cstring>
//#include<algorithm>  //sort��max�������õĿ�
//using namespace std;
//const int maxn = 110;
//int d[maxn][maxn];
//int ans[maxn][maxn];
//int t;
//int n;
//
//int main() {
//	scanf("%d", &t);
//	while (t--) {
//		scanf("%d", &n);
//		memset(d, -1, sizeof(d));
//		memset(ans, -1, sizeof(ans));
//		for (int i = 1; i <= n; i++) {
//			for (int j = 1; j <= i; j++) {
//				scanf("%d", &d[i][j]);
//			}
//		}
//		for (int j = 1; j <= n; j++)
//			ans[n][j] = d[n][j];
//		for (int i = n; i > 1; i--)
//			for (int j = 1; j < i; j++)
//			{
//				ans[i - 1][j] = max(ans[i][j], ans[i][j + 1]) + d[i - 1][j];
//			}
//		printf("%d\n", ans[1][1]);
//	}
//	return 0;
//}
