#include <iostream>
#include <cstdlib>
#include <ctime>
 using namespace std;

int main() {
 
    unsigned seed =time(0);
    srand(seed);
    int n=rand() % 100 + 1;
    int guess;
    int a =0;
    cout<<"Try to guess the number between 1 and 100." << endl;

    do {
        cout<<"Enter your guess: ";
        cin>>guess;

        a++;

        if(guess==n) {
            cout << " You guessed the correct number in " << a << " attempts." << endl;
        } else if(guess<n) {
            cout << "Too low! Try again."<<endl;
        } else {
            cout<< "Too high! Try again."<<endl;
        }

    } while (guess!=n);

    return 0;
}
