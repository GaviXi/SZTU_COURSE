//D: ���Ļ���
//Time Limit : 1 Sec     Memory Limit : 128 Mb     Submitted : 67     Solved : 34
//Description
//������ n �ֳ� k �ݣ���ÿ�ݲ���Ϊ�գ�����������������ͬ��������˳�򣩡�
//
//���磺n = 7��k = 3���������ַַ�����Ϊ����ͬ�ġ�
//
//1, 1, 5
//
//1, 5, 1
//
//5, 1, 1
//
//���ж����ֲ�ͬ�ķַ���
//
//Input
//n, k ��6 < n �� 200��2 �� k �� 6��
//
//    Output
//    1 ������������ͬ�ķַ���
//
//    Sample Input
//    7 3
//    Sample Output
//    4
//    Hint
//    �����������������
//
//    ���ַַ�Ϊ��
//
//    1, 1, 5
//
//    1, 2, 4
//
//    1, 3, 3
//
//    2, 2, 3
//
//    ����
//
//    dp[i][j] ��ʾ i �ֳ� j �ݡ�����ÿ�ݲ�Ϊ 0 ���� dp[i][j] = dp[i - j][j] + dp[i - 1][j - 1]
//    dp[i - j][j] ��ʾ���ó� j �� 1 ���� j ���ϣ���֤����Ϊ 0���ٰ�ʣ�µķ� j �ݣ���ÿ�ݶ����� 1
//    dp[i - 1][j - 1] ��ʾ�� j ��ֻ�� 1 ����ʣ�µ� i - 1 ������������� j - 1 �ݣ�������֤�� j �������ٵģ������ظ�
//    �ο�������
//
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//    int dp[220][11];
//
//int main()
//{
//    int n, k;
//    memset(dp, 0, sizeof(dp));
//    for (int i = 0; i <= 200; i++) {
//        // TODO: ��С���⸳��ֵ
//    }
//    while (scanf("%d%d", &n, &k) != EOF)
//    {
//        // TODO: ���ƣ�dp[n][k] Ϊ��
//
//    }
//    return 0;
//}


//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//int dp[220][11];
//
//int main()
//{
//    int n, k;
//    memset(dp, 0, sizeof(dp));
//    dp[0][0] = 1;
//    while (scanf("%d%d", &n, &k) != EOF)
//    {
//        // TODO: ���ƣ�dp[n][k] Ϊ��
//        for (int i = 1; i <= n; i++) {
//            for (int j = 0; j <= k; j++) {
//                if (i >= j) {
//                    dp[i][j] = dp[i - j][j] + dp[i - 1][j - 1];
//                }
//            }
//        }
//        printf("%d\n", dp[n][k]);
//    }
//    return 0;
//}

