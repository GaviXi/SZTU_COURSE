//A: ��ҽ�������
//Time Limit : 1 Sec     Memory Limit : 128 Mb     Submitted : 94     Solved : 33
//Description
//����һ��רҵ��С͵���ƻ�͵���ؽֵķ��ݡ�ÿ�䷿�ڶ�����һ�����ֽ�Ӱ����͵�Ե�Ψһ��Լ���ؾ������ڵķ���װ���໥��ͨ�ķ���ϵͳ������������ڵķ�����ͬһ���ϱ�С͵���룬ϵͳ���Զ������� ����һ������ÿ�����ݴ�Ž��ķǸ��������飬������ ����������װ�õ������ ��һҹ֮���ܹ�͵�Ե�����߽�
//
//Input
//ÿ����԰��������У���һ��ֻ��һ������N����������N�䷿��(2 <= N <= 10000)
//
//�ڶ�����N��������������ÿ�䷿����Ľ���Χ[0, 1000]��
//
//Output
//�������Եõ�����߽��
//
//Sample Input
//4
//1 3 2 1
//5
//2 7 9 3 1
//Sample Output
//4
//12
//Hint
//dp[i][0] �� dp[i][1] �ֱ��ʾ�� i ����Ʒȡ�벻ȡ���ֱ�����λ��� dp[i - 1][0]��dp[i - 1][1]����״̬ת�ơ�
//
//�ο�������
//
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//const int maxn = 1e4 + 10;
//int max(int x, int y) { return x > y ? x : y; }
//int n, a;
//int dp[maxn][2];
//int main()
//{
//    while (scanf("%d", &n) != EOF)
//    {
//        memset(dp, 0, sizeof(dp));
//        dp[0][0] = dp[0][1] = 0;
//        for (int i = 1; i <= n; i++)
//        {
//            scanf("%d", &a);
//            // TODO: ���״̬ת��
//        }
//        printf("%d\n", max(dp[n][0], dp[n][1]));
//    }
//    return 0;
//}


//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//const int maxn = 1e4 + 10;
//int max(int x, int y) { return x > y ? x : y; }
//int n, a;
//int dp[maxn][2];
//int main()
//{
//    while (scanf("%d", &n) != EOF)
//    {
//        memset(dp, 0, sizeof(dp));
//        dp[0][0] = dp[0][1] = 0;
//        for (int i = 1; i <= n; i++)
//        {
//            scanf("%d", &a);
//            dp[i][0] = max(dp[i - 2][0], dp[i - 1][1]) + a;
//            dp[i][1] = max(dp[i - 2][0], dp[i - 1][0]);
//            // TODO: ���״̬ת��
//        }
//        printf("%d\n", max(dp[n][0], dp[n][1]));
//    }
//    return 0;
//}