#include <iostream>
#include <vector>
// 2:30加借鉴DFS才解决
static int answer = 0;
static int outTime = 0;
void out(std::vector<int>& board, int n);
int isOccupied(int row, int col, std::vector<int>& board, int n) {
	if (board[row] == col) {
		return true;
	}
	// 行列判定
	for (int i = 1; i < n; i++) {
		if (board[i] == col || board[row] != 0) {
			return true;
		}
	}
	// 左上右下斜线判定
	for (int i = 1; i < n; i++) {
		for (int j = 1; j < n; j++) {
			if ((i + j) == row + col || (i - j) == row - col) {
				if (board[i] == j) {
					return true;
				}
			}
		}
	}
	return false;
}


int Place(int row, int col, std::vector<int>& board, int n,int& count) {
	board[row] = col;
	count++;
	return 1;
}

int disPlace(int row, int col, std::vector<int>& board, int n,int& count) {
	board[row] = 0;
	count--;
	return 1;
}

void search(int row, int col, std::vector<int>& board, int n, int& count) {
	if (row == n) {
		if (count == n - 1) {
			out(board, n);
		}
	}
	else {
		for (int i = 1; i < n; i++) {
			// DFS思路重点
			if (!isOccupied(row, i, board, n)) {
				Place(row, i, board, n, count);
				search(row + 1, i, board, n, count);
				disPlace(row, i, board, n, count);
			}
		}
	}
}


void out(std::vector<int>& board, int n ) {
	answer++;
	outTime++;
	if (outTime <= 3) {
		for (int i = 1; i < n; i++) {
			if (i != n - 1) {
				std::cout << board[i] << " ";
			}
			else {
				std::cout << board[i] << std::endl;
			}
		}
	}
}

int main() {
	int n = 0;
	std::cin >> n;
	n += 1;
	int count = 0;
	std::vector<int> board(n, 0);
	search(1, 2, board, n, count);
	std::cout << answer << std::endl;
}
