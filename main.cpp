#include <iostream>

using namespace std;

/*
 method buat ngitung keluaran literannya misal nominal/10000 buat pertalite, nominal/12500 pertamax.
 perulangan buat reset mesing, keseluruhan diulang


*/
class penghitungan{
public:
    double pertalet(double uang){
    return uang/10000;
    }
    double pertamak(double uang){
    return uang/13300;
    }
    double pertamakTurbo(double uang){
    return uang/15100;
    }
    double solar(double uang){
    return uang/6800;
    }
};

void cetak(string katakata){
    cout<<"Mau beli " << katakata << " seharga berapa? :\n";
    }
void gagal(string katakata){
    cout<<"Pembelian " << katakata << " tidak bisa dibawah 0!\n"
    }

int main()

    {
    penghitungan hitung;
    int jenis, repeat;

    do{
        double liter, harga, nominal;
        cout<<"Silahkan pilih jenis BBM Anda! \n 1. pertalet \n 2. pertamak \n 3. pertamak turbo \n 4. solar \n";
        cin>>jenis;
        switch(jenis){
            case 1:
                cetak("pertalet");
                cin>>nominal;
                if nominal < 0{
                gagal("pertalet");
                } else {
                liter = hitung.pertalet(nominal);
                cout<<"Anda membeli pertalet sebanyak "<< liter <<" liter \n";
                } break;
            case 2:
                cetak("pertamak");
                cin>>nominal;
                if nominal < 0{
                gagal("pertamak");
                } else {
                liter = hitung.pertamak(nominal);
                cout<<"Anda membeli pertamak sebanyak "<< liter <<" liter \n";
                } break;
            case 3:
                cetak("pertamakTurbo");
                cin>>nominal;
                if nominal < 0{
                gagal("pertamak turbo");
                } else {
                liter = hitung.pertamakTurbo(nominal);
                cout<<"Anda membeli pertamak turbo sebanyak "<< liter <<" liter \n";
                } break;
            case 4:
                cetak("solar");
                cin>>nominal;
                if nominal < 0{
                gagal("solar");
                } else {
                liter = hitung.solar(nominal);
                cout<<"Anda membeli solar sebanyak "<< liter <<" liter \n";
                } break;
            default:
                cout<<"Masukkan jenis dengan benar!";
                break;
            }
    } while (repeat == 0);
    return 0;
}
