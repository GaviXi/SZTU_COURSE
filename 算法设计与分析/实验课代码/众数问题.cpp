//B: ��������
//Time Limit : 1 Sec     Memory Limit : 128 Mb     Submitted : 100     Solved : 36
//Description
//��������n��Ԫ�صĶ��ؼ���S��ÿ��Ԫ����S�г��ֵĴ�����Ϊ��Ԫ�ص����������ؼ�S����������Ԫ�س�Ϊ���������磬S = { 1��2��2��2��3��5 }�����ؼ�S��������2��������Ϊ3�����ڸ�������n ����Ȼ����ɵĶ��ؼ�S������S����������������������ֶ���������������С���Ǹ���
//
//Input
//�������ݵĵ�1���Ƕ��ؼ�S��Ԫ�ظ���n��n < 1300000������������n���У�ÿ����һ����ຬ��5λ���ֵ���Ȼ����
//
//    Output
//    ������ݵĵ�1�и�����������2����������
//
//    Sample Input
//    6
//    1
//    2
//    2
//    2
//    3
//    5
//    Sample Output
//    2
//    3
//    Hint


//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//#include<iostream>
//#include<cstring>
//#include<algorithm>  //sort��max�������õĿ�
//using namespace std;
//typedef long long LL;
//const LL maxn = 1e5;
//LL n;
//int ans[maxn];
//int multipe = maxn;
//int res;
//
//int main() {
//	while (scanf("%lld", &n) != EOF) {
//		res = 0;
//		memset(ans, 0, sizeof(ans));
//		for (int i = 0; i < n; i++) {
//			int temp;
//			scanf("%d", &temp);
//			ans[temp]++;
//		}
//		for (int i = 0; i < maxn; i++) {
//			if (ans[i] > res) {
//				multipe = i;
//				res = ans[i];
//			}
//		}
//		cout << multipe << endl;
//		cout << res << endl;
//	}
//	return 0;
//}