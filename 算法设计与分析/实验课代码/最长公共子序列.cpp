//D: �����������
//Time Limit : 1 Sec     Memory Limit : 128 Mb     Submitted : 67     Solved : 28
//Description
//���������е���ÿ�����������Ϊһ�У������ַ�����ÿ�鲻����1000���ÿո������������������У���ΪСд��ĸ��
//
//Input
//ÿ�����������Ϊһ�У������ַ�����ÿ�鲻����1000���ÿո������
//
//Output
//����ÿ������ʵ�����������������еĳ��ȣ�ÿ��ʵ�������ռһ�С�
//
//Sample Input
//abcfbc abfcab
//programming contest
//abcd mnp
//Sample Output
//4
//2
//0
//Hint


//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//#include<string.h>
//#include<string>
//#include<algorithm>
//
//#include<iostream> 
//#include<string.h>
//using namespace std;
//
//const int maxn = 1e5 + 10;
//string a, b;
//const int ERROR = maxn;
//int C[1010][1010] = { {0} };
//
//int cmp(int a, int b) {
//    return a > b ? a : b;
//}
//int LCS(string a, string b, int m, int n)
//{
//    for (int i = 1; i < m; i++) {
//        for (int j = 1; j < n; j++) {
//            if (a[i] == b[j]) {
//                C[i][j] = C[i - 1][j - 1] + 1;
//            }
//            else {
//                C[i][j] = cmp(C[i - 1][j], C[i][j - 1]);
//            }
//        }
//    }
//    return C[m - 1][n - 1];
//}
//int main()
//{
//    while (cin >> a >> b)
//    {
//        a = ' ' + a;
//        b = ' ' + b;
//        int m = a.length();
//        int n = b.length();
//        printf("%d\n", LCS(a, b, m, n));
//        //for (int i = 0; i < m; i++) {
//        //    for (int j = 0; j < n; j++) {
//        //        if (j == n - 1) {
//        //            cout << C[i][j] << endl;
//        //            break;
//        //        }
//        //        cout << C[i][j] <<" ";
//        //    }
//        //}
//    }
//    return 0;
//}
