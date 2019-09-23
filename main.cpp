#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main() {

    int factorial;
    while(cin >> factorial){
        vector<pair<int, int>> prime = { {2, 0}, {3,0}, {5,0},{7, 0}, {11,0}, {13,0},{17, 0}, {19,0}, {23,0}, {29, 0}, {31,0}, {37,0},
                                         {41, 0}, {43,0}, {47,0},{53, 0}, {59,0}, {61,0},{67, 0}, {71,0}, {73,0},{79, 0}, {83,0}, {89,0}, {97,0} };

        if(factorial == 0) break;
        for (int i = 2; i <= factorial; ++i) {
            int b = 0, auxiliar = i;
            while(auxiliar != 1){
                if(auxiliar % prime[b].first == 0){
                    ++prime[b].second;
                    auxiliar /= prime[b].first;
                } else {
                    b++;
                }
            }
        }

        int posicionMax;
        for (int k = 0; k < 25; ++k) {
            if(prime[k].second != 0)
                posicionMax = k;
        }

        cout << setw(3) <<factorial << "! =";
        for (int l = 0; l <= posicionMax; l++) {
            if(l % 15 == 0 and l > 0) cout << endl << "      ";
            cout << setw(3) <<prime[l].second;
        }
        cout << endl;
    }


    return 0;
}