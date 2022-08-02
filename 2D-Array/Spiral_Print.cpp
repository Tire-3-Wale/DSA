#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    vector<int> spiralOrder(vector<vector<int>> &matrix)
    {

        vector<int> ans;
        int row = matrix.size();
        int col = matrix[0].size();

        int count = 0;
        int total = row * col;

        int StartingRow = 0;
        int StartingCol = 0;
        int EndingRow = row - 1;
        int EndingCol = col - 1;

        while (count < total)
        {

            for (int i = StartingCol; count < total && i <= EndingCol; i++)
            {
                ans.push_back(matrix[StartingRow][i]);
                count++;
            }
            StartingRow++;

            for (int i = StartingRow; count < total && i <= EndingRow; i++)
            {
                ans.push_back(matrix[i][EndingCol]);
                count++;
            }
            EndingCol--;

            for (int i = EndingCol; count < total && i >= StartingCol; i--)
            {
                ans.push_back(matrix[EndingRow][i]);
                count++;
            }
            EndingRow--;

            for (int i = EndingRow; count < total && i >= StartingRow; i--)
            {
                ans.push_back(matrix[i][StartingCol]);
                count++;
            }
            StartingCol++;
        }
        return ans;
    }
};
int main()
{

    return 0;
}