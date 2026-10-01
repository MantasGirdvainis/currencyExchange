#include <iostream>
#include <iomanip>
#include <string>

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

void valiutuMeniu() {
    cout << endl;
    cout << "1 - GBP" << endl;
    cout << "2 - USD" << endl;
    cout << "3 - INR" << endl;
    cout << "Pasirinkite valiuta: ";
}

void palygintiKursa(string valiutosPavadinimas, double bendrasKursas) {
    cout << endl;
    cout << "1 EUR = " << bendrasKursas << " " << valiutosPavadinimas << endl;
    cout << "1 " << valiutosPavadinimas << " = " << 1 / bendrasKursas << " EUR" << endl;
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
        } else {
            int valiuta;
            valiutuMeniu();
            cin >> valiuta;

            string valiutosPavadinimas;
            double bendrasKursas;
            bool teisingaValiuta = true;

            if (valiuta == 1) {
                valiutosPavadinimas = "GBP";
                bendrasKursas = GBP_Bendras;
            } else if (valiuta == 2) {
                valiutosPavadinimas = "USD";
                bendrasKursas = USD_Bendras;
            } else if (valiuta == 3) {
                valiutosPavadinimas = "INR";
                bendrasKursas = INR_Bendras;
            } else {
                teisingaValiuta = false;
            }

            if (!teisingaValiuta) {
                cout << "Tokios valiutos nera. Pasirinkite nuo 1 iki 3." << endl;
            } else {
                switch (veiksmas) {
                    case 1:
                        palygintiKursa(valiutosPavadinimas, bendrasKursas);
                        break;
                }
            }
        }
    } while (veiksmas != 4);

    return 0;
}
