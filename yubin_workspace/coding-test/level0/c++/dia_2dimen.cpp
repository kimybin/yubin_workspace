#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int> > board, int k) {
    int answer = 0;
    
    for(int i = 0; i < board.size(); i++)
    {
        for(int j = 0; j < board[i].size(); j++)
        {
            if(i + j <= k)
                answer += board[i][j];
        }
    }
    
    return answer;
}

int main()
{
    vector<vector<int> > board;
    int k;
    int board_len;

    cout << "Enter int k: ";
    cin >> k;

    cout << "Enter length of board: ";
    cin >> board_len;
    for(int i = 0; i < board_len; i++) {
        vector<int> query(3);
        cout << "Enter " << i+1 << " queries: ";
        cin >> query[0] >> query[1] >> query[2];
        board.push_back(query);
    }

    int result = solution(board, k);
    cout << "The result is: " << result << endl;

    return 0;
}
