#include<iostream>
#include<cstring>

using namespace std;

int arr[101][101];
int visited[101][101];
int dis, departure;

//왼쪽, 오른쪽, 위
int dx[3] = { -1, 1, 0 };
int dy[3] = { 0, 0, -1 };

void findDeparture(int x, int y) {
	int local_distance = 0;
	int local_x = x;
	int local_y = y;
	while (1) {
		if (local_y == 0) {
			if (dis > local_distance) {
				dis = local_distance;
				departure = local_x;
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
	   아래의 freopen 함수는 input.txt 를 read only 형식으로 연 후,
	   앞으로 표준 입력(키보드) 대신 input.txt 파일로부터 읽어오겠다는 의미의 코드입니다.
	   //여러분이 작성한 코드를 테스트 할 때, 편의를 위해서 input.txt에 입력을 저장한 후,
	   freopen 함수를 이용하면 이후 cin 을 수행할 때 표준 입력 대신 파일로부터 입력을 받아올 수 있습니다.
	   따라서 테스트를 수행할 때에는 아래 주석을 지우고 이 함수를 사용하셔도 좋습니다.
	   freopen 함수를 사용하기 위해서는 #include <cstdio>, 혹은 #include <stdio.h> 가 필요합니다.
	   단, 채점을 위해 코드를 제출하실 때에는 반드시 freopen 함수를 지우거나 주석 처리 하셔야 합니다.
	*/
	freopen("input.txt", "r", stdin);
	//cin >> T;
	/*
	   여러 개의 테스트 케이스가 주어지므로, 각각을 처리합니다.
	*/
	for (test_case = 1; test_case <= 10; ++test_case)
	{
		memset(arr, 0, sizeof(arr));		
		dis = 999999;
		cin >> T;
		for (int i = 0; i < 100; i++) {
			for (int j = 0; j < 100; j++) {
				cin >> arr[j][i];
			}
		}

		for (int i = 0; i < 100; i++) {
			memset(visited, 0, sizeof(visited));
			if (arr[i][99]) findDeparture(i, 99);
		}

		cout << '#' << T << ' ' << departure << endl;
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}
