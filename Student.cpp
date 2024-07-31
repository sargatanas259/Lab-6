#include<iostream>

using namespace std;

int main()
{
	int Scores [25]={76,89,150,135,200,76,12,100,150,28,
				 178,189,167,200,175,150,87,99,129,
				 149,176,200,87,35,157};

    int Score_Ranges[8]={0,0,0,0,0,0,0,0};

    for(int i=0;i<25;i++)
	{
		if(Scores [i] >=0&&Scores [i] <=24)
			Score_Ranges [0]++;
		else if(Scores [i] >=25&& Scores [i]<=49)
            Score_Ranges [1]++;
		else if(Scores [i]>=50&&Scores [i]<=74)
            Score_Ranges [2]++;
		else if(Scores [i]>=75&&Scores [i]<=99)
            Score_Ranges [3]++;
		else if(Scores [i]>=100&&Scores [i]<=124)
            Score_Ranges [4]++;
		else if(Scores [i]>=125&&Scores [i]<=149)
            Score_Ranges [5]++;
		else if(Scores [i]>=150&&Scores [i]<=174)
            Score_Ranges [6]++;
		else if(Scores [i]>=175&&Scores [i]<=200)
            Score_Ranges [7]++;
	}
	cout<<"Number of scores in ranges:"
	    <<"\n0 - 24: \t"<<Score_Ranges [0]
	    <<"\n25 - 49:\t"<<Score_Ranges [1]
	    <<"\n50 - 74:\t"<<Score_Ranges [2]
	    <<"\n75 - 99:\t"<<Score_Ranges [3]
	    <<"\n100 - 124:\t"<<Score_Ranges [4]
	    <<"\n125 - 149:\t"<<Score_Ranges [5]
	    <<"\n150 - 174:\t"<<Score_Ranges [6]
	    <<"\n175 - 200:\t"<<Score_Ranges [7];
    return 0;

}
