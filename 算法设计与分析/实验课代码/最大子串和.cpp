//B: ����Ӵ���
//Time Limit : 1 Sec     Memory Limit : 128 Mb     Submitted : 84     Solved : 33
//Description
//����һ���������飬�ҵ�һ���������͵����������飨���������ٰ���һ��Ԫ�أ������������͡�
//
//Input
//�ж���������ݡ� ����ÿ��������ݣ���һ��ֻ��һ������N������������Ĵ�С(1 <= N <= 100000)
//
//�ڶ�����N��������(-100 <= N <= 100)
//
//Output
//ÿ��������ݽ����һ�У�����һ����������ʾ����Ӵ��͡�
//
//Sample Input
//9
//- 2 1 - 3 4 - 1 2 1 - 5 4
//Sample Output
//6
//Hint
//�ο�������
//
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//#include<algorithm>
//const int maxn = 1e5 + 10;
//int n, a[maxn], dp[maxn];
//int Solve(int a[], int n, int dp[])
//{
//    // TODO: ��������Ӵ���
//}
//int main()
//{
//    while (scanf("%d", &n) != EOF)
//    {
//        for (int i = 1; i <= n; i++)
//            scanf("%d", &a[i]);
//        printf("%d\n", Solve(a, n, dp));
//    }
//    return 0;
//}


//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//#include<algorithm>
//const int maxn = 1e5 + 10;
//int n, a[maxn], dp[maxn];
//
////˼·�����ӵ�i����ʱ�����ǰ��i-1�����ĺ�С��0����ô�ټӵ�i������ô�õ�������ȵ�i������С�����Ծ����¿�ʼ���ǵ�i�����Ժ������Ϊ����Ӵ���
//int Solve(int a[], int n, int dp[])
//{
//    // TODO: ��������Ӵ���
//    int temp = 0, sum = a[0];
//    for (int i = 0; i < n; i++) {
//        if (temp <= 0) {
//            temp = a[i];
//        }
//        else {
//            temp += a[i];
//        }
//        if (temp > sum) {
//            sum = temp;
//        }
//    }
//    return sum;
//
//}
//int main()
//{
//    while (scanf("%d", &n) != EOF)
//    {
//        for (int i = 0; i < n; i++)
//            scanf("%d", &a[i]);
//        printf("%d\n", Solve(a, n, dp));
//    }
//    return 0;
//}