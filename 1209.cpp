/////////////////////////////////////////////////////////////////////////////////////////////
// �⺻ �����ڵ�� ���� �����ص� ���� �����ϴ�. ��, ����� ���� ����
// �Ʒ� ǥ�� ����� ���� �ʿ�� �����ϼ���.
// ǥ�� �Է� ����
// int a;
// float b, c;
// double d, e, f;
// char g;
// char var[256];
// long long AB;
// cin >> a;                            // int ���� 1�� �Է¹޴� ����
// cin >> b >> c;                       // float ���� 2�� �Է¹޴� ���� 
// cin >> d >> e >> f;                  // double ���� 3�� �Է¹޴� ����
// cin >> g;                            // char ���� 1�� �Է¹޴� ����
// cin >> var;                          // ���ڿ� 1�� �Է¹޴� ����
// cin >> AB;                           // long long ���� 1�� �Է¹޴� ����
/////////////////////////////////////////////////////////////////////////////////////////////
// ǥ�� ��� ����
// int a = 0;                            
// float b = 1.0, c = 2.0;               
// double d = 3.0, e = 0.0; f = 1.0;
// char g = 'b';
// char var[256] = "ABCDEFG";
// long long AB = 12345678901234567L;
// cout << a;                           // int ���� 1�� ����ϴ� ����
// cout << b << " " << c;               // float ���� 2�� ����ϴ� ����
// cout << d << " " << e << " " << f;   // double ���� 3�� ����ϴ� ����
// cout << g;                           // char ���� 1�� ����ϴ� ����
// cout << var;                         // ���ڿ� 1�� ����ϴ� ����
// cout << AB;                          // long long ���� 1�� ����ϴ� ����
/////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
#include<string.h>

using namespace std;

int arr[101][101];
int sum_row[101];
int sum_col[101];
int sum_diagonal[3];
int tmp;
int res;

int findMaxVal() {
	int max = 0;
	for (int i = 0; i < 100; i++) {
		if (max < sum_row[i])
			max = sum_row[i];
	}
	for (int i = 0; i < 100; i++) {
		if (max < sum_col[i])
			max = sum_col[i];
	}

	if (max < sum_diagonal[0])
		max = sum_diagonal[0];

	if (max < sum_diagonal[1])
		max = sum_diagonal[1];

	return max;
}

int main(int argc, char** argv)
{
	int test_case;
	int T=10;
	int test_num;
	/*
	   �Ʒ��� freopen �Լ��� input.txt �� read only �������� �� ��,
	   ������ ǥ�� �Է�(Ű����) ��� input.txt ���Ϸκ��� �о���ڴٴ� �ǹ��� �ڵ��Դϴ�.
	   //�������� �ۼ��� �ڵ带 �׽�Ʈ �� ��, ���Ǹ� ���ؼ� input.txt�� �Է��� ������ ��,
	   freopen �Լ��� �̿��ϸ� ���� cin �� ������ �� ǥ�� �Է� ��� ���Ϸκ��� �Է��� �޾ƿ� �� �ֽ��ϴ�.
	   ���� �׽�Ʈ�� ������ ������ �Ʒ� �ּ��� ����� �� �Լ��� ����ϼŵ� �����ϴ�.
	   freopen �Լ��� ����ϱ� ���ؼ��� #include <cstdio>, Ȥ�� #include <stdio.h> �� �ʿ��մϴ�.
	   ��, ä���� ���� �ڵ带 �����Ͻ� ������ �ݵ�� freopen �Լ��� ����ų� �ּ� ó�� �ϼž� �մϴ�.
	*/
	freopen("input.txt", "r", stdin);
	//cin >> T;
	/*
	   ���� ���� �׽�Ʈ ���̽��� �־����Ƿ�, ������ ó���մϴ�.
	*/
	for (test_case = 1; test_case <= T; ++test_case)
	{
		cin >> test_num;
		memset(arr, 0, sizeof(int) * 101 * 101);
		for (int i = 0; i < 100; i++) {
			tmp = 0;	//row�� �Է��ϸ鼭 �����
			for (int j = 0; j < 100; j++) {
				cin >> arr[i][j];
				tmp += arr[i][j];
			}
			sum_row[i] = tmp;
		}

		for (int i = 0; i < 100; i++) {
			tmp = 0;
			for (int j = 0; j < 100; j++) {
				tmp += arr[j][i];
			}
			sum_col[i] = tmp;
		}

		//�밢�� 1
		tmp = 0;
		for (int i = 0; i < 100; i++) {
			tmp += arr[i][i];
		}
		sum_diagonal[0] = tmp;

		//�밢�� 2
		tmp = 0;
		int tot = 99;
		for (int i = 0; i < 100; i++) {
			tmp += arr[i][tot-i];
		}
		sum_diagonal[1] = tmp;

		res = findMaxVal();
		cout << '#' << test_num << ' ' << res << endl;

	}
	return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
}