#include <cstdio>

using namespace std;

int main(){
int valor, res=0, i;
	while (scanf ("%d", &valor) && valor!=0){
			while(valor!=0){
			res=res+(valor*valor);
			valor--;
			}
		printf ("%d\n", res);
		res=0;
	}
	return 0;
}
