#include <iostream>
using namespace std;

void preencher(float **matriz, int linha, int coluna){
	cout << "informe os dados da matriz: " << endl;
	
	for(int l=0; l < linha; l++){
		for(int c=0; c < coluna; c++){
			cout << "m[" << l << "][" << c << "]: ";
			cin >> matriz[l][c];
	}
  }
}


void imprimeoriginal(float **matriz, int linha, int coluna){
	cout << "Matriz original:" << endl;
    for (int l = 0; l < linha; l++) {
        for (int c = 0; c < coluna; c++) {
            cout << matriz[l][c] << " ";
        }
        cout << endl;
    }
}
void imprimetransposta(float **matriz, int linha, int coluna){
	cout << "\nMatriz transposta:" << endl;
    	for(int l=0; l < linha; l++){
			for(int c=0; c < coluna; c++){
            	cout << matriz[c][l] << "\t";
        }
        cout << endl;
    }
}

int main(){
	float **matriz;
	int linha; 
	int coluna;
	
	cout << "informe o numeros de linhas: ";
	cin >> linha;
	
	cout << "informe o numero de colunas: ";
	cin >> coluna;
	
	matriz = new float*[linha];
	
	for (int i = 0; i < linha; i++){
		matriz[i] = new float[coluna];
	}
	
    preencher(matriz,linha, coluna);
    imprimeoriginal(matriz, linha, coluna);
    imprimetransposta(matriz, linha, coluna);
}
