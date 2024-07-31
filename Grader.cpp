#include <iostream>
using namespace std;
int main() {
    const int Size1=10, Student=4,Answer=10;
int correct,num;
    char Students[Student][Answer]={{'D','C','B','A','E','D','C','E','E','A'},
                                    {'D','A','B','D','C','C','D','E','E','A'},
                                    {'D','B','B','E','C','C','D','E','E','A'},
                                    {'D','B','B','A','C','C','D','E','E','A'}};
    char Answers[]={ 'A', 'D' ,'D','B','D','C','C','D','A','E' };
    for (int i = 0; i <Student ; ++i) {
       //cout<<" Student received "<< correct<< " Correct\n";
       num++;

       cout<<"Student "<<num<<" received "<< correct<< " correct"<<" Which is "<< correct*10<<"%\n";
       for (int j = 0; j < Answer; ++j) {
            if (Students[i][j]==Answers[Size1]){
                correct=0;
                correct++;

            break;
            }
        }//cout<<"Student"<<num<<" received"<< correct<< " correct\n";
        // cout<<" Student received "<< correct<< " Correct\n";
        
    }//cout<<" Student received "<< correct<< " Correct\n";







    return 0;
}
