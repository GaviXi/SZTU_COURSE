//A: ����Ĵ�Ⱦ��
//Time Limit : 1 Sec     Memory Limit : 128 Mb     Submitted : 104     Solved : 37
//Description
//���ﻼ��Ⱦ���ˡ�һ�������ÿ�ִ�Ⱦ x ��������� n �ִ�Ⱦ���ж��ٶ��ﱻ��Ⱦ��
//
//Input
//�����Ǹ����� x �� n��
//
//Output
//һ��������������Ⱦ�Ķ�������
//
//Sample Input
//10 2
//Sample Output
//121
//Hint
//�ο�������
//
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//long long Solve(int x, int n)
//{
//    // TODO: ���Ƶ� n �ֵĽ��
//}
//int main()
//{
//    long long x, n;
//    while (scanf("%lld%lld", &x, &n) != EOF)
//    {
//        printf("%lld\n", Solve(x, n));
//    }
//    return 0;
//}


//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//long long Solve(int x, int n)
//{
//    if (n < 1) {
//        return 1;
//    }
//    else {
//        return Solve(x, n - 1) * (x + 1);
//    }
//}
//int main()
//{
//    long long x, n;
//    while (scanf("%lld%lld", &x, &n) != EOF)
//    {
//        printf("%lld\n", Solve(x, n));
//    }
//    return 0;
//}