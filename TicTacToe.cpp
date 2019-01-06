#include <iostream>
#include "TicTacToe.h"
#include <stdlib.h>
#include <time.h>  


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
	do {
		std::cout << "En que posicion desea hacer el movimiento: " << std::endl;
		std::cin >> opcion;
		if (punteroAlTablero[opcion] != ' ') {
			std::cout << "Campo ocupado! ingrese de nuevo" << std::endl;
		}
		else {
			punteroAlTablero[opcion] = 'X';
			TicTacToe::movimientoCPU(punteroAlTablero);
		}
		system("CLS");
		TicTacToe::verTablero();
	} while (!TicTacToe::ganaJugador() && !TicTacToe::ganaCPU());
}
bool TicTacToe::ganaJugador() {
	if ((tablero[1] == 'X') && (tablero[2] == 'X') && (tablero[3] == 'X')) {
		std::cout << "Hay ganador" << std::endl;
		return true;
	}
	if ((tablero[4] == 'X') && (tablero[5] == 'X') && (tablero[6] == 'X')) {
		std::cout << "Hay ganador" << std::endl;
		return true;
	}
	if ((tablero[7] == 'X') && (tablero[8] == 'X') && (tablero[9] == 'X')) {
		std::cout << "Hay ganador" << std::endl;
		return true;
	}
	if ((tablero[1] == 'X') && (tablero[4] == 'X') && (tablero[7] == 'X')) {
		std::cout << "Hay ganador" << std::endl;
		return true;
	}
	if ((tablero[2] == 'X') && (tablero[5] == 'X') && (tablero[8] == 'X')) {
		std::cout << "Hay ganador" << std::endl;
		return true;
	}
	if ((tablero[3] == 'X') && (tablero[6] == 'X') && (tablero[9] == 'X')) {
		std::cout << "Hay ganador" << std::endl;
		return true;
	}
	if ((tablero[1] == 'X') && (tablero[5] == 'X') && (tablero[9] == 'X')) {
		std::cout << "Hay ganador" << std::endl;
		return true;
	}
	else if ((tablero[7] == 'X') && (tablero[5] == 'X') && (tablero[3] == 'X')) {
		std::cout << "Hay ganador" << std::endl;
		return true;
	}
	return false;
}
bool TicTacToe::ganaCPU() {
	if ((tablero[1] == 'O') && (tablero[2] == 'O') && (tablero[3] == 'O')) {
		std::cout << "Hay ganador" << std::endl;
		return true;
	}
	if ((tablero[4] == 'O') && (tablero[5] == 'O') && (tablero[6] == 'O')) {
		std::cout << "Hay ganador" << std::endl;
		return true;
	}
	if ((tablero[7] == 'O') && (tablero[8] == 'O') && (tablero[9] == 'O')) {
		std::cout << "Hay ganador" << std::endl;
		return true;
	}
	if ((tablero[1] == 'O') && (tablero[4] == 'O') && (tablero[7] == 'O')) {
		std::cout << "Hay ganador" << std::endl;
		return true;
	}
	if ((tablero[2] == 'O') && (tablero[5] == 'O') && (tablero[8] == 'O')) {
		std::cout << "Hay ganador" << std::endl;
		return true;
	}
	if ((tablero[3] == 'O') && (tablero[6] == 'O') && (tablero[9] == 'O')) {
		std::cout << "Hay ganador" << std::endl;
		return true;
	}
	if ((tablero[1] == 'O') && (tablero[5] == 'O') && (tablero[9] == 'O')) {
		std::cout << "Hay ganador" << std::endl;
		return true;
	}
	else if ((tablero[7] == 'O') && (tablero[5] == 'O') && (tablero[3] == 'O')) {
		std::cout << "Hay ganador" << std::endl;
		return true;
	}
	return false;
}
void TicTacToe::movimientoCPU(char* punteroAlTablero) {
	int numeroRandom;
	if (dificultad == "dificil") {
		std::cout << "Getting here";
		//movimiento al centro
		/*if (punteroAlTablero[5] != ' ') {
			punteroAlTablero[5] = 'O';
		}*/
		// revisar tablero
		for (int i = 1; i < 10; i++) {
			if (((punteroAlTablero[i + 1] && punteroAlTablero[i - 1]) == 'O')
				||
				((punteroAlTablero[i + 2] && punteroAlTablero[i - 2]) == 'O')
				||
				((punteroAlTablero[i + 1] && punteroAlTablero[i + 2]) == 'O')
				||
				((punteroAlTablero[i - 1] && punteroAlTablero[i - 2]) == 'O')
				) {
				std::cout << "Getting here case 1";
				punteroAlTablero[i] = 'O';
				}
			if (((punteroAlTablero[i + 3] && punteroAlTablero[i - 6]) == 'O')
				||
				((punteroAlTablero[i + 6] && punteroAlTablero[i - 6]) == 'O')
				||
				((punteroAlTablero[i + 3] && punteroAlTablero[i + 6]) == 'O')
				||
				((punteroAlTablero[i - 3] && punteroAlTablero[i - 6]) == 'O')
				) {
				std::cout << "Getting here case 2";
				punteroAlTablero[i] = 'O';
			}
			if (((punteroAlTablero[i + 4] && punteroAlTablero[i - 9]) == 'O')
				||
				((punteroAlTablero[i + 9] && punteroAlTablero[i - 9]) == 'O')
				||
				((punteroAlTablero[i + 4] && punteroAlTablero[i + 9]) == 'O')
				||
				((punteroAlTablero[i - 4] && punteroAlTablero[i - 9]) == 'O')
				) {
				std::cout << "Getting here case 3";
				punteroAlTablero[i] = 'O';
			}
		}
		// revisar si n y n+1 esta ocupado, luego si si, poner en n+2
		// mejor posicion: centro, esquinas
	}
	else {
		srand(time(NULL));
		numeroRandom = rand() % 9 + 1;
		// Asegurarse que el campo este vacio antes de hacer la jugada
		while (punteroAlTablero[numeroRandom] != ' ') {
			srand(time(NULL));
			numeroRandom = rand() % 9 + 1;
		}
		punteroAlTablero[numeroRandom] = 'O';
	}
}
