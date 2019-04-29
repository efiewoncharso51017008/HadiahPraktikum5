#include <iostream.h>
#include <conio.h>

void main () {
    int pendapatan,komisi,total,jasa;
    clrscr();
    cout<<"          INPUT KOMISI KEPADA SALESMAN          \n";
    cout<<"-----------------------------------------------------"<<endl;
    cout<<"Penjual selesman : "; cin>>pendapatan;
    cout<<"======================================================"<<endl;
    if (pendapatan>=0&&pendapatan<=2000000){
       jasa  =  500000;
       komisi = (0.1*pendapatan);
       total = komisi+jasa;
       }
    else if (pendapatan<=2000000){
       jasa  =  500000;
       komisi = (0.15*pendapatan);
       total = komisi+jasa;
       }
     else if (pendapatan<=5000000){
       jasa  =  100000;
       komisi = (0.2*pendapatan);
       total = komisi+jasa;
       }
     else {
       cout<<"Tidak ada kode yang sesuai";   }
cout<<"Uang jasa   : "<<jasa<<endl;
cout<<"komisi      : "<<jasa<<endl;
cout<<"total       : "<<jasa<<endl;
getch (); }
