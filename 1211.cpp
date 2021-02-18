#include<iostream>
#include<cstring>

using namespace std;

int arr[101][101];
int visited[101][101];
int dis, departure;

//����, ������, ��
int dx[3] = { 0, 0, -1 };
int dy[3] = { -1, 1, 0 };

//x��ǥ ����
//int findPath(int x, int y) {
//	while (1) {
//		if (y - 1 < 0)
//			return x;
//		else {
//			if (x - 1 >= 0 && map[y][x - 1] == 1) {
//				map[y][x] = 0;
//				--x;
//				++newLength;
//			}
//			else if (x + 1 <= 99 && map[y][x + 1] == 1) {
//				map[y][x] = 0;
//				++x;
//				++newLength;
//			}
//			else if (map[y - 1][x] == 1) {
//				map[y][x] = 0;
//				--y;
//				++newLength;
//			}
//
//		}
//	}
//}
//
//int shortestPath() {
//	goalLength = 999999;
//	for (int i = 0; i < cnt; i++) {
//		newLength = 0;
//		memcpy(map, arr, sizeof(arr));
//		newX = findPath(99, goalX[i]);
//		if (newLength < goalLength) {
//			goalLength = newLength;
//			goal = newX;
//		}
//		else if (newLength == goalLength && newX > goal) {
//			goal = newX;
//		}
//	}
//
//	return goal;
//}

void findDeparture(int x, int y) {
	int local_distance = 0;
	int local_x = x;
	int local_y = y;
	while (1) {
		if (local_x == 0) {
			if (dis > local_distance) {
				dis = local_distance;
				departure = local_y;
			}
			return;
		}
		for (int i = 0; i < 3; i++) {
			int mx = local_x + dx[i];
			int my = local_y + dy[i];

			if (mx < 0 || mx >= 100 || my < 0 || my >= 100) continue;
			if (arr[mx][my] == 0) continue;
			if (visited[mx][my]) continue;
			local_x = mx;
			local_y = my;
			local_distance++;
			visited[mx][my] = 1;
			break;
		}
	}
	return;
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
		memset(arr, 0, sizeof(arr));		
		dis = 999999;
		cin >> T;
		for (int i = 0; i < 100; i++) {
			for (int j = 0; j < 100; j++) {
				cin >> arr[i][j];
			}
		}

		for (int i = 0; i < 100; i++) {
			memset(visited, 0, sizeof(visited));
			if (arr[99][i]) findDeparture(99, i);
		}

		cout << '#' << T << ' ' << departure << endl;
	}
	return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
}
