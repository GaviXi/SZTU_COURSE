//C: ���ļ���
//Time Limit : 1 Sec     Memory Limit : 128 Mb     Submitted : 91     Solved : 38
//Description
//����Ҫ���ҳ����������������ĸ���(��������������� n)��
//
//������һ�������� n(n��1000), Ȼ��Դ��������������·������д���
//
//�����κδ���
//��������߼���һ��������, �������������ܳ����ϴμӵ�������һ�μ�����ԭ������һ�룻
//��������, �������˹�����д���, ֱ�������ټ�������Ϊֹ��
//Input
//1 �������� n(n �� 1000)
//
//Output
//1 ����������ʾ���и��������ĸ�����
//
//Sample Input
//6
//Sample Output
//6
//Hint
//������������Ϊ
//
//6��16��26��126��36��136
//


//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//long long int ans[1100] = { 0 };
//int main()
//{
//    int n;
//    while (scanf("%d", &n) != EOF)
//    {
//        if (n <= 0) {
//            continue;
//        }
//        ans[1] = 1;
//        for (int i = 2; i <= n; i++)
//        {
//            ans[i]++;
//            for (int j = 1; j <= i / 2; j++)
//                ans[i] += ans[j];
//        }
//        printf("%lld\n", ans[n]);
//    }
//    return 0;
//}