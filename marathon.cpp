#include <iostream>
using namespace std;
int main()
{
const int row =5, colm=7;
    double sum=0 , average ,Miles;
    string Names[row] = { "Jason","Samantha","Ravi","Sheila","Ankit" };
    double milesDay1,milesDay2,milesDay3,milesDay4,milesDay5,milesDay6,milesDay7,RunnerName;
    int Miles_Ran[row][colm];


    for (int i = 0; i <1; ++i)
    {
        for (int j = 0; j < colm; ++j) {
            cout<<"How many miles did 1st runner this week?";
            cin >> Miles_Ran[row][colm];
        }
    }

    for (int i = 1; i <2 ; ++i)
    {
        for (int j = 0; j <colm; ++j) {
            cout<<"How many miles did 2st runner this week?";
            cin >> Miles_Ran[row][colm];
        }
    }

    for (int i = 2; i <3 ; ++i)
    {
        for (int j = 0; j < colm; ++j) {
            cout<<"How many miles did 3st runner this week?";
            cin >> Miles_Ran[row][colm];
        }
    }

    for (int i = 3; i <4 ; ++i)
    {
        for (int j = 0; j < colm; ++j) {
            cout<<"How many miles did 4st runner this week?";
            cin >> Miles_Ran[row][colm];
        }
    }

    for (int i = 4; i<5 ; ++i)
    {
        for (int j = 0; j < colm; ++j) {
            cout<<"How many miles did 5st runner this week?";
            cin >> Miles_Ran[row][colm];
        }
    }
    for(int i = 0; i < row; ++i)
    {
        for (int j = 0; j < colm; ++j) {

            cout << Miles_Ran[row][colm] << " ";
        }
        cout<<endl;
    }
    /*for (int i = 0; i < Miles_Ran[0][colm]; ++i) {
        sum+=Miles_Ran[0][7];
        cout<<sum<<" is total miles \n ";
        average=sum/7;
        cout<<average<< " is average miles";
    }
    for (int i = 0; i < Miles_Ran[1][7]; ++i) {
        sum+=Miles_Ran[1][7];
        cout<<sum<<" is total miles \n ";
        average=sum/7;
        cout<<average<< " is average miles";
    }

    for (int i = 0; i < Miles_Ran[2][7]; ++i) {
        sum+=Miles_Ran[2][7];
        cout<<sum<<" is total miles \n ";
        average=sum/7;
        cout<<average<< " is average miles";
    }

    for (int i = 0; i < Miles_Ran[3][7]; ++i) {
        sum+=Miles_Ran[3][7];
        cout<<sum<<" is total miles \n ";
        average=sum/7;
        cout<<average<< " is average miles";
    }
    for (int i = 0; i < Miles_Ran[4][7]; ++i) {
        sum+=Miles_Ran[4][7];
        cout<<sum<<" is total miles \n ";
        average=sum/7;
        cout<<average<< " is average miles";
    }*/


    return 0;
    }



