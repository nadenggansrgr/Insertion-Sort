#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

struct mhs
{
    long long int npm;
    float ipk;

};

int main()
{
    mhs data[100];
    int jmlh, angka;
    long long int temp1;
    float temp2;
    cout << "==============================================" << endl;
    cout << "\t\t INSERTION SORT" << endl;
    cout << "==============================================" << endl;

    cout << " Jumlah data mahasiswa : "; cin >> jmlh;

    system ("cls");

    cout << " Masukkan NPM & IPK mahasiswa " << endl;
    cout << "==============================" << endl;
    for (int i=0; i<jmlh; i++) 
    {
        cout << " Data ke-" <<i+1<< endl;
        cout << " NPM Mahasiswa : ";cin >> data[i].npm;
        cout << " IPK Mahasiswa : ";cin >> data[i].ipk;
        cout << endl;
    }

    system ("cls");
    cout << endl;
    cout << "   Data sebelum di sorting " << endl << endl;
    cout << "=============================" << endl;
    cout << "|     NPM     |     IPK     |" << endl;
    cout << "=============================" << endl;

    for (int i=0; i<jmlh; i++)
    {
        cout << "|" << setw (13) << data[i].npm;
        cout << "|" << setw (13) << data[i].ipk <<"|";
        cout << endl;
    }
    cout << "=============================" << endl << endl;

    cout << "-----------------------------" << endl;
    cout << " 1. Sorting by NPM " << endl;
    cout << " 2. Sorting by IPK " << endl;
    cout << "-----------------------------" << endl << endl;


    do
    {
        cout << " Masukkan angka (1/2) : ";cin >> angka;

        switch (angka)
        {
            case 1:
            //insertion sorting by npm
            system ("cls");
            for (int i=1; i<jmlh; i++)
            {
                for (int j=i; j>0; j--)
                {
                    if (data[j].npm<data[j-1].npm)
                    {
                        temp1=data[j].npm;
                        data[j].npm=data[j-1].npm;
                        data[j-1].npm=temp1;

                        temp2=data[j].ipk;
                        data[j].ipk=data[j-1].ipk;
                        data[j-1].ipk=temp2;
                    }else
                    {
                        break;
                    }
                }
                cout << "------------" << endl;
                cout << " Tahap ke-"<<i<< " |" << endl;
                cout << "------------" << endl;
                for (int x=0; x<jmlh; x++)
            {
                cout << " "<< data[x].npm << " ";
            }

            cout << endl;

            }
            cout << endl;
            cout << "Data setelah di sorting (NPM) " << endl << endl;
            cout << "=============================" << endl;
            cout << "|     NPM     |     IPK     |" << endl;
            cout << "=============================" << endl;

            for (int i=0; i<jmlh; i++)
            {
                cout << "|" << setw (13) << data[i].npm;
                cout << "|" << setw (13) << data[i].ipk <<"|";
                cout << endl;
            }
            cout << "=============================" << endl << endl;

            break;


            case 2:
            //insertion sorting by ipk
            system ("cls");

            for (int i=1; i<jmlh; i++)
            {
                for (int j=i; j>0; j--)
                {
                    if (data[j].ipk < data[j-1].ipk)
                    {
                        temp2=data[j].ipk;
                        data[j].ipk=data[j-1].ipk;
                        data[j-1].ipk=temp2;

                        temp1=data[j].npm;
                        data[j].npm=data[j-1].npm;
                        data[j-1].npm=temp1;
                    }else
                    {
                        break;
                    }
                }
                cout << "------------" << endl;
                cout << " Tahap ke-"<<i<< " |" << endl;
                cout << "------------" << endl;
                for (int x=0; x<jmlh; x++)
            {
                cout << " "<< data[x].ipk << " ";
            }

            cout << endl;

            }
            cout << endl;
            cout << "Data setelah di sorting (IPK) " << endl << endl;
            cout << "=============================" << endl;
            cout << "|     NPM     |     IPK     |" << endl;
            cout << "=============================" << endl;

            for (int i=0; i<jmlh; i++)
            {
                cout << "|" << setw (13) << data[i].npm;
                cout << "|" << setw (13) << data[i].ipk <<"|";
                cout << endl;
            }
            cout << "=============================" << endl << endl;

            break;

            default:
            cout << " Masukkan angka kembali!" << endl << endl;
            break;
        }

    }while (angka!=1 && angka!=2);

    return 0;
}
