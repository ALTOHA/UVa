#include <cstdio>
#include <cstdlib>

using namespace std;

int main(){
int casos, muros, arr[100], i, j, arriba=0, abajo=0;
scanf ("%d", &casos);
for (i=0; i<casos; i++){
	scanf ("%d", &muros);
	for (j=0; j<muros; j++){
		scanf ("%d", &arr[j]);
		if (j>0){
		if (arr[j]>arr[j-1])
			arriba++;
		else if (arr[j]<arr[j-1])
			abajo++;
		}
	}
	printf ("Case %d: %d %d\n",i+1, arriba, abajo);
	arriba=abajo=0;
}
system ("pause");
return 0;
}