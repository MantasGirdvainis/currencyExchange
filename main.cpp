#include <iostream>
#include <iomanip>

using namespace std;

void meniu() {
    cout << endl;
    cout << "=== Valiutos keitykla ===" << endl;
    cout << "Pasirinkite norima atlikti veiksma:" << endl;
    cout << "1. Valiutos kurso palyginimas su euru" << endl;
    cout << "2. Valiutos pirkimas (EUR -> valiuta)" << endl;
    cout << "3. Valiutos pardavimas (pasirinkta valiuta -> EUR)" << endl;
    cout << "4. Iseiti" << endl;
    cout << "Veiksmas: ";
}

int main() {
    // Valiutu kursai kiek gaunama uz 1Eur
    const double GBP_Bendras = 0.8729;
    const double GBP_Pirkti = 0.8600;
    const double GBP_Parduoti = 0.9220;

    const double USD_Bendras = 1.1793;
    const double USD_Pirkti = 1.1460;
    const double USD_Parduoti = 1.2340;

    const double INR_Bendras = 104.6918;
    const double INR_Pirkti = 101.3862;
    const double INR_Parduoti = 107.8546;

    int veiksmas;

    //Rodyti 2 skaicius po kablelio
    cout << fixed << setprecision(2);

    do {
        meniu();
        cin >> veiksmas;

        if (veiksmas == 4) {
            cout << "Programa uzdaryta" << endl;
        } else if (veiksmas < 1 || veiksmas > 4) {
            cout << "Tokio veiksmo nera. Pasirinkite nuo 1 iki 4." << endl;
        }
    } while (veiksmas != 4);

    return 0;
}
