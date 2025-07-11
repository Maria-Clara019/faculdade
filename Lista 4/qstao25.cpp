#include <iostream>
using namespace std;

int determinante3x3(float **matriz){
	int p1, p2,p3;
	int s1, s2, s3;
	
	p1= matriz[0][0] * matriz[1][1] * matriz[2][2];
	p2= matriz[0][1] * matriz[1][2] * matriz[2][0];
	p3= matriz[0][2] * matriz[1][0] * matriz[2][1];
	s1= matriz[0][1] * matriz[1][0] * matriz[2][2];
	s2= matriz[0][0] * matriz[1][2] * matriz[2][1];
	s3= matriz[0][2] * matriz[1][1] * matriz[2][0];
	
	int det = (p1 + p2 + p3) - (s1 +s1 + s3);
	
	return det;
}

void preencher(float **matriz, int linha, int coluna){
	
	cout << "informe os dados da matriz" << endl;
	
	for (int l = 0; l < linha; l++){
		
		for (int c = 0; c < coluna; c++){
			cout << "m[" << l << "][" << c << "]: ";
			cin >> matriz[l][c];
		}
	}
	
}

void imprime(float **matriz, int linha, int coluna){
	for (int l = 0; l< linha; l++){
		for (int c = 0; c < coluna; c++){
			cout << matriz[l][c] << "\t";
		}
		cout << endl;
	}
}

int main(){
	float **matriz;
	int linha = 3;
	int coluna = 3;
	
	matriz = new float*[linha];
	
	for (int i = 0; i < linha; i++){
		matriz[i] = new float[coluna];
	}
	
	preencher(matriz, linha, coluna);
	imprime(matriz, linha, coluna);
	
	int det = determinante3x3(matriz);
    cout << "O determinante da matriz e: " << det << endl;
}
