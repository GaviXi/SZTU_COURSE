//G: ��ͬ·��
//Time Limit : 1 Sec     Memory Limit : 128 Mb     Submitted : 165     Solved : 53
//Description
//һ��������λ��һ�� m x n ��������Ͻǣ�������ÿ��ֻ�����»��������ƶ�һ������������ͼ�ﵽ��������½ǣ����ܹ��ж�������ͬ��·����
//
//ͼ��
//ͼ��
//Input
//����һ�У������ɿո��������������m��n��1 <= m��n <= 25������ʾ����ĳ���
//
//Output
//���һ�У���ʾ���������Ͻǵ����½��ܹ��ж�������ͬ��·����
//
//Sample Input
//3 2
//Sample Output
//3
//Hint
//����������������� �����Ͻǿ�ʼ���ܹ��� 3 ��·�����Ե������½ǡ� 1. ����->����->���� 2. ����->����->���� 3. ����->����->����


//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//#include<iostream>
//#include<cstring>
//#include<algorithm>  //sort��max�������õĿ�
//using namespace std;
//typedef long long LL;
//const int maxn = 1e2;
//LL ans[maxn][maxn];
//int t;
//int m, n;
//
//int main() {
//
//	while (scanf("%d %d", &m, &n) != EOF) {
//		memset(ans, 0, sizeof(ans));
//		for (int i = 1; i <= m; i++)ans[i][1] = 1;
//		for (int i = 1; i <= n; i++)ans[1][i] = 1;
//		for (int i = 2; i <= m; i++)
//			for (int j = 2; j <= n; j++)
//			{
//				ans[i][j] = ans[i][j - 1] + ans[i - 1][j];
//			}
//		printf("%lld\n", ans[m][n]);
//		/*for (int i = 1; i <= m; i++) {
//			for (int j = 1; j <= n; j++) {
//				cout << ans[i][j] << ' ';
//			}
//			cout << endl;
//		}*/
//	}
//	return 0;
//}
