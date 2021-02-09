//#include <iostream>
//#include <string.h>
//using namespace std;
//
//int num, ans;
//int buliding[1001];
//
////idx-2, idx-1, idx+1, idx+2 �� ���� ���� �� ���ϱ�
//int findmaxheight(int idx) {
//	int maxVal = buliding[idx - 2];
//	int maxPlace = idx - 2;
//
//	if (maxVal < buliding[idx - 1]) {
//		maxVal = buliding[idx - 1];
//		maxPlace = idx - 1;
//	}
//	if (maxVal < buliding[idx + 1]) {
//		maxVal = buliding[idx + 1];
//		maxPlace = idx + 1;
//	}
//		if (maxVal < buliding[idx + 2]) {
//			maxVal = buliding[idx + 2];
//			maxPlace = idx + 2;
//	}
//
//	return maxPlace;
//}
//
//int main() {
//	for (int i = 1; i <= 10; i++) {
//		cin >> num;
//		memset(buliding, 0, sizeof(int) * 1001);
//		ans = 0;
//
//		for (int j = 0; j < num; j++) {
//			cin >> buliding[j];
//		}
//		for (int j = 2; j < num - 2; j++) {
//			int max_hidx = findmaxheight(j);
//			if (buliding[j] > buliding[max_hidx])
//				ans += buliding[j] - buliding[max_hidx];
//		}
//
//		cout << '#' << i << ' ' << ans << endl;
//	}
//	return 0;
//}


#include<iostream>
#include <string.h>
using namespace std;

int num, ans;
int building[1001];

int findmaxheight(int idx) {
	int maxVal = building[idx - 2];
	int maxPlace = idx - 2;

	if (maxVal < building[idx - 1]) {
		maxVal = building[idx - 1];
		maxPlace = idx - 1;
	}
	if (maxVal < building[idx + 1]) {
		maxVal = building[idx + 1];
		maxPlace = idx + 1;
	}
	if (maxVal < building[idx + 2]) {
		maxVal = building[idx + 2];
		maxPlace = idx + 2;
	}
	return maxPlace;
	//if (building[idx - 2] >= building[idx - 1])
	//{
	//	if (building[idx - 2] >= building[idx + 1])
	//	{
	//		if (building[idx - 2] >= building[idx + 2])
	//			return idx - 2;
	//		else return idx + 2;
	//	}
	//	else
	//	{
	//		if (building[idx + 1] >= building[idx + 2])
	//			return idx + 1;
	//		else return idx + 2;
	//	}
	//}
	//else
	//{
	//	if (building[idx - 1] >= building[idx + 1])
	//	{
	//		if (building[idx - 1] >= building[idx + 2])
	//			return idx - 1;
	//		else return idx + 2;
	//	}
	//	else
	//	{
	//		if (building[idx + 1] >= building[idx + 2])
	//			return idx + 1;
	//		else return idx + 2;
	//	}
	//}

}

int main(int argc, char** argv)
{
	/*
	   ���� ���� �׽�Ʈ ���̽��� �־����Ƿ�, ������ ó���մϴ�.
	*/
	freopen("input.txt", "r", stdin);
	for (int i = 1; i <= 10; i++)
	{
		//int test_case;
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
		cin >> T;
		//for (test_case = 1; test_case <= T; ++test_case) {
		memset(building, 0, sizeof(int) * 1001);
		ans = 0;

		for (int j = 0; j < T; j++) {
			cin >> building[j];
		}
		for (int j = 2; j < T - 2; j++) {
			int max_place = findmaxheight(j);
			if (building[j] > building[max_place])
				ans += building[j] - building[max_place];
		}
		cout << '#' << i << ' ' << ans << endl;

	}

		/////////////////////////////////////////////////////////////////////////////////////////////
		/*
			 �� �κп� �������� �˰��� ������ ���ϴ�.
		 */
		 /////////////////////////////////////////////////////////////////////////////////////////////

	return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
	
}