#include <iostream>

using std::cout;
using std::endl;
class stool{
private:
    int n_legs, n_seats;
public:
    stool(int n_legs2, int n_seats2){
        n_legs = n_legs2;
        n_seats = n_seats2;
    }
    void print() {
        cout << n_legs << ',' << n_seats<< endl;
    }
    void removeLeg(){
        n_legs--;
    }
};

class table{
private:
    int n_legs, length, width;
public:
    table(int n_legs2, int length2, int width2){
        n_legs = n_legs2;
        length = length2;
        width = width2;
    }
    void print(){
        cout << n_legs << ',' << length << ',' << width << endl;
    }
    void addLegs(){
        n_legs += 4;
    }
};

class furniture{
private:
    stool stool1, stool2, stool3, stool4;
    table table1;
public:
    furniture(int legs):
    stool1(legs, 1),
    stool2(legs, 1),
    stool3(legs, 1),
    stool4(legs, 1),
    table1(legs, 2, 1)
    {}
    void print(){
        stool1.print();
        stool2.print();
        stool3.print();
        stool4.print();
        table1.print();
    }
    void makeMoreHipster(){
        stool1.removeLeg();
        stool2.removeLeg();
        stool3.removeLeg();
        stool4.removeLeg();
        table1.addLegs();
    }
};

int main() {
    furniture kamer(4);
    kamer.print();
    kamer.makeMoreHipster();
    kamer.print();

    return 0;
}
