int main() {
        int N;
        cout << "Enter a number: " << endl;
        cin >> N;
        int i;
        int j;
        int k = 19;
        int m;
        int n;
        bool found = false;

        for (i = 0; i < 10; i++) {
                for (j = 0; j < 10; j++) {
                        if ((i*j) > N) {
                                if (found == false) {
                                        cout << "First pair: " << i << ", " << j << endl;
                                        found = true;
                                }
                                if (found == true) {
                                        if ((i+j) < k) {
                                                k = i+j;
                                                m = i;
                                                n = j;
                                        }
                                }
                        }
                }
        }
        if (found == false) {
                cout << "Can't make " << N << " with i,j < 10." << endl;
                return 0;
        }
        cout << "Lowest sum: " << m << ", " << n << endl;
}
