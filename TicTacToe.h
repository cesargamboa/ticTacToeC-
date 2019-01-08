#pragma once
#include <string>
class TicTacToe {
public:
	TicTacToe();
	void instrucciones();
	void verTablero();
	void jugada( char* tablero);
	bool ganaJugador();
	bool ganaCPU();
	void movimientoCPU(char* tablero);
	void ponerDificultad(std::string);
private:
	char tablero[10] = { ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' };
	std::string dificultad = "dificil";
};