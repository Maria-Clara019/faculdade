//Lista 1 - 26

int tempodejogo( int horaI, int horaF){
	if (horaI > horaF){
		int total = (horaF - horaI) + 24;
		
}else{
		int total = horaF - horaI;
	
}
}

int main(){
	int horaI;
	int horaF;
	int total;
	
	cout << "informe a hora inicial: ";
	cin >> horaI;
	cout << "informe a hora final: ";
	cin >> horaF;
	
	total = tempodejogo(horaI, horaF);
	cout << "o tempo de jogo foi: " << total
	 ;
}
