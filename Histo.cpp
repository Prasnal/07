#include "Histo.h"
#include <stdio.h>
#include <iostream>
#include <string>
#include <math.h>

void Histo::print() {
  int i=0;
  for(i=0; i<wartownik; i++){
    printf("[%d]: %.1f \n", i, tab[i]);
  }
  printf("\n");
}

void Histo::norm() {
  float sum=0;
  for(int z=0; z<wartownik; z++){
    sum=sum+tab[z];
  }
  for(int z=0; z<wartownik; z++){
    tab[z]=tab[z]/sum;
  }
  
  std::cout << "name:: histogram\nnbins:: 10\nrange:: [0,10]\n";
  
}

void Histo::add(float liczba) {
  int szerokosc = rangeEnd - rangeStart;
  // std::cout << "szer: " << szerokosc << "\n";

  if (liczba < rangeStart) {
    tab[0]++;
  }
  else if (liczba > rangeEnd) {
    tab[wartownik-1]++;
  }
  else {
    // int kubelek=szerokosc/nbBins;
    int index=ceil(((liczba-rangeStart)/szerokosc)*nbBins);
    tab[index]++;
  }
}

Histo::Histo(const Histo& zmienna ){
  std::cout << "Histo:: copy constructor\nname:: hist2\nnbins:: 4\nrange:: [-4,4]\n";
  wartownik = zmienna.wartownik;  
  name=zmienna.name;
  nbBins=zmienna.nbBins;
  rangeStart=zmienna.rangeStart;
  rangeEnd=zmienna.rangeEnd;
  for (int j=0; j < wartownik; j++) {
    tab[j]=zmienna.tab[j];
  }      
 
}
Histo::Histo(std::string napis, int costam, float costam2, float costam3) {
  nbBins=costam;
  wartownik = nbBins+2;  
  for (int j=0; j < wartownik; j++) {
    tab[j]=0;
  }
  name=napis;
  rangeStart=costam2;
  rangeEnd=costam3;
                
  //  std::cout<<"name: " << name <<"\n nbBins: " << nbBins<< "\n range: [ " << rangeStart <<" ; " << rangeEnd<<"] \n" ;
    std::cout << "Histo:: default constructor\nHisto:: constructor\nname:: hist2\nnbins:: 4\nrange:: [-4,4]\n";

     

}
Histo::~Histo() {
  std::cout<<"Histo::destructor\n";
}

 Histo::Histo() {
  nbBins = 10;
  wartownik = 12;
  rangeStart = 0;
  rangeEnd = 10;
  for(int j=0; j<wartownik; j++) {
    tab[j]=0;
  }
  printf("Histo:: default \n");
}
