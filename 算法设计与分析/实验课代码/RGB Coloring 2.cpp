//G: RGB Coloring 2
//Time Limit : 1 Sec     Memory Limit : 128 Mb     Submitted : 28     Solved : 4
//Description
//We have a simple undirected graph with N vertices and M edges.The vertices are numbered 1 through N and the edges are numbered 1 through M.Edge i connects Vertex Ai and Vertex.Find the number of ways to paint each vertex in this graph red, green, or blue so that the following condition is satisfied :
//
//two vertices directly connected by an edge are always painted in different colors.
//Here, it is not mandatory to use all the colors.
//
//Input
//Input is given from Standard Input in the following format :
//
//N M
//
//A1 B1
//
//A2 B2
//
//​ .
//
//AM BM
//
//Output
//Print the answer.
//
//Sample Input
//3 3
//1 2
//2 3
//3 1
//Sample Output
//6
//Hint
//数据范围
//1 ≤ N ≤ 20
//
//
//
//1 ≤ Ai ≤ N
//
//1 ≤ Bi ≤ N
//
//The given graph is simple(that is, has no multi - edges and no self - loops).
//
//Note that the graph may not be connected.
//



//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//const int maxn = 22;
//int n, m;
//bool g[maxn][maxn];
//int cb[maxn], vis[maxn], rcd[maxn], ctp;
//long long tmpans, ans;
//void GetBlk(int cur)
//{
//    vis[cur] = true;
//    cb[ctp++] = cur;
//    for (int i = 1; i <= n; i++)
//        if (g[cur][i] && !vis[i]) GetBlk(i);
//}
//bool Judge(int cur, int color)
//{
//    for (int i = 0; i < cur; i++)
//        if (g[cb[cur]][cb[i]] && rcd[cb[i]] == color) return false;
//    return true;
//}
//void DFS(int cur)
//{
//    if (cur == ctp)
//    {
//        tmpans += ctp >= 2 ? 6 : 3;
//        return;
//    }
//    if (cur < 2) rcd[cb[cur]] = cur + 1, DFS(cur + 1);
//    else
//    {
//        for (int cl = 1; cl <= 3; cl++)
//            if (Judge(cur, cl)) rcd[cb[cur]] = cl, DFS(cur + 1);
//    }
//}
//int main()
//{
//    int s, e;
//    while (scanf("%d%d", &n, &m) != EOF)
//    {
//        memset(g, 0, sizeof(g));
//        for (int i = 0; i < m; i++)
//        {
//            scanf("%d%d", &s, &e);
//            g[s][e] = g[e][s] = true;
//        }
//        memset(vis, 0, sizeof(vis));
//        memset(rcd, 0, sizeof(rcd));
//        ans = 1;
//        for (int i = 1; i <= n; i++)
//        {
//            if (vis[i]) continue;
//            tmpans = ctp = 0;
//            GetBlk(i);
//            DFS(0);
//            ans *= tmpans;
//        }
//        printf("%lld\n", ans);
//    }
//    return 0;
//}