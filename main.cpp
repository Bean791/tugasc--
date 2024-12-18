#include <iostream>
#include <string>

using namespace std;

int main()
{
    string tes;
    string tes3;
    int nyawa = 3;
    char tes2;
    bool berhasil = false;

    cout << "Masukkan katanya: ";
    cin >> tes;
    tes3 = string(tes.length(), '-');

    while (nyawa > 0 && tes3 != tes)
    {

        cout <<tes3;
        cout << endl << "Nyawamu tinggal: " << nyawa;

        cout << endl << "Masukkan Huruf: ";
        cin >> tes2;

        berhasil = false;


        for (int i = 0; i < tes.length(); i++)
        {
            if (tes[i] == tes2)
            {
                tes3[i] = tes2;
                berhasil = true;
            }
        }

        if (!berhasil)
        {
            nyawa--;
        }

    }


    if (nyawa <= 0)
    {
        cout << endl << "Anda matek!!! harusnya ini...." << tes << endl;
    }
    else
    {
        cout << endl << "Anda menang!!! " << endl;
    }

    return 0;
}
