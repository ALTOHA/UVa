#include <cstdio>
#include <cstring>

using namespace std;
int main(){
	char jei[100];	
	int i, j, tamano, casos, cont=0, total;
	scanf ("%d", &casos);
		for (i=0; i<casos; i++){
			scanf ("%s", jei);
			tamano=strlen(jei);
				for (j=0; j<tamano; j++){
					if(jei[j]=='O'){
						cont++;
					total+=cont;
				}
					else
					cont=0;
				}
				printf ("%d\n", total);
				cont=total=0;
		}
	return 0;
}
