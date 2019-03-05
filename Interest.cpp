#include <iostream>
using namespace std;

int main() {
        float bank1 = 100;
        float bank2 = 200;
        int years = 1;
        while ((bank2*(1.02*years)) > (bank1*(1.05*years))) {
                bank1 = bank1*1.05;
                bank2 = bank2*1.02;
                years += 1;
        }
        bank1 *= 1.05;
        bank2 *= 1.02;
        cout << "Assuming interest gets compounded yearly, Account 1 will have $"  << bank1 << ", which will be more than Account 2, which will have $" << bank2 << ", in " << years << " years." <<  endl;

}
