#pragma once
class TicTacToe {
public:
	TicTacToe();
	void instrucciones();
	void verTablero();
	void jugada( char* tablero);
	bool ganaJugador();
	bool ganaCPU();
	void movimientoCPU(char* tablero);
private:
	char tablero[10] = { ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' };
};