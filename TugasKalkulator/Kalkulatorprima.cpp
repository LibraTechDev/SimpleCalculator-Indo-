#include <iostream>
#include <math.h>
using namespace std;
//Fungsi penjumlahan
void tambah(float bil1, float bil2){
  cout << "Hasilnya adalah " << bil1 << " + " << bil2 << " = " << (bil1 + bil2) << "\n" << endl;
  cout << "===========================================================\n" << endl;
}

//Fungsi perkalian
void kali(float bil1, float bil2){
  cout << "Hasilnya adalah " << bil1 << " x " << bil2 << " = " << (bil1 * bil2) << "\n" << endl;
  cout << "===========================================================\n" << endl;
}

//Fungsi pengurangan
void kurang(float bil1, float bil2){
  cout << "Hasilnya adalah " << bil1 << " - " << bil2 << " = " << (bil1 - bil2) << "\n" << endl;
  cout << "===========================================================\n" << endl;
}

//Fungsi pembagian
void bagi(float bil1, float bil2){
  cout << "Hasilnya adalah " << bil1 << " / " << bil2 << " = " << (bil1 / bil2) << "\n" << endl;
  cout << "===========================================================\n" << endl;
}

//Fungai modulus
void mod (int bil1, int bil2) {
  cout << "Hasilnya adalah " << bil1 << " mod " << bil2 << " = " << (bil1 % bil2) << "\n" << endl;
  cout << "===========================================================\n" << endl;
}

//fungsi pangkat
void pangkat (int bil1, int bil2) {
  cout << "Hasilnya adalah " <<  bil1 << " ^ " << bil2 << " = " << (pow(bil1,bil2)) << "\n" << endl;
  cout << "===========================================================\n" << endl;
}


//Fungsi void untuk menjalankan operator
void kalkulator(string oprt, float bil1, float bil2){
  if(oprt == "A"){
    tambah(bil1, bil2);
  }else if(oprt == "B"){
    kurang(bil1, bil2);
  }else if(oprt == "C"){
    kali(bil1, bil2);
  }else if(oprt == "D"){
    bagi(bil1,bil2);
  }else if(oprt == "E"){
    mod (bil1,bil2);
  }else if(oprt == "F"){
    pangkat (bil1,bil2);
  }
}
int main() {
 string pil;
 float bil1, bil2;
  cout << "==============================================================" << endl;
  cout << "||Kalkulator Sederhana                                      ||" << endl;
  cout << "||By : Primavieri Rhesa Ardana                              ||" << endl;
  cout << "||NIM : A11.2022.14557                                      ||" << endl;
  cout << "==============================================================\n" << endl;

 //Display menu kalkulator
 while(true){
  cout << "Pilihan Operasi Aritmatika" << endl;
  cout << "A. Penjumlahan " << endl;
  cout << "B. Pengurangan " << endl;
  cout << "C. Perkalian   " << endl;
  cout << "D. Pembagian   " << endl;
  cout << "E. Modulus     " << endl;
  cout << "F. Pangkat     " << endl;
  cout << "G. KELUAR      " << endl;
  cout << "Pilih Pilihan Operasi Yang Ingin Digunakan (A/B/C/D/E/F/G): ";
  //Input jenis operator yang tersedia pada menu
  cin >> pil;

  //Validasi operator
    if(pil== "A" || pil == "B" || pil == "C" || pil == "D" || pil == "E" || pil == "F" ){
    cout << "\nSilahkan Masukan nilai pertama: ";
    cin >> bil1;
    cout << "Silahkan Masukan nilai kedua: ";
    cin >> bil2;

    //Fungsi yang menjalankan operasi kalkulator
    kalkulator(pil, bil1, bil2);

  //Keluar dari kalkulator
  }else if(pil == "G"){
    break;
  //Hasil error
  }else{
    cout << "Operasi tidak valid :( " << "\n" << endl;
  }
 }
 //Program selesai
 cout << "Terima kasih telah menggunakan :> " << endl;
}




