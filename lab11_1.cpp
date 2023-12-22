#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int grade,stat;

void randomgrade(){
    grade = rand()%9;
}

void print(){
    switch(stat){
        case 0:
            cout << "A";
        break;    
        case 1:
            cout << "B+";
        break;  
        case 2:
            cout << "B";
        break;    
        case 3:
            cout << "C+";
        break;  
        case 4:
            cout << "C";
        break;    
        case 5:
            cout << "D+";
        break;  
        case 6:
            cout << "D";
        break;  
        case 7:
            cout << "F";
        break;    
        case 8:
            cout << "W";
        break;                
    }
}

int main(){
    srand(time(0));

    cout << "Press Enter 3 times to reveal your future.";
    cin.get();
    cin.get();
    cin.get();
    cout <<  "You will get " ;
    randomgrade();
    stat = grade;
    print();
    cout <<  " in this 261102.";
}