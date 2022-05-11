// Import neccessary libraries //
#include <iostream>
#include<vector>
#include<string>
#include<map>

using namespace std;

// Create matrix. Create Map to store number of ships. Create other variables //
const int N = 10, M = 10;
unsigned int SHIPSleft1 = 10, SHIPSleft2 = 10;
string NAME1, NAME2, WINNER;
vector< vector<char> > matrix1, matrix2, hiddenMatrix1, hiddenMatrix2;
map<int, int> ships;

// Cells that will be stored in matrix //
const char SEA = '~', BOX = '#', HIT = '1', MISS = 'X';

// Function to fill map //
void fillShips(map<int, int> &mp)
{
    /* To know many ships of size x would be */
    mp[4] = 1;
    mp[3] = 2;
    mp[2] = 3;
    mp[1] = 4;
}

// Function to fill the matrix with empty(SEA) symbols //
void fillMatrix(vector< vector<char> > &matrix)
{
    matrix = vector< vector<char> > (M, vector<char> (N, SEA));
}

// Function to print the matrix //
void PrintMatrix(vector< vector<char> > matrix)
{
    for(size_t i = 0; i < N; i++)
    {
        for(size_t j = 0; j < M; j++)
        {
            /* Replace the symbols with emojis */
            switch (matrix[i][j])
            {
            case SEA:
                cout << "🟦";
                break;
            
            case BOX:
                cout << "🚢 ";
                break;
            
            case HIT:
                cout << "✅ ";
                break;
            
            case MISS:
                cout << "❌ ";
                break;
            }
            cout << ' ';
        }
        cout << endl;
    }
}

// Function to locate 4, 3, 2, 1 sized ships on the playground //
void LocateShips(vector< vector<char> > &matrix, string NAME)
{
    printf("\nDear %s, you should write the COORDINATES of the ships where you want to locate them!\n", NAME.c_str());
    PrintMatrix(matrix);
    const int n = ships.size();
    for(size_t i = 0; i < n; i++)
    {
        for(size_t j = 0; j < ships[n - i] ; j++)
        {
            // Ask for coordinates //
            int x, y;
            cout << "The SHIP that goanna be located: " << string(n - i, '#');
            printf("\nWrite the coor of the topleft of %d sized ship (%d left): ", n - i, ships[n - i] - j);

            // Check if the coordinates are valid // 
            bool valid = false;
            while (!valid)
            {
                cin >> y >> x;
                if(x >= 0 && x <= N - (n - i) && y >= 0 && y < M && matrix[x][y] == SEA)
                    valid = true;
                else
                    printf("The coors are incorrect. They should be in range [%d; %d] and [%d; %d] and not on the ships: ", 0, M - 1, 0, N - (n - i));
            }

            // Apply changes (Locate the ships on the matrix) //
            for(size_t k = x; k < x + (n - i); k++)
                matrix[y][k] = BOX;

            PrintMatrix(matrix);
        }
    }
}

// Function to make shoots //
unsigned int Attack(vector< vector<char> > &hMatrix, vector< vector<char> > enemyMatrix, string name)
{
    printf("\nDear %s, now, YOU should write the COORDINATES where you want to SHOOT!\n", name.c_str());
    PrintMatrix(hMatrix);
    bool turn = true;
    unsigned int destroyed = 0;
    while (turn)
    {
        // Ask for coordinates //
        int x, y;
        printf("Write the coor where you want to attack: ");

        // Check if the coordinates are valid // 
        bool valid = false;
        while (!valid)
        {
            cin >> y >> x;
            if(x >= 0 && x <= N && y >= 0 && y < M && hMatrix[y][x] != MISS)
                valid = true;
            else
                printf("The coors are OUT OF RANGE. They should be in range [%d; %d] and [%d; %d] and NOT on MISSED Cells: ", 0, M - 1, 0, N - 1);
        }

        // Destroy ship or mark as miss
        if(enemyMatrix[y][x] == BOX)
        {
            hMatrix[y][x] = HIT;
            printf("\nHIT!\n");
            destroyed++;

            /* Stop shooting if all ships are destroyed */
            if ((enemyMatrix == matrix1 && destroyed >= SHIPSleft1) ||
                (enemyMatrix == matrix2 && destroyed >= SHIPSleft2))
            {
                PrintMatrix(hMatrix);
                break;
            }
        }
        else{
            /* Give turn to next player if missed */
            hMatrix[y][x] = MISS;
            printf("\nMISS!\n");
            turn = false;
        }
        
        PrintMatrix(hMatrix);
    }
    return destroyed;
}

int main()
{
    // Call Functions to Initialize playground //
    fillShips(ships);
    fillMatrix(matrix1);
    fillMatrix(matrix2);
    fillMatrix(hiddenMatrix1);
    fillMatrix(hiddenMatrix2);

    // Take input of the 1st Player //
    printf("\n1st Player, please, Enter your name: ");
    cin >> NAME1;
    LocateShips(matrix1, NAME1);
    cout << string(60, '\n'); /* Clear Terminal by printing 60 new lines */

    // Take input of the 1st Player //
    printf("2st Player, please, Enter your name: ");
    cin >> NAME2;
    LocateShips(matrix2, NAME2);
    cout << string(60, '\n'); /* Clear Terminal by printing 60 new lines */


    /* Main Loop */
    unsigned int destroyed;
    while (true)
    {
        /* Destroy 2nd Player ships and make 1st Player winner if no ships left */
        destroyed = Attack(hiddenMatrix1, matrix2, NAME1);
        SHIPSleft2 -= destroyed;
        if (!SHIPSleft2){
            WINNER = NAME1;
            break;
        }

        /* Destroy 1nd Player ships and make 2nd Player winner if no ships left */
        destroyed = Attack(hiddenMatrix2, matrix1, NAME2);
        SHIPSleft1 -= destroyed;
        if(!SHIPSleft1){
            WINNER = NAME2;
            break;
        }
    }

    /* Display the Winner's Name! */
    printf("\nCONGRADULATIONS, %s! You WON!\n", WINNER.c_str());
}