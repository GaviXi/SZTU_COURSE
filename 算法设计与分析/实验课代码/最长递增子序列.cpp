//C: �����������
//Time Limit : 3 Sec     Memory Limit : 128 Mb     Submitted : 76     Solved : 30
//Description
//��������ΪN�����飬�ҳ�������������������С�(������������ָ�������е�Ԫ���ǵ����ģ�
//
//    ���� : 1 3 2 5 4 7 6 9 8, �����������Ϊ1 3 5 7 9
//
//    Input
//    �����������Ȱ���һ������ T(1��10), ��ʾ����ʵ���ĸ�����
//
//    ÿ������ʵ���ĵ�һ����һ������ N(2��N��5000) ����ʾ���еĳ��ȡ�
//
//    �ڶ���������һ�����飬�����е�������������[0, 106]�ڡ�
//
//    Output
//    ����ÿ������ʵ�����������������еĳ��ȣ�ÿ��ʵ�������ռһ�С�
//
//    Sample Input
//    1
//    9
//    1 3 2 5 4 7 6 9 8
//    Sample Output
//    5


//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//#include<algorithm>
//const int maxn = 1e5 + 10;
//int t, n, a[maxn];
//int longest[maxn];
//
//int LIS(int a[], int n)
//{
//    for (int i = 0; i < n; i++)
//        longest[i] = 1;
//
//    for (int j = 1; j < n; j++) {
//        for (int i = 0; i < j; i++) {
//            if (a[j] > a[i] && longest[j] < longest[i] + 1) {
//                longest[j] = longest[i] + 1; //������arr[j]��β�����е�����������г���  
//            }
//        }
//    }
//
//    int max = 0;
//    for (int j = 0; j < n; j++) {
//        if (longest[j] > max) max = longest[j];  //��longest[j]���ҳ����ֵ  
//    }
//    return max;
//
//}
//int main()
//{
//    scanf("%d", &t);
//    while (t--)
//    {
//        scanf("%d", &n);
//        for (int i = 0; i < n; i++)
//            scanf("%d", &a[i]);
//        printf("%d\n", LIS(a, n));
//    }
//    return 0;
//}