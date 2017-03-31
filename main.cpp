#include<iostream>
#include<fstream>
#include<cmath>
#include<cstdlib>
#include "Cls.h"
using namespace std;
int main() 
{
float ra,rb,ea,eb;
float s[9];
Cls F;

ifstream inFile("file.in",ios::in);/*file in*/
if(!inFile) {
cerr << "Failed opening" << endl;
exit(1);}

ofstream outFile("file.out", ios::out);/*file out*/
if(!outFile) {
cerr << "Failed opening" << endl;
exit(1);}

F.setF();/*set k,ra,rb*/
for(int i=0;i<9;i++){inFile >> s[i];
		}

ra=F.getFra();/*test ra*/
rb=F.getFrb();/*test rb*/

outFile << ra << " " << rb << endl;

for(int j=3;j<9;j++){

ea=F.countscoreA(ra,rb);
eb=F.countscoreB(ra,rb);
ra=F.countratingA(ra,s[j],ea);
rb=F.countratingB(rb,s[j],eb);


if(ra-(int)ra > 0.5){ra=(int)ra+1;}
else{ra=(int)ra;}

if(rb-(int)rb > 0.5){rb=(int)rb+1;}
else{rb=(int)rb;}

outFile << ra << " " << rb << endl;

}


return 0;
}
