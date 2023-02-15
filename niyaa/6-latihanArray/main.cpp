#include <iostream>

using namespace std;

int main()
{
    int i;
    string xiirpl1[] = {"dani","danu","yanto","angga","roni"};
    cout << "yang paling cakep di xiirpl1 adalah" << xiirpl1[1] << endl;
    cout << "diantaranya :";
    for(i=0; i<5; i++) {
    cout << xiirpl1[i] << ", ";
    }
    return 0;
}
