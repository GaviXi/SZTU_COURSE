//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//#include<math.h>
//const int maxn = 14;
//int n;
//int ans;
//bool rcdx[maxn], rcdlr[maxn << 1 | 1], rcdrl[maxn << 1 | 1];
//void DFS(int cur)
//{
//    // TODO: ����ݹ��յ㣬�����������߱�ǽ��л���
//    if (cur == n) { ans++;  return; }
//    for (int i = 0; i < n; i++) {
//        
//        if (rcdx[i] == 0 && rcdlr[i - cur + maxn] == 0 && rcdrl[i + cur] == 0) {
//            rcdx[i] = 1;
//            rcdlr[i - cur + maxn] = 1;
//            rcdrl[i + cur] = 1;
//            DFS(cur + 1);
//            rcdx[i] = 0;
//            rcdlr[i - cur + maxn] = 0;
//            rcdrl[i + cur] = 0;
//        }
//    }
//}
//int main()
//{
//    while (scanf("%d", &n) != EOF)
//    {
//        memset(rcdx, 0, sizeof(rcdx));      // ��
//        memset(rcdlr, 0, sizeof(rcdlr));    // �ҶԽ��߱��
//        memset(rcdrl, 0, sizeof(rcdrl));    // ��Խ��߱��
//        ans = 0;
//        DFS(0);
//        printf("%d\n", ans);
//    }
//    return 0;
//}