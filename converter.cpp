#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int menu;

    do
    {
         std::cout << R"(
_________                                   __        __________
\_   ___ \  ____   _______  __ ____________/  |_  ____\______   \
/    \  \/ /  _ \ /    \  \/ // __ \_  __ \   __\/ __ \|       _/
\     \___(  <_> )   |  \   /\  ___/|  | \/|  | \  ___/|    |   \
 \______  /\____/|___|  /\_/  \___  >__|   |__|  \___  >____|_  /
        \/            \/          \/                 \/       \/
        )" << '\n';
         cout << "----------------------------------------------------" << endl;
         cout << "|Thanks To : ByteDevCode - 3n0 - my friend's       |" << endl;
         cout << "|--------------------------------------------------|" << endl;
         cout << "|1. Decimal to Binary                              |" << endl;
         cout << "|2. Binary to Decimal                              |" << endl;
         cout << "|3. Exit                                           |" << endl;
         cout << "----------------------------------------------------" << endl;
         cout << ">>> ";
         cin >> menu;

         cout << endl;

         if (menu == 1)
         {
            int des, biner, n = 128; //--> N adalah panjang bit dari Biner

            cout << "Masukkan Bilangan Desimal : ";
            cin >> des;

            cout << "Hasil Biner : ";
            for (int i = 0; i < 8; i++)
            {
                biner = des / n;
                cout << biner;
                des = des % n;
                n = n / 2;
            }
            cout << endl;
         }
         else if (menu == 2)
         {
             int bin = 0, sisa = 0, hasil = 0;
             cout << "Masukkan Bilangan Biner : ";
             cin >> bin;

             for (int i = 0; i < 8; i++)
             {
                 sisa = bin / (int)(pow(10, i) + 0.1) % 10;
                 hasil += (pow(2, i) + 0.1) * sisa;
             }
             cout << "Hasil Desimal : " << hasil << endl;
         }
         else if (menu == 3)
         {
             cout << "Thanks :) " << endl;
         }
         cout << endl;

    } while (menu != 3);

    return 0;
}
