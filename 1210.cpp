///////////////////////////////////////////////////////////////////////////////////////////////
//// �⺻ �����ڵ�� ���� �����ص� ���� �����ϴ�. ��, ����� ���� ����
//// �Ʒ� ǥ�� ����� ���� �ʿ�� �����ϼ���.
//// ǥ�� �Է� ����
//// int a;
//// float b, c;
//// double d, e, f;
//// char g;
//// char var[256];
//// long long AB;
//// cin >> a;                            // int ���� 1�� �Է¹޴� ����
//// cin >> b >> c;                       // float ���� 2�� �Է¹޴� ���� 
//// cin >> d >> e >> f;                  // double ���� 3�� �Է¹޴� ����
//// cin >> g;                            // char ���� 1�� �Է¹޴� ����
//// cin >> var;                          // ���ڿ� 1�� �Է¹޴� ����
//// cin >> AB;                           // long long ���� 1�� �Է¹޴� ����
///////////////////////////////////////////////////////////////////////////////////////////////
//// ǥ�� ��� ����
//// int a = 0;                            
//// float b = 1.0, c = 2.0;               
//// double d = 3.0, e = 0.0; f = 1.0;
//// char g = 'b';
//// char var[256] = "ABCDEFG";
//// long long AB = 12345678901234567L;
//// cout << a;                           // int ���� 1�� ����ϴ� ����
//// cout << b << " " << c;               // float ���� 2�� ����ϴ� ����
//// cout << d << " " << e << " " << f;   // double ���� 3�� ����ϴ� ����
//// cout << g;                           // char ���� 1�� ����ϴ� ����
//// cout << var;                         // ���ڿ� 1�� ����ϴ� ����
//// cout << AB;                          // long long ���� 1�� ����ϴ� ����
///////////////////////////////////////////////////////////////////////////////////////////////
//
//#include<iostream>
//#include<string.h>
//
//using namespace std;
//
//int arr[101][101];
////int dx[] = { 1,0,-1 };
////int dy[] = { 0,-1,0 };
//int row, col;
//int startCol;
//int goal = 2;
//int findRes;
//
//void leftside() {
//	while (arr[row][col - 1] == 1 /*|| col != 0*/) {
//		--col;
//	}
//}
//
//void rightside() {
//	while (arr[row][col + 1] == 1 /*|| col != 99*/) {
//		++col;
//	}
//}
//
////��θ� ã���� 1 ����
//int findPath(int startColNum) {
//	int retVal;
//	row = 0;
//	col = startCol;
//	for (int i = 1; i < 99; i++) {
//		if (arr[row][col + 1] == 1)
//			rightside();
//		else if (arr[row][col - 1] == 1)
//			leftside();
//		++row;
//	}
//	if (arr[row][col] == goal) retVal = 1;
//	else retVal = 0;
//	
//	return retVal;
//}
//
//
//int main(int argc, char** argv)
//{
//	int test_case;
//	int T;
//	/*
//	   �Ʒ��� freopen �Լ��� input.txt �� read only �������� �� ��,
//	   ������ ǥ�� �Է�(Ű����) ��� input.txt ���Ϸκ��� �о���ڴٴ� �ǹ��� �ڵ��Դϴ�.
//	   //�������� �ۼ��� �ڵ带 �׽�Ʈ �� ��, ���Ǹ� ���ؼ� input.txt�� �Է��� ������ ��,
//	   freopen �Լ��� �̿��ϸ� ���� cin �� ������ �� ǥ�� �Է� ��� ���Ϸκ��� �Է��� �޾ƿ� �� �ֽ��ϴ�.
//	   ���� �׽�Ʈ�� ������ ������ �Ʒ� �ּ��� ����� �� �Լ��� ����ϼŵ� �����ϴ�.
//	   freopen �Լ��� ����ϱ� ���ؼ��� #include <cstdio>, Ȥ�� #include <stdio.h> �� �ʿ��մϴ�.
//	   ��, ä���� ���� �ڵ带 �����Ͻ� ������ �ݵ�� freopen �Լ��� ����ų� �ּ� ó�� �ϼž� �մϴ�.
//	*/
//	freopen("input.txt", "r", stdin);
//	//cin >> T;
//	/*
//	   ���� ���� �׽�Ʈ ���̽��� �־����Ƿ�, ������ ó���մϴ�.
//	*/
//	for (test_case = 1; test_case <= 10; ++test_case)
//	{
//		//memset(arr, 0, sizeof(int) * 101 * 101);
//		findRes = 0;
//		cin >> T;
//		for (int i = 0; i < 100; i++) {
//			for (int j = 0; j < 100; j++) {
//				cin >> arr[i][j];
//			}
//		}
//
//
//		//��ٸ�Ÿ��
//		for (int i = 0; i < 100; i++) {
//			if (arr[0][i] == 1) {
//				findRes = 0;
//				findRes = findPath(i);
//				if (findRes == 1) {
//					startCol = i;
//					break;
//				}
//			}
//		}
//
//		cout << '#' << T << ' ' << startCol << endl;
//	}
//	return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
//}

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
int row, col;
int goalX, goalY;

//x��ǥ ����
int findPath(int y, int x) {
	while (1) {
		if (y - 1 < 0)
			return x;
		else {
			if (x - 1 >= 0 && arr[y][x - 1] == 1) {
				arr[y][x] = 0;
				--x;
			}
			else if (x + 1 <= 99 && arr[y][x + 1] == 1) {
				arr[y][x] = 0;
				++x;
			}
			else if (arr[y - 1][x] == 1) {
				arr[y][x] = 0;
				--y;
			}

		}
	}
}


int main(int argc, char** argv)
{
	int test_case;
	int T;
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
	for (test_case = 1; test_case <= 10; ++test_case)
	{
		int res;
		memset(arr, 0, sizeof(arr));
		//findRes = 0;
		cin >> T;
		for (int i = 0; i < 100; i++) {
			for (int j = 0; j < 100; j++) {
				cin >> arr[i][j];
				if (arr[i][j] == 2) {
					goalY = i;
					goalX = j;
				}
			}
		}

		res = findPath(goalY, goalX);

		cout << '#' << T << ' ' << res << endl;
	}
	return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
}