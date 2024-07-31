#include <iostream>
using namespace std;
void sort(int Grades[], int size);

int main()
{
    const int Number =10;
    int Grades[Number] ;
    int size = sizeof(Grades)/sizeof(Grades[0]);
    cout<<"What are the grades?";
    for (int i = 0; i < Number; ++i) {
        cin >> Grades[i];
        if (Grades[i] < 0 || Grades[i] > 100) {
            cout << " Please enter a number between 0-100\n";
            cin >> Grades[i];
        }
    }
        sort(Grades, size);
cout<<"The grades are \n";
    for(int element : Grades){
       cout << element << " ";
    }

    return 0;
}
void sort(int Grades[], int size){
    int temp;
    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - i - 1; j++){
            if(Grades[j] > Grades[j + 1]){
                temp = Grades[j];
                Grades[j] = Grades[j + 1];
                Grades[j + 1] = temp;
            }
        }
    }
}