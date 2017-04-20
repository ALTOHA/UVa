#include <cstdio>
#include <cstdlib>

using namespace std;

int main(){
	int personas=0, casos=0, ficha=1, valores[50], budget=0, dae=0,i, suma=0, x=0, l=0;

	while(scanf ("%d %d",&personas, &casos)!=EOF){
		suma=0;
	while (casos--){
		ficha=1;
		scanf ("%d", &budget);
			for (i=0; i<personas; i++){
				scanf ("%d", &valores[i]);
				suma+=valores[i];
			}
				if (suma < budget || suma > budget){
					if (suma>budget){
						l++;
			}
			suma-=valores[0];
				while(ficha<=10000){
					suma+=ficha;
						if (suma<=budget){
							x=ficha;
							suma-=ficha;
						}
						else break;
			
					ficha*=10;
				}
		(x>0 && l>0)? dae+=x : dae=dae;
		(x>0 && l==0)? dae+=(x-valores[0]) : dae=dae;
		}
		x=l=suma=0;
		}
			printf ("%d\n", dae);
			suma=dae=x=0;
		}

	return 0;
}