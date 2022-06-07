#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;
const int maxn = 17;
const double inf = 1e17;
int vis[maxn]; // ��ǵ�ǰ����״̬ʱ�����Ƿ񱻷��ʹ�
double dp[maxn][1 << maxn | 1]; // ���仯
int n;

struct node
{
    double x, y;
    node() {}
    node(double _x, double _y) { x = _x; y = _y; }
}p[maxn];

// ������֮��ľ���
double dis(const node& a, const node& b)
{
    double xx = a.x - b.x;
    double yy = a.y - b.y;
    return sqrt(xx * xx + yy * yy);
}

// ������ status ��״̬�£���ǰ�� now ��㣬����ʣ��δ���ʵĵ����С��
//status ����ѹ��״̬
double dps(int now, int status)
{
    // �ݹ��յ㣺���е㶼�Ѿ�����������,������Ϊ011111
    if (status == (1 << n) - 1)
        return 0;

    // �����ǰ��״̬�Ѿ��������ˣ�ֱ�ӷ��ؽ��
    if (dp[now][status] < inf) return dp[now][status];

    vis[now] = 1; // ������ǣ���ʾ��ǰ����Ѿ�������

    // ��������δ���ʵĵ㣬������
    for (int i = 1; i < n; i++)
    {
        if (vis[i]) continue; // ÿ����ֻȥһ�Σ��Ѿ������ʵĵ�Ͳ�������

        // ״̬ת��
        dp[now][status] = min(dp[now][status], dis(p[now], p[i]) + dps(i, 1 << i | status)); ///��status�ĵ�i+1λ ��Ϊ1
    }

    vis[now] = 0; // �����������
    return dp[now][status];
}

int main()
{
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        double x, y;
        scanf("%lf%lf", &p[i].x, &p[i].y);
    }

    p[0] = node(0, 0);

    n++; //Ϊ���жϵݹ��յ�

    // ��ʼ����������״̬��Ϊ���ֵ
    for (int i = 0; i < n; i++) 
        for (int j = 1 << n; j >= 0; j--)
            dp[i][j] = inf;
    printf("%.2f\n", dps(0, 1));
    return 0;
}
