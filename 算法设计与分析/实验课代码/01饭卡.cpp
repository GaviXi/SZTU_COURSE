//E: 01����
//Time Limit : 1 Sec     Memory Limit : 128 Mb     Submitted : 177     Solved : 32
//Description
//�������һ����Ʒ֮ǰ�����ϵ�ʣ������ڻ����5Ԫ����һ�����Թ���ɹ�����ʹ����������Ϊ�����������޷����򣨼�ʹ����㹻�������Դ�Ҷ�ϣ������ʹ���ϵ�������١� ĳ�죬ʳ������n�ֲ˳��ۣ�ÿ�ֲ˿ɹ���һ�Ρ���֪ÿ�ֲ˵ļ۸��Լ����ϵ��������ٿ�ʹ���ϵ����Ϊ���١�
//
//Input
//�������ݡ�����ÿ�����ݣ� ��һ��Ϊ������n����ʾ�˵�������n <= 1000�� �ڶ��а���n������������ʾÿ�ֲ˵ļ۸񡣼۸񲻳���50�� �����а���һ��������m����ʾ���ϵ���m <= 1000��
//
//n = 0��ʾ���ݽ�����
//
//Output
//����ÿ������, ���һ��, ����һ����������ʾ���Ͽ��ܵ���С��
//
//Sample Input
//1
//50
//5
//10
//1 2 3 2 1 1 2 3 2 1
//50
//0
//Sample Output
//- 45
//32
//Hint


//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//#include<iostream>
//#include<cstring>
//#include<algorithm>  //sort��max�������õĿ�
//using namespace std;
//
//int a[1100], dp[1100] = { 0 }; //dp[i]��ʾ������iԪʱ���������
//
//int main() {
//	int n, m, i, j;
//	while (cin >> n)
//	{
//		memset(dp, 0, sizeof(dp));
//		if (n == 0) {
//			break;
//		}
//		for (i = 0; i < n; i++) {
//			scanf("%d", &a[i]);
//		}
//		scanf("%d", &m);
//		if (m < 5) {
//			printf("%d\n", m);
//			continue;
//		}
//		sort(a, a + n);
//		m -= 5;
//		//����5Ԫ�����Ĳˣ�ʣ��m-5Ԫ����n-1�ֲ�
//		for (i = 0; i < n - 1; i++) {
//			for (j = m; j >= a[i]; j--) {
//				dp[j] = max(dp[j], dp[j - a[i]] + a[i]);
//			}
//			//���������Թ۲��������Ľ������
//			/*for (int k = 0; k < m-4; k++) {
//				printf("%d ", dp[k]);
//			}
//			printf("\n");*/
//		}
//		printf("%d\n", m + 5 - dp[m] - a[n - 1]);
//	}
//	return 0;
//}