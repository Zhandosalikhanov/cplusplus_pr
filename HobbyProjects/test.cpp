#include <iostream>
#include<string>
#include<vector>
using namespace std;

// To check the winner by rows colums and diagonals
int Winner(vector< vector <char> > matrix)
{
    // To count x's and o's by diagonals
    int cntDIAG1 = 0, cntDIAG2 = 0;
    int cntDIAG1o = 0, cntDIAG2o = 0;
    // To count NULL row and colums cells
    int nullDIAG1 = 0, nullDIAG2 = 0;

    for (size_t i = 0; i < 3; i++)
    {
        // To count by rows and columns
        int cntROW = 0, cntCOL = 0;
        int cntROWo = 0, cntCOLo = 0;
        // To count NULL row and colums cells
        int nullROW = 0, nullCOL = 0;
        
        for (size_t j = 0; j < 3; j++)
        {
            // Count x's in rows
            if (matrix[i][j] == 'x')
            {
                cntROW++;
                cntROWo++;    
            }
            else if (matrix[i][j] == '_' || matrix[i][j] == 'o')
                nullROW++;

            // Count x's in columns
            if (matrix[j][i] == 'x')
            {
                cntCOL++;
                cntCOLo++;    
            }
            else if (matrix[j][i] == '_' || matrix[j][i] == 'o')
                nullCOL++;

            // Count x's in MAIN diagonal
            if (i == j && matrix[i][j] == 'x')
            {
                cntDIAG1++;
                cntDIAG1o++;    
            }
            else if (i == j && (matrix[i][j] == '_' || matrix[i][j] == 'o'))
                nullDIAG1++;
            
            // Count x's in OPPOSITE diagonal
            if (2 - i == j && matrix[i][j] == 'x')
            {
                cntDIAG2++;
                cntDIAG2o++;    
            }
            else if (2 - i == j && (matrix[i][j] == '_' || matrix[i][j] == 'o'))
                nullDIAG2++;
        }
        // Return which player won if 3 or 0 x's occured in a row or column
        if (cntROW == 3 || cntCOL == 3)
            return 1;
        if ((cntROW == 0 && nullROW != 3) || (cntCOL == 0 && nullCOL != 3) || cntROWo == 3 || cntROWo == 3)
            return 2;

    }
    // Return which player won if 3 or 0 x's occured in a diagonals
    if (cntDIAG1 == 3 || cntDIAG2 == 3)
        return 1;
    if ((cntDIAG1 == 0 && nullDIAG1 != 3) || (cntDIAG2 == 0 && nullDIAG2 != 3) || cntDIAG1o == 3 || cntDIAG2o == 3)
        return 2;

    // Return 0 if no one won yet
    return 0;
}

int main()
{
    char x;
    vector< vector <char> > matrix;
    for (int i = 0; i < 3; i++)
    {
        vector <char> tmp;
        for (int j = 0; j < 3; j++)
        {
            cin >> x;
            tmp.push_back(x);
        }
        matrix.push_back(tmp);
    }
    cout << Winner(matrix);
}