//D: ����������
//Time Limit : 1 Sec     Memory Limit : 128 Mb     Submitted : 101     Solved : 33
//Description
//��һ�����飬����Ԫ��ֻ��0��1������ɾ���������е�һ��Ԫ�أ�Ȼ�󷵻��������������1�ĳ��ȣ��������ڣ��򷵻�0
//
//Input
//��һ�У����鳤��n�� 1 <= n <= 100000 �ڶ��У�n��0��1������
//
//Output
//���һ�����֣����������1�ĳ���
//
//Sample Input
//6
//1 0 1 0 1 1
//Sample Output
//3
//Hint



//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//#include<iostream>
//#include<algorithm>
//using namespace std;
//typedef long long LL;
//const int maxn = 1e5 + 10;
//int ans[maxn];
//LL n;
//LL maxNum = 0;
//LL maxIndex = 0;
//int main()
//{
//    while (scanf("%lld", &n) != EOF) {
//        maxNum = 0;
//        for (int i = 0; i < n; i++) {
//            scanf("%d", &ans[i]);
//        }
//        int temp = 0;
//        int tempIndex = 0;
//        bool first = true;
//        for (int i = 0; i < n; i++) {
//            if (ans[i] == 1) {
//                temp++;
//            }
//            else if (ans[i] == 0 && first) {
//                first = false;
//                tempIndex = i;
//            }
//            else if (ans[i] == 0 && (!first)) {
//                if (temp > maxNum) {
//                    maxNum = temp;
//                }
//                i = tempIndex;
//                first = true;
//                temp = 0;
//            }
//        }
//        if (temp > maxNum) {
//            maxNum = temp;
//        }
//
//        cout << maxNum << endl;
//    }
//    return 0;
//}
