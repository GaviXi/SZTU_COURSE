//H: ����ƥ��II
//Time Limit : 1 Sec     Memory Limit : 128 Mb     Submitted : 50     Solved : 14
//Description
//����һ��ֻ����{}��������[]���ַ������������ܹ�����������ַ����е�����λ������κ����ţ���Ҫ���þ����ں��ʵ�λ��������ţ�ʹ���������Ŷ���ȷǶ�ף��������ַ����е���������ƥ�䣬�����޸ģ��������SZTU_WOD YYDS!������������ʹ���⴮�ַ�ÿ�����Ŷ���ȷǶ�׵������������
//
//Input
//�����������������ݣ�ÿ���������ռһ�У�ÿ�в�����100���ַ���
//
//Output
//�������ַ����е���������ƥ�䣬�����޸ģ��������SZTU_WOD YYDS!������������ʹ���⴮�ַ�ÿ�����Ŷ���ȷǶ�׵������������
//
//Sample Input
//()
//())
//Sample Output
//SZTU_WOD YYDS!
//1
//Hint



//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//#include<iostream>
//#include<cstring>
//#include<algorithm>  //sort��max�������õĿ�
//#include<stack>
//using namespace std;
//
//char s[110];
//int dp[110][110];
//bool check(int i, int j)
//{
//	if ((s[i] == '(' && s[j] == ')') || (s[i] == '[' && s[j] == ']') || (s[i] == '{' && s[j] == '}'))
//		return 1;
//	return 0;
//}
//
//int main()
//{
//	while (scanf("%s", s + 1) != EOF)
//	{
//		int i, j, k;
//		int len = strlen(s + 1);
//		memset(dp, 0, sizeof(dp));
//		for (i = 1; i <= len; i++)
//			dp[i][i] = 1;
//		for (i = len - 1; i >= 1; i--)
//		{
//			for (j = i; j <= len; j++)
//			{
//				dp[i][j] = dp[i + 1][j] + 1;
//				for (k = i + 1; k <= j; k++)
//				{
//					if (check(i, k))
//						dp[i][j] = min(dp[i][j], dp[i + 1][k - 1] + dp[k + 1][j]);
//				}
//			}
//		}
//		if (dp[1][len] == 0) {
//			printf("SZTU_WOD YYDS!\n");
//		}
//		else {
//			printf("%d\n", dp[1][len]);
//		}
//	}
//	return 0;
//
//}
