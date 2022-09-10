#include <stdio.h>


//programa para testar o borland c++
// manipulacao de arquivos

int main(){
	FILE *arq;
	char linha[100];
	FILE *arq1;
	arq1 = fopen("arquivo.txt","r");

	if (arq1 == NULL){
		printf("ARQUIVO N~AO ENCOTNRATO");
	}




	arq = fopen("contra.txt","w");
	fprintf(arq,"estou escrevendo qualquer coisa no arquivo");
	fprintf(arq,"segunda linha\n");

	while (fgets(linha, 100, arq1) !=NULL){

		fprintf(arq,"%s",linha);
	}

	fclose(arq);
	fclose(arq1);

	return 0;
}
