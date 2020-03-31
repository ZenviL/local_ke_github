#include <iostream>
#include <string>

using namespace std;
//method ada 4 macam
class siswa
{
    public:
        string nama;
        int umur;
        siswa(const string &input_nama,const int &input_umur)
        {
            //pakai namespace kalo mau memasukan data dari luar
            siswa::nama = input_nama;
            siswa::umur = input_umur;
        }
        //method tanpa parameter tanpa return
        void print()
        {
            cout << "nama siswa = " << nama << endl;
            cout << "umur siswa = " << umur << endl;
        }
        //void dengan parameter tanpa return
        void setter_nama(const string &ubah_nama)
        {
            nama = ubah_nama;  
        }
        void setter_umur(int &ubah_umur)
        {
             umur = ubah_umur;
        }
        //method tanpa parameter dengan return
        string getter_nama()
        {
            return nama;
        }
        int getter_umur()
        {
            return umur;
        }
        //method dengan parameter dan dengan return
        int tambahumur(const int &tambah_umur)
        {  
            umur = umur + tambah_umur;
            return siswa::umur+tambah_umur;
        }


};


int main(int argc, char const *argv[])
{
    siswa siswa_1 = siswa("ataf",17);
    siswa_1.print();
    siswa_1.setter_nama("rahmat");
    siswa_1.print();
    siswa_1.tambahumur(1);
    siswa_1.print();
    return 0;
}
