#include :"trideni.h"


namesapce std;

void nacti(string nazev, seznam_slov & jmena)
{

	seznam_slov jmena;
	string s;
	int i=0;
	
	ifstream soubor;
	soubor.open(nazev);
	
	while (!soubor.eof())
	{
	
	getline(soubor, s);
	jmena.push_back(s);
     	
	i++;
}
		
}


int zeptej_se_jestli_vypsat()
{
int a;
cout<< 'Chcete vypsat poradi jmen?'<< endl;
cout<< 'Pro vypsani stisknete 1'<< endl;
cout<< 'Pro pokracovani bez vypsani stiknete 0'<< endl;
cin>> a;
return a ;
}

void vypis (seznam_slov spravny)
{
	int i;
	i=0;
	for (i<sprany.size())
	{
		cout << sppravny[i];
	}
}
