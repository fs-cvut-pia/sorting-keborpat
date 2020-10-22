#include "trideni.h"
#include <iostream>

using namespace std;

void nacti(string nazev, seznam_slov & jmena)
{

	string s;
		
	ifstream soubor;
	soubor .open(nazev.c_str());
	
	while (!soubor.eof())
	{
	
	getline(soubor, s);
	jmena.push_back(s);
     	

}

soubor.close();
}


int zeptej_se_jestli_vypsat()
{
int a;
cout<< "Chcete vypsat poradi jmen?"<< endl;
cout<< "Pro vypsani stisknete 1"<< endl;
cout<< "Pro pokracovani bez vypsani stiknete 0"<< endl;
cin>> a;
return a ;
}

void vypis(seznam_slov const& jmena)

{
	int i;
	i=0;
	for (i;i<jmena.size();i++)
	{
		cout << jmena[i] << endl;
	}
}

void serad(seznam_slov & jmena) {
	std::string tmp;
	bool bylo_prohozeno;
	do{
		bylo_prohozeno = false;
		for (int i=1; i<jmena.size(); i++) {
			if (jmena[i].compare(jmena[i-1]) < 0){
				tmp = jmena [i];
				jmena[i] = jmena [i-1];
				jmena[i-1]= tmp;
				bylo_prohozeno = true;
			}
		}
	} while (bylo_prohozeno);
	
}

