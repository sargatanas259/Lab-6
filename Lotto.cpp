#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>

using namespace std;

void getuserTicket(int userTicket[], int);
void getwinningNumbers(int LottoNumbers[], int);
void results( int userTicket[], int LottoNumbers[], int size);
void playerMenu();
int checkMatches(int userTicket[], int LottoNumbers[], int size);
bool checkDuplicates(int userTicket[],int size , int i );
void sort(int userTicket[], int size);
void sort2(int LottoNumbers[], int size);
int main()
{
    srand((unsigned int)time(NULL));

    const int num = 5;
    int userTicket [num]; // array holds user picked numbers
    int LottoNumbers [num]; // array holds random winning numbers
    int matchingNumbers = 0;

    char choice;

    playerMenu();
    cin >> choice;
    cout << endl;
    if (choice == '1')
    {

        getuserTicket(userTicket, num);
        getwinningNumbers(LottoNumbers, num);
        cout << endl;
        void sort(int userTicket[], int size);
        void sort2(int LottoNumbers[], int size);
        results( userTicket, LottoNumbers, num);

    }
    else if (choice == 'q' || choice == 'Q')
    {
        cout << "You have chosen to quit the program" << endl;
    }
    else if (choice != '1' || choice != 'q' || choice != 'Q')
    {
        cout << "Invalid selection" << endl;
    }

    return 0;
}


void playerMenu()
{
    cout << "1) Play Lotto" << endl
         << "q) Quit Program" << endl;
}

void getuserTicket(int userTicket[], int size)
{
    cout << setw(55) << "Enter 5 lottery numbers between the numbers 1-9 " << endl;

    for (int i = 0; i < size; i++)
    {
        cout << " selection # " << i + 1 << ": ";
        cin >> userTicket[i];
        while (checkDuplicates (userTicket, userTicket[i], i) || userTicket[i] < 1 || userTicket[i] > 9)
        {
            if (userTicket[i] < 1 || userTicket[i] > 9)
            {
                cout << "Enter a number between 1 and 9 ";
                cin >> userTicket[i];
            }
            if (checkDuplicates(userTicket, userTicket[i], i))
            {
                cout << "You have already entered that number, please choose a different number: " << endl;
                cin >> userTicket[i];
                cout << endl;
            }
        }
    }
}

void getwinningNumbers(int LottoNumbers[], int size)
{
    srand(time(0));
    for (int i = 0; i < size; i++)
    {
        LottoNumbers[i] =  (rand() % 9+1);

        while (checkDuplicates(LottoNumbers, LottoNumbers[i], i))
        {
            LottoNumbers[i] = (rand() % 9+1 );
        }
    }
}

void results(int userTicket[], int LottoNumbers[], int size)
{
    int count = checkMatches(userTicket, LottoNumbers, size);
    cout << "" << " LOTTO RESULTS:" << endl<< endl;

    cout << "WINNING TICKET NUMBERS: ";
    for (int i = 0; i < size; i++)
    {
        cout << " " << LottoNumbers[i];
    }
    cout << endl;
    cout << "Player's TICKET: ";
    for (int i = 0; i < size; i++)
    {
        cout << " " << userTicket[i];
    }
    cout << endl<< "RESULTS:" << endl<< endl<< count << endl;

    switch (count)
    {
        case 0:
            cout<< "Not a winner";
            break;
        case 1:
            cout << "1 matched";
            break;
            case 2:
            cout << "2 matched";
            break;
            case 3:
            cout << "3 matched";
            break;
        case 4:
            cout << "4 matched ";
            break;
        case 5:
            cout << "Winner!";
            break;

    }
    cout << endl;
}
int checkMatches(int userTicket[], int LottoNumbers[], int size )
{
    int count = 0,L;

    for (int i = 0; i < size; i++)
    {
        int temp = userTicket[i];

        if (temp == LottoNumbers[L])
        {
            count++;
        }
    }
    return count;
}

void sort(int userTicket[], int size){
    int temp;
    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - i - 1; j++){
            if(userTicket[j] < userTicket[j + 1]){
                temp = userTicket[j];
                userTicket[j] = userTicket[j + 1];
                userTicket[j + 1] = temp;
            }
        }
    }
}
void sort2(int LottoNumbers[], int size){
    int temp;
    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - i - 1; j++){
            if(LottoNumbers[j] < LottoNumbers[j + 1]){
                temp = LottoNumbers[j];
                LottoNumbers[j] = LottoNumbers[j + 1];
                LottoNumbers[j + 1] = temp;
            }
        }
    }
}
bool checkDuplicates(int userTicket[], int ticket, int i)
{
    bool duplicate = false;

    for (int j = 0; j < i; j++)
    {
        if (userTicket[j] == ticket)
        {
            duplicate = true;
        }
    }
    return duplicate;
}