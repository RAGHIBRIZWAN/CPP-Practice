#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<char>> board = {{'.', '.', '.', '.', '5', '.', '.', '1', '.'},
                                   {'.', '4', '.', '3', '.', '.', '.', '.', '.'},
                                   {'.', '.', '.', '.', '.', '3', '.', '.', '1'},
                                   {'8', '.', '.', '.', '.', '.', '.', '2', '.'},
                                   {'.', '.', '2', '.', '7', '.', '.', '.', '.'},
                                   {'.', '1', '5', '.', '.', '.', '.', '.', '.'},
                                   {'.', '.', '.', '.', '.', '2', '.', '.', '.'},
                                   {'.', '2', '.', '9', '.', '.', '.', '.', '.'},
                                   {'.', '.', '4', '.', '.', '.', '.', '.', '.'}};
    bool check = true;

    for (int i = 0; i < 9 && check; ++i)
    {
        for (int j = 0; j < 9 && check; ++j)
        {
            for (int k = j + 1; k < 9 && check; ++k)
            {
                if (board[i][j] != '.' && board[i][j] == board[i][k])
                {
                    check = false;
                    break;
                }
            }
        }
    }

    for (int j = 0; j < 9 && check; ++j)
    {
        for (int i = 0; i < 9 && check; ++i)
        {
            for (int k = i + 1; k < 9 && check; ++k)
            {
                if (board[i][j] != '.' && board[i][j] == board[k][j])
                {
                    check = false;
                    break;
                }
            }
        }
    }

    if (check)
    {
        cout << "Sudoku Verified";
    }
    else
    {
        cout << "Sorry, Wrong Sudoku";
    }

    return 0;
}
