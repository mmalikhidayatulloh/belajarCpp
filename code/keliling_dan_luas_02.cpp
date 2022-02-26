/*
 * =====================================================================================
 *
 *       Filename:  keliling_dan_luas_02.cpp
 *
 *    Description:  perulangan 1-10
 *
 *        Version:  1.0
 *        Created:  02/26/2022 07:56:30 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Malik (),
 *   Organization:
 *
 * =====================================================================================
 */
#include <iostream>
using namespace std;

int main(){
  //variable type
  double pi=3.14;
  double r[10];//panjangnya 10
  double luas, keliling;
  int i;

  r[0]=2.18;
  /*
   * supaya loopnya berjalan maka r[0] harus didefinikan terlebih dahulu
   */
  //loop 1
  for(i=1;i<10;i++){
  /*
   * i=1 dieksekusi sebelum loop dimulai
   * i<10 adalah pernyataan yang dievaluasi setiap kali sebelum loop berulang.
   * Jika benar maka statemen loop akan dieksekusi
   * Jika salah maka kontrol program ditransfer setelah akhir loop
   * i++ artinya i=i+1 dievaluasi setiap kali setelah statemen terakhir loop
   * sudah dieksekusi
   */
    r[i]=r[i-1]+1.0;
  }

  //loop 2 (rumus)
  for(i=0;i<10;i++){
    keliling = 2.0*pi*r[i];
    luas     = pi*r[i]*r[i];
    cout << (i+1) << ") r= " << r[i] << " keliling= "
      << keliling << '\n';
    cout << (i+1) << ") r= " << r[i] << " luas= "
      << luas << '\n';
  }
}
