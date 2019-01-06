#include <iostream>
#include "TicTacToe.h"


TicTacToe::TicTacToe() {}

void TicTacToe::instrucciones() {
	char cuadros[10] = { 'o', '1','2','3','4','5','6','7','8', '9' };
	system("cls");
	std::cout << "\n\n\tBienvenido al juego de gato(Tic Tac Toe)\n\n";
	std::cout << "\n\n\tInstrucciones: \n\n";
	std::cout << "\n\t1. Seleccione la dificultad \n\n";
	std::cout << "\n\t2. Cuando sea su turno, ingrese la posicion en la que desea colocar la X \n\n";
	std::cout << "\n\t3. use el tablero que se muestra, para saber los numeros de cada posicion \n\n";

	std::cout << "Player 1 (X)  -  CPU (O)" << std::endl << std::endl;
	std::cout << std::endl;

	std::cout << "     |     |     " << std::endl;
	std::cout << "  " << cuadros[1] << "  |  " << cuadros[2] << "  |  " << cuadros[3] << std::endl;

	std::cout << "_____|_____|_____" << std::endl;
	std::cout << "     |     |     " << std::endl;

	std::cout << "  " << cuadros[4] << "  |  " << cuadros[5] << "  |  " << cuadros[6] << std::endl;

	std::cout << "_____|_____|_____" << std::endl;
	std::cout << "     |     |     " << std::endl;

	std::cout << "  " << cuadros[7] << "  |  " << cuadros[8] << "  |  " << cuadros[9] << std::endl;

	std::cout << "     |     |     " << std::endl << std::endl;
	TicTacToe::jugada(tablero);
}
void TicTacToe::verTablero() {
	std::cout << "Partida en progreso" << std::endl << std::endl;
	std::cout << std::endl;

	std::cout << "     |     |     " << std::endl;
	std::cout << "  " << tablero[1] << "  |  " << tablero[2] << "  |  " << tablero[3] << std::endl;

	std::cout << "_____|_____|_____" << std::endl;
	std::cout << "     |     |     " << std::endl;

	std::cout << "  " << tablero[4] << "  |  " << tablero[5] << "  |  " << tablero[6] << std::endl;

	std::cout << "_____|_____|_____" << std::endl;
	std::cout << "     |     |     " << std::endl;

	std::cout << "  " << tablero[7] << "  |  " << tablero[8] << "  |  " << tablero[9] << std::endl;

	std::cout << "     |     |     " << std::endl << std::endl;
}
void TicTacToe::jugada(char* punteroAlTablero) {
	int opcion;
	std::cout << "En que posicion desea hacer el movimiento: " << std::endl;
	std::cin >> opcion;
	punteroAlTablero[opcion] = 'X' ;
	system("CLS");
	TicTacToe::verTablero();
}
