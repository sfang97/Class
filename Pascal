#include <iostream>
using namespace std;
#include <vector>

class Pascal {
        public:
        void printFull();
        void get(int, int);
        void print(int);
};
void Pascal::get(int i, int j) {
//gets the value at i,j given in main
        int coeff = 1;
        vector<int> row;
        for (int k = 0; k <= i; k++) {
                coeff = coeff * (i - k) / (k + 1);
                row.push_back(coeff);
        }
        cout << row[j] << endl;
}
void Pascal::printFull() {
//prints 8 rows of pascals triangle
        int coeff = 1;
        int rows = 8;
        for(int i = 0; i < rows; i++) {
                for(int space = 1; space <= rows-i; space++)
                cout <<"  ";
                for(int j = 0; j <= i; j++) {
                        if (j == 0 || i == 0)
                                coeff = 1;
                        else
                                coeff = coeff*(i-j+1)/j;
                                cout << coeff << "   ";
                }
        cout << endl;
        }

}
void Pascal::print(int m) {
        int coef = 1;
        int rows = 8;
        for(int i = 0; i < rows; i++) {
                for(int space = 1; space <= rows-i; space++)
                cout << "  ";
                for(int j = 0; j<= i; j++) {
                        if(j == 0 || i == 0)
                                coef = 1;
                        else
                        coef = coef*(i-j+1)/j;
                        if (coef%m != 0)
                                cout <<  " * ";
                        else
                                cout << "   ";
                }
        cout << endl;
        }
}
int main() {
        Pascal pasc;
        pasc.printFull();
        pasc.get(3, 1);
        pasc.print(2);
}


