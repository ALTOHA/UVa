#include <cstdio>
#include <cstring>

using namespace std;

int main(){
	char numero[50], palabra[50];
	int i, j, tamano;
	while(scanf ("%s", palabra)!=EOF){
		tamano=strlen(palabra);
		for (i=0; i<tamano; i++){
			if (palabra[i]>='A' && palabra[i]<='C')
			numero[i]='2';
			else if (palabra[i]>='D' && palabra[i]<='F')
			numero[i]='3';
			else if (palabra[i]>='G' && palabra[i]<='I')
			numero[i]='4';
			else if (palabra[i]>='J' && palabra[i]<='L')
			numero[i]='5';
			else if (palabra[i]>='M' && palabra[i]<='O')
			numero[i]='6';
			else if (palabra[i]>='P' && palabra[i]<='S')
			numero[i]='7';
			else if (palabra[i]>='T' && palabra[i]<='V')
			numero[i]='8';
			else if (palabra[i]>='W' && palabra[i]<='Z')
			numero[i]='9';
			else
			numero[i]=palabra[i];
			
			printf ("%c", numero[i]);
		}
		printf ("\n");
	}
	
	return 0;
}
