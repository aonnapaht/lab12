#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
    cout << "Press Enter 3 times to reveal your future.";
    cin.get();
    cin.get();
    cin.get();
    srand(time(0));
    int rangrade = rand()%9;
    if (rangrade == 0) cout << "You will get A in this 261102.";
    else if (rangrade == 1) cout << "You will get B+ in this 261102.";
    else if (rangrade == 2) cout << "You will get B in this 261102.";
    else if (rangrade == 3) cout << "You will get C+ in this 261102.";
    else if (rangrade == 4) cout << "You will get C in this 261102.";
    else if (rangrade == 5) cout << "You will get D+ in this 261102.";
    else if (rangrade == 6) cout << "You will get D in this 261102.";
    else if (rangrade == 7) cout << "You will get F in this 261102.";
    else cout << "You will get W in this 261102.";
    
    return 0;
}