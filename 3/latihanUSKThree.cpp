#include <iostream>
#include <conio.h>
using namespace std;

struct Data {
    int code, amount, price;
    string name;
};
Data limit[100];

int a, b, c, bayar;

void inputData()
{
    cout<<"Masukan Jumlah Beli : "; cin>>c;
    cout<<endl;

    for( b = 0; b < c; b++ ) {
        cout<<"Data Ke-"<<b + 1<<endl;
        cout<<"Kode Barang \t:"; cin>>limit[a].code;
        cout<<"Nama Barang \t:"; cin>>limit[a].name;
        cout<<"Jumlah Barang \t:"; cin>>limit[a].amount;
        cout<<"Harga Barang \t:"; cin>>limit[a].price; cout<<endl;
        a++;
    }

    cout<<"Bayar \t:"; cin>>bayar; cout<<endl;

    int total = 0;

    cout<<"=============================================== Struk Pembelian ===============================================\n\n";
    cout<<"||\tNo\t||\tKode\t||\t\tNama\t\t||\tJumlah\t||\tHarga\t||\tTotal\t||\n";

    for( int i = 0; i < a; i++ ) {
        cout<<"||"<<i + a<<"\t\t";
        cout<<"||"<<limit[i].code<<"\t\t";
        cout<<"||"<<limit[i].name<<"\t\t\t\t";
        cout<<"||"<<limit[i].amount<<"\t\t";
        cout<<"||"<<limit[i].price<<"\t\t";
        cout<<"||"<<limit[i].amount * limit[i].price<<"\t\t||\n";
        total = total + (limit[i].amount * limit[i].price);
    }

    cout<<endl;
    cout<<"-----------------------------------------------------------------------------------------------------------------\n";
    cout<<"\t\t\t\t\t\t\t\t\t\t Total Bayar \t: "<<total<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t\t Jumlah Bayar \t: "<<bayar<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t\t Kembali \t: "<<bayar - total<<endl;

    getch();
}

void showData()
{
    int total = 0;

    cout<<"======================================== Data Barang ========================================\n\n";
    cout<<"||\tNo\t||\tKode\t||\t\tNama\t\t||\tJumlah\t||\tHarga\t||\tTotal\t||\n";

    for( int i = 0; i < a; i++ ) {
        cout<<"||"<<i + a<<"\t\t";
        cout<<"||"<<limit[i].code<<"\t\t";
        cout<<"||"<<limit[i].name<<"\t\t\t\t";
        cout<<"||"<<limit[i].amount<<"\t\t";
        cout<<"||"<<limit[i].price<<"\t\t";
        cout<<"||"<<limit[i].amount * limit[i].price<<"\t\t||\n";
        total = total + (limit[i].amount * limit[i].price);
    }

    cout<<endl;
    cout<<"-------------------------------------------------------------------------------------------------\n";
    cout<<"\t\t\t\t\t\t\t\t\t\t Total Bayar \t: "<<total<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t\t Jumlah Bayar \t: "<<bayar<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t\t Kembali \t: "<<bayar - total<<endl;

    getch();
}

void deleteData()
{
    int h;
    cout<<"Masukan Baris Data Yang Akan Di Hapus : "; cin>>h;
    a--;

    for( int i = h - 1; i < a; i++) {
        limit[i] = limit[i+1];
    }

    cout<<"Data Dengan Baris Ke "<<h<<"Terhapus";
    getch();
}

void editData()
{
    int e;
    cout<<"Masukan Kode Baris Barang Yang Akan Di Edit : ";
    cin>>e;
    cout<<"Kode Barang \t:"; cin>>limit[e-1].code;
    cout<<"Nama Barang \t:"; cin>>limit[e-1].name;
    cout<<"Jumlah Barang \t:"; cin>>limit[e-1].amount;
    cout<<"Harga Barang \t:"; cin>>limit[e-1].price;

    showData();
}

int main()
{
    int choose;
    char confirm;

    cout<<"========================= Kasir Bend =========================\n\n";
    //cout<<"Tekan Enter Untuk Melanjutkan\n\n";
    inputData();
    //getch();

    /*start :
        cout<<"\n**************************** Pilihan Menu ****************************";
        cout<<"\n1. Masukan data";
        cout<<"\n2. Lihat data";
        cout<<"\n3. Hapus data";
        cout<<"\n4. Edit data";
        cout<<"\n5. Keluar";
        cout<<"\n\nMasukan Pilihan : ";
        cin>>choose;

        switch(choose) {
            case 1:
                inputData();
                goto start;
                break;
            case 2:
                showData();
                goto start;
                break;
            case 3:
                deleteData();
                goto start;
                break;
            case 4:
                editData();
                goto start;
                break;
            case 5:
                cout<<"Apakah Anda Yakin Ingin Keluar.. ??\n\n";
                cout<<"\t\t\t\t\t [Y]\t\t[N]"<<endl;
                cout<<"\t\t\t\t\t\t"; cin>>confirm;

                if( confirm == 'y' || confirm == 'Y' ) {
                    cout<<"============== Program Selesai ==============";
                    return 0;
                } else {
                    goto start;
                }
                break;
            default :
                goto start;
        }*/
}
