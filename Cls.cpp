#include<cmath>
#include<fstream>
#include "Cls.h"

float Cls::countratingA(float r,float s,float e){
			return r+k*(s-e);
			}
float Cls::countratingB(float r,float s,float e){
			return r+k*(1-s-e);
			}
float Cls::countscoreA(float ra,float rb){
			return 1/(1+pow(10,((rb-ra)/400)));
			}
float Cls::countscoreB(float ra,float rb){
			return 1/(1+pow(10,((ra-rb)/400)));			
			}
void Cls::setF(){
			ifstream inFile("file.in",ios::in);
			inFile >> k >> ra >>rb;
			/*cout << k<<" " << ra<<" " << rb<<" " << endl;*/
			}
float Cls::getFk(){return k;}
float Cls::getFra(){return ra;}
float Cls::getFrb(){return rb;}
