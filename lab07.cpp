/*Tego pliku nie wolno modyfikowac!
*prosze napisac histogram Histo. W ogólności histogram może być przedstawiony jako tablica 
*zawierająca zliczenia występowania pewnej wielkości w określonym przedziale. 
*
*Prosze kompilować z opcjami -Wall -g 
*/

#include "Histo.h"
#include "Histo.h"
#include <iostream>

int main(){
	Histo hist1;
	Histo hist2("hist2",4,-4.,4.);

	hist1.add(3.5);
	hist1.add(4.2);
	hist1.add(-1.3);
	hist1.add(3.7);
	hist1.add(-3);
	
	hist2.add(-3.3);
	hist2.add(-3.2);
	hist2.add(2.1);
	hist2.add(0.3);
	hist2.add(5.);

	hist2.print();
	Histo hist3(hist2);
	hist3.print();

	hist1.norm();
	hist1.print();
	return 0;
}

/* output programu
Histo:: default constructor
Histo:: constructor
name:: hist2
nbins:: 4
range:: [-4,4]
[0]	0
[1]	2
[2]	0
[3]	1
[4]	1
[5]	1

Histo:: copy constructor
name:: hist2
nbins:: 4
range:: [-4,4]
[0]	0
[1]	2
[2]	0
[3]	1
[4]	1
[5]	1

name:: histogram
nbins:: 10
range:: [0,10]
[0]	0.4
[1]	0
[2]	0
[3]	0
[4]	0.4
[5]	0.2
[6]	0
[7]	0
[8]	0
[9]	0
[10]	0
[11]	0

Histo:: destructor
Histo:: destructor
Histo:: destructor
*/
