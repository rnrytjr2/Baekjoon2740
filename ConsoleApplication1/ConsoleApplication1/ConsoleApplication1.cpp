// ConsoleApplication1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <string>
#define collection cin.tie(NULL);ios_base::sync_with_stdio(false);
using namespace std;
int A[100][100], B[100][100], answer[100][100];
int main()
{
	int N, M, K;
	cin >> N >> M;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cin >> A[i][j];
		}
	}
	cin >> M >> K;
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < K; j++)
		{
			cin >> B[i][j];
		}
	}
	for (int i = 0; i < N; i++)
	{
		string answerstring;
		for (int j = 0; j < K; j++)
		{
			for (int k = 0; k < M; k++)
			{
				answer[i][j] += A[i][k] * B[k][j];
			}
			answerstring += to_string(answer[i][j]);
			if (j + 1 < K)
			{
				answerstring += ' ';
			}
		}
		cout << answerstring << '\n';
	}
}