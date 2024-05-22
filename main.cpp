#include <iostream>
#include <random>
#include <time.h>
using namespace std;

class Guess_Num
{
public:
    Guess_Num()
    {
        cout << "**************************************************************************" << endl;
        cout << "Guess a Number Between (1-100)\n";
        srand(time(0));
        int random = rand() % 100;
        int num;
                do
                {
                    cin >> num;
                    if (num < random)
                    {
                        cout << "Guess Larger Number than " << num << endl;
                    }
                    else if (num > random)
                    {
                        cout << "Guess Smaller Number than " << num << endl;
                    }
                    else if (num == random)
                    {
                        cout << endl
                             << "**************************************************************************" << endl;
                        cout << "Congrutulations !!!! You Guess the Right Number" << endl;
                        cout << endl
                             << "**************************************************************************" << endl;
                        break;
                    }
                } while (1);
            
    }
};

int main()
{
    Guess_Num();
}