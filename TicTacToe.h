#pragma once
class TicTacToe {
public:
	TicTacToe();
	void instrucciones();
	void verTablero();
	void jugada( char* tablero);
private:
	char tablero[10] = { ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' };
};