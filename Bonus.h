#pragma once
class Bonus
{
private:

	int tipo;
	int color;
	float posicionX;
	float posicionY;

public: 

	int getTipo() { return tipo; }
	void setTipo(int _tipo) { tipo = _tipo; }

	int getColor() { return color; }
	void setColor(int _color) { color = _color; }

	float getPosicionX() { return posicionX; }
	void setPosicionX(float _posicionX) { posicionX = _posicionX; }

	float getPosicionY() { return posicionY; }
	void setPosicionY(float _posicionY) { posicionY = _posicionY; }

};

