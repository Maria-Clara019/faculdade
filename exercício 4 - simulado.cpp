#include <iostream>
using namespace std;

int numeros(int num1, int num2, int num3){

	if ((num1<num2)&&(num2<num3)){
		cout << "os numeros estao em oredem crescente" << endl;
		cout << "o maior numero : " << num3;
		return num3;
}else{
	if ((num3<num2)&&(num2<num1)){
		cout << "os numeros estao em ordem decrescente";
		return 0;
}else{
	if ((num1 == num2) && (num2 == num3)){
		cout << "os tres valores sao iguais";
}else{
	if((num1 == num2) || (num1 == num3) || (num2 == num3)){
		cout << "pelo menos dois dos numeros sao iguais";
}else{
		cout << "os numeros estao fora de ordem";
		return 0;
}
}
}
}
}

int main(){
	int num1;
	int num2;
	int num3;
	int result;
	
	cout << "insira o primero numero: ";
	cin >> num1;
	cout << "insira o segundo numero: ";
	cin >> num2;
	cout << "insira o terceiro numero: ";
	cin >> num3;
	
	result = numeros(num1, num2, num3);
	
	return 0;
}
