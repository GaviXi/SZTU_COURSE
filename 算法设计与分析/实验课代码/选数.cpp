//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//#include <math.h>
//int n,k;
//int result;
//int ans[30];
//
//void DFS(int now,int num,int sum)
//{
//    if (num==k)
//    {
//        // TODO: ����ݹ��յ㣬������
//        int m = 0;
//        for (int i = 2; i <= int(sqrt(sum)); i++) {
//            if (sum % i == 0) {
//                m++;
//            }
//        }
//        if (m == 0&&sum!=1) {
//            result++; //������
//        }
//        return;
//    }
//    for (int i = now; i < n; i++)
//    {
//        // TODO: ö�ٿ����ԣ����л���
//        sum += ans[i];
//        now = i;
//        now++;
//        num++;
//        DFS(now,num,sum);
//        sum -= ans[i];
//        now--;
//        num--;
//    }
//}
//int main()
//{
//    while (scanf("%d %d", &n,&k) != EOF)
//    {
//        result = 0;
//        for (int i = 0; i < n; i++) {
//            scanf("%d", &ans[i]);
//        }
//        DFS(0,0,0);
//        printf("%d\n", result);
//    }
//    return 0;
//}
