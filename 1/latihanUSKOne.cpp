#include <conio.h>
#include <iostream>
#include <string>
using namespace std;

struct data {
    char nis[6], nama[25], kelas[20];
};
/*struct data {
    char* nis = new char[6];
    char* nama = new char[25];
    char* kelas = new char[20];
};*/
data batas[100];
int a, b, c, d;

void inputData()
{
    cout<<"\n Jumlah Data Yang Akan Di Input : "; cin>>b;

    d = 1;

    for( c = 0; c < b; c++ ) {
        d++;
        cout<<"\nData Ke-"<<d<<endl;
        cout<<"NIS\t: ";
        cin.getline(batas[a].nis, sizeof(batas[a].nis));
        cout<<"Nama\t: ";
        cin>>batas[a].nama;
        cout<<"Kelas\t: ";
        cin>>batas[a].kelas;
        a++;
    }
}

void lihatData()
{
    int i, j;
    cout<<"\n***********************************Menampilkan Data***********************************\n\n";
    cout<<"****************************************************************************************\n";
    cout<<"||\tNo\t||\tNIS\t||\t\tNama\t\t||\tKelas\t||\n";
    j = 0;
    for( i = 0; i < a; i++ ) {
        j = j + 1;
        cout<<"*************************************************************************************\n";
        cout<<"||\t"<<j<<"\t||";
        cout<<batas[i].nis<<"\t\t||";
        cout<<batas[i].nama<<"\t\t\t\t||";
        cout<<batas[i].kelas<<"\t\t||"; cout<<endl;
    }
    cout<<"**************************************************************************************";
    getch();
}

void hapusData()
{

    int x, y;
    cout<<"Hapus Data Ke-"; cin>>x;
    y = x - 1;
    a--;
    for( int i = y; i < a; i++ ) {
        batas[i] = batas[i+1];
    }
    cout<<"\n\n++++++++++++++++++++++ Data Ke-"<<x<<" Terhapus ++++++++++++++++";
    getch();
}

void editData()
{
    int k, l;
    cout<<"Masukan Data Yang Akan diedit : "; cin >>k;
    l = k-1;
    cout<<"NIS\t: "; cin>>batas[l].nis;
    cout<<"Nama\t: "; cin>>batas[l].nama;
    cout<<"Kelas\t: "; cin>>batas[l].kelas;

    lihatData();
}

int main()
{
    int pilih;
    char confirm;
    cout<<"\n*********************************PROGRAM CRUD SEDERHANA*******************************";
    cout<<endl;
    cout<<"\t\t\t\t Assalamu'alaikum\n";
    cout<<endl;
    cout<<"Silahkan Tekan Enter untuk menampilkan Menu Pilihan\n";
    getch();

    awal:
        cout<<"\n**************************** Pilihan Menu ****************************";
        cout<<"\n1. Masukan data";
        cout<<"\n2. Hapus data";
        cout<<"\n3. Lihat data";
        cout<<"\n4. Edit data";
        //sorting
        //seaching
        cout<<"\n5. Keluar";
        cout<<"\n\nMasukan Pilihan : ";
        cin>>pilih;

        /*if( pilih == 1 ) {
            inputData();
            goto awal;
        }

        if( pilih == 2 ) {
            hapusData();
            goto awal;
        }

        if( pilih == 3 ) {
            lihatData();
            goto awal;
        }

        if( pilih == 4 ) {
            editData();
            goto awal;
        }

        if( pilih == 5 ) {
            return 0;
        }*/

        switch(pilih) {
         case 1:
            inputData();
            goto awal;
            break;
         case 2 :
            hapusData();
            goto awal;
            break;
         case 3 :
            lihatData();
            goto awal;
            break;
         case 4 :
            editData();
            goto awal;
            break;
         case 5 :
             cout<<"\n\nApakah Yakin Keluar Dari Program...??\n\n";
             cout<<"\t[Y]\t[N]\n\n";
             cin>>confirm;
             if( confirm == 'Y' || confirm == 'y' ) {
                cout<<"\n\n\n\n*********************************Program Selesai*********************************";
                return 0;
             } else {
                goto awal;
             }
            break;
         default :
            goto awal;
        }
}
