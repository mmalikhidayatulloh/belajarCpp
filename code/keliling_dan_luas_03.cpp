/*
 * =====================================================================================
 *
 *       Filename:  keliling_dan_luas_03.cpp
 *
 *    Description:  input dari keyboard, output ke file
 *
 *        Version:  1.0
 *        Created:  02/26/2022 10:19:20 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Malik (),
 *   Organization:
 *
 * =====================================================================================
 */
#include <iostream>
#include <fstream> //supaya bisa output ke file
using namespace std;

int main() {
  //const mendeklarasikan variable sbg parameter yang nilainya tidak berubah
  //selama eksekusi program
  const int n = 10;
  const double pi = 3.14;
  double r[n];
  double luas, keliling;
  int i;

  for(i=0;i<n;i++) {
    cout << "masukkan r: ";
    cin >> r[i]; //standar input arahnya berlawanan dengan standar output
    cout << "i: " << (i+1) << "r(i)= " << r[i] << '\n';
  }

  /*
   * ngatur output ke file dengan namafilenya AREA.DAT, dimulai setalah
   * statement ini sampai ke penutup
   */
  ofstream myfile ("AREA.DAT");

  /*rumus*/
  for(i=0;i<n;i++) {
    keliling = 2.0*pi*r[i];
    luas     = pi*r[i]*r[i];
    myfile << (i+1) << ") r= " << r[i]
      << " keliling = " << keliling << '\n';
    myfile << (i+1) << ") r= " << r[i]
      << " luas = " << luas << '\n';
  }
  myfile.close();
  //membatasi output sampai di sini.
}
