#include <iostream>
using namespace std;
class Lobster {
    private:
        int weight, taste;
        string name;
    public:
        static Lobster lobsterTank[3]; 
        static int food;
        Lobster(Lobster[]);
        ~Lobster();
        void feed(int);
        void describeLobster();
        string getName();
};