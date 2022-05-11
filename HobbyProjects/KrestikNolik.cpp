// Importing libraries
#include <iostream>
#include <string>
#include <map>
#include <vector>
using namespace std;

// Declare variables
map < pair <int, int>, int > mp;
bool FirstTry = true;
string player1, player2, WINNER = "";


// To check the validity of the coordinates
void Input(int &x, int &y, char &symbol, char prev)
{
    bool Valid = false;
    cout << "Please write the position(x, y) and simbol('x' or '0'): ";
    cin >> x >> y >> symbol;

    while (!Valid)
    {
        // Check length
        if (x < 1 || x > 3 || y < 1 || y > 3)
        {    
            cout << "The coordinates are too big or too small. Please, try again: ";
            cin >> x >> y >> symbol;
        } 
        // Check if the coordinate is avialible
        else if (mp[make_pair(x, y)])
        {    
            cout << "The coordinates are already occupied. Please, try again: ";
            cin >> x >> y >> symbol;
        }

        // Check the symbol
        else if (symbol != 'x' && symbol != 'o')
        {    
            cout << "The symbol is invalid. You should write 'o' or 'x': ";
            cin >> x >> y >> symbol;
        }

        // Check if the symbol satistifies the turn
        else if (((prev == 'x' && symbol == 'x') || (prev == 'o' && symbol == 'o')) && symbol != '_')
        {    
            cout << "The symbol is the same as previous turn. The previous was: " << prev <<  ". Please, try again: ";
            cin >> x >> y >> symbol;
        }else{
            Valid = true;
        }

    }
}

// Draw the grid
void PrintMatrix(vector< vector <char> > matrix)
{
    cout << '\n';
    vector< vector <char> > :: iterator it = matrix.begin();
    for (int i = 0; i < 3; i++)
    {
        vector<char> :: iterator it0 = (*it).begin();
        for (int j = 0; j < 3; j++)
        {
            cout << *it0 << " ";
            it0++;
        }
        it++;
        cout << endl;
    }
}

// To check the winner by rows colums and diagonals
int Winner(vector< vector <char> > matrix)
{
    // To count x's by diagonals
    int cntDIAG1 = 0, cntDIAG2 = 0;
    // To count NULL row and colums cells
    int nullDIAG1 = 0, nullDIAG2 = 0;

    for (size_t i = 0; i < 3; i++)
    {
        // To count by rows and columns
        int cntROW = 0, cntCOL = 0;
        // To count NULL row and colums cells
        int nullROW = 0, nullCOL = 0;
        
        for (size_t j = 0; j < 3; j++)
        {
            // Count x's in rows
            if      (matrix[i][j] == 'x')       cntROW++;
            else if (matrix[i][j] == '_')       nullROW++;

            // Count x's in columns
            if      (matrix[j][i] == 'x')       cntCOL++;
            else if (matrix[j][i] == '_')       nullCOL++;

            // Count x's in MAIN diagonal
            if (i == j){
                if      (matrix[i][j] == 'x')   cntDIAG1++;
                else if (matrix[i][j] == '_')   nullDIAG1++;
            }
            
            // Count x's in OPPOSITE diagonal
            if (2 - i == j){
                if      (matrix[i][j] == 'x')   cntDIAG2++;
                else if (matrix[i][j] == '_')   nullDIAG2++;
            }
        }
        // Return which player won if 3 or 0 x's occured in a row or column
        if (cntROW == 3 || cntCOL == 3)
            return 1;
        if ((cntROW == 0 && nullROW != 3) || (cntCOL == 0 && nullCOL != 3))
            return 2;

    }
    // Return which player won if 3 or 0 x's occured in a diagonals
    if (cntDIAG1 == 3 || cntDIAG2 == 3)
        return 1;
    if ((cntDIAG1 == 0 && nullDIAG1 != 3) || (cntDIAG2 == 0 && nullDIAG2 != 3))
        return 2;

    // Return 0 if no one won yet
    return 0;
}
// Main function
int main()
{
    // Positions of simbols 'x' and '0' and simbol 'x' or '0'
    int x, y;
    char symbol = 'o';

    // Player names
    cout << "First player name: ";
    cin >> player1;
    cout << "Second player name: ";
    cin >> player2;

    // Create and print initial matrix with '_' symbols
    vector< vector <char> > matrix;
    for (int i = 0; i < 3; i++)
    {
        vector <char> tmp;
        for (int j = 0; j < 3; j++)
        {
            tmp.push_back('_');
        }
        matrix.push_back(tmp);
    }
    PrintMatrix(matrix);

    // Game process
    bool MyTurn = false;
    bool going = true;

    while(going){
        // Save the copy and next turn
        char prev = symbol;
        MyTurn = !MyTurn;

        // Display what turn it is
        string cur;
        if (MyTurn) cur = player1; else cur = player2;
        cout << "\nIt is your turn, " << cur << "!\n";
        

        // Take input and write down
        Input(x, y, symbol, prev);
        mp[make_pair(x, y)]++;
        (matrix[x - 1])[y - 1] = symbol;

        // Print the matrix
        PrintMatrix(matrix);
        
        // Check if someone have won
        if (Winner(matrix) == 1){
            WINNER = player1;
            going = false;
        }
        else if(Winner(matrix) == 2){
            WINNER = player2;
            going = false;
        }

    }
    // Display the WINNER
    cout << "Congrats, " << WINNER << "! You WON!";

    return 0;
}