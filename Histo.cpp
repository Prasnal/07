#include "Histo.h"
#include <stdio.h>
#include <iostream>
#include <string>
#include <math.h>

void Histo::print() {
    int i=0;
  for(i=0;i<wartownik; i++){
    printf("tab[%d]: %f \n ",i,tab[i]);
  }
}

void Histo::norm() { }
void Histo::add(float liczba) {
  
  int szerokosc=rangeEnd-rangeStart;
  if (liczba<rangeStart)
    tab[0]=liczba;
  if (liczba>rangeStart)
    tab[wartownik]=liczba;
  int kubelek=szerokosc/liczba;
  int index=floor(((liczba-rangeStart)/szerokosc)*kubelek);
  if (index<wartownik-1)
           tab[index]++;
  }

Histo::Histo(const Histo& zmienna ){
 
}
Histo::Histo(std::string napis, int costam, float costam2, float costam3) {
  int j;
  for(j=0; j<wartownik; j++)
    tab[j]=0;
  name=napis;
  nbBins=costam;
  rangeStart=costam2;
  rangeEnd=costam3;
  wartownik=6;
                
  std::cout<<"name: "<< name <<"\n nbBins: "<<nbBins<< "\n range: [ "<< rangeStart <<" ; "<<rangeEnd<<"] \n" ;

}
Histo::~Histo() {
  std::cout<<"destructor \n";
}
Histo::Histo() {
  int j;
  for(j=0; j<wartownik; j++)
    tab[j]=0;
  printf("Histo:: default \n");
}
