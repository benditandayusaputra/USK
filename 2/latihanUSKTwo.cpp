#include <iostream>
#include <conio.h>

using namespace std;

struct Data {
    char no[11], judul[50], pengarang[50], penerbit[50];
};

Data limit[200];

int a, b, c;

void inputData()
{
    cout<<"Masukan Jumlah Data Yang Akan diinput : "; cin>>c;

    for( b = 0; b < c; b++ ) {
        cout<<"Data Ke-"<<b + 1<<endl;
        cout<<"Nomer Buku \t:";
        cin>>limit[a].no;
        cout<<"Judul Buku \t:";
        cin>>limit[a].judul;
        //cin.getline(limit[a].judul, 50);
        cout<<"Pengarang \t:";
        cin>>limit[a].pengarang;
        cout<<"Penerbit \t:";
        cin>>limit[a].penerbit;
        a++;
    }
}

void showData()
{
    cout<<"****************************************** Menampilkan Data ******************************************\n";
    cout<<"******************************************************************************************************\n\n";
    cout<<"||\tNo\t||\t\tJudul Buku\t\t||\t\tPengarang\t\t||\t\tPenerbir\t\t||"<<endl;

    for( int x = 0; x < a; x++ ) {
        cout<<"**************************************************************************\n";
        cout<<limit[x].no<<"\t\t||";
        cout<<limit[x].judul<<"\t\t\t\t||";
        cout<<limit[x].pengarang<<"\t\t\t\t||";
        cout<<limit[x].penerbit<<"\t\t\t\t||";
    }

    getch();
}

void deleteData()
{
    int m, n;

    cout<<"Hapus Data Nomer Ke : "; cin>>m;
    n = m - 1;
    a--;
    for( int i = n; i < a; i++ ) {
        limit[i] = limit[i+1];
    }
    cout<<"\n\n++++++++++++++++++++++ Data Ke-"<<m<<" Terhapus ++++++++++++++++";
    getch();
}

void editData()
{
    int k, l;
    cout<<"Masukan No Data Yang Akan diedit : "; cin >>k;
    l = k-1;
    cout<<"No Buku\t: "; cin>>limit[l].no;
    cout<<"Judul Buku\t: "; cin>>limit[l].judul;
    cout<<"Pengarang\t: "; cin>>limit[l].pengarang;
    cout<<"Penerbit\t: "; cin>>limit[l].penerbit;

    showData();
}

int main()
{
    int choose;
    char confirm;

    cout<<"****************************************** Program Data Buku Perpustakaan ******************************************\n";
    cout<<"********************************************************************************************************************\n\n";
    cout<<"Silahkan Tekan Enter Untuk Melanjutkan";

    getch();

    start :
        cout<<"\n\n**************************** Pilihan Menu ****************************";
        cout<<"\n1. Masukan data";
        cout<<"\n2. Hapus data";
        cout<<"\n3. Lihat data";
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
                deleteData();
                goto start;
                break;
            case 3:
                showData();
                goto start;
                break;
            case 4:
                editData();
                goto start;
                break;
            case 5:
                cout<<"\n\nApakah Yakin Keluar Dari Program...??\n\n";
                cout<<"\t[Y]\t[N]\n\n";
                cin>>confirm;
                if( confirm == 'y' || confirm == 'Y' ) {
                    cout<<"***************** PROGRAM SELESAI *****************";
                    return 0;
                } else {
                    goto start;
                }
                break;
            default :
                goto start;
                break;
        }
}
