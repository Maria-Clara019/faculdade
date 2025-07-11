#include <iostream>
using namespace std;

 //24-Faça uma função que calcule o determinante de uma matriz 2x2;
 
 int determinante2x2(float **matriz){
	int det = (matriz[0][0] * matriz[1][1]) - (matriz[0][1] * matriz[1][0]);
	
	return det;
}

void preencher(float ** matriz, int linha, int coluna){
	cout << "informe os dados da matriz" << endl;
	
	for (int l=0; l < linha; l++){
		
		for (int c=0; c < coluna; c++){
			cout << "m[" << l << "][" << c << "]: " ;
			cin >> matriz[l][c];
 		}
	}
}


void imprime(float **matriz, int linha, int coluna){
	for (int l=0; l < linha; l++){
		for (int c=0; c < coluna;c++){
			cout << matriz[l][c] << "\t";
		}
		cout << endl;
	}
}


int main(){
	float **matriz;
	int linha = 2;
	int coluna = 2;
	
	matriz = new float*[linha];
	
	for (int i=0; i < linha ; i++){
		matriz[i]= new float[coluna];
	}
	
	preencher(matriz, linha, coluna);
	imprime(matriz, linha, coluna);
	
	int det = determinante2x2(matriz);
	
	cout << "o determinate da matriz e: " << det;
	return 0;
}
