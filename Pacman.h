#pragma once
class Pacman
{
private:
	float velocidadX;
	float velocidadY;
	int color;
	int vida;

public:
	void move(float _velocidadX, float _velocidadY){};

	float getVelocidadX() { return velocidadX; }
	void setVelocidadX(float _velocidadX) { velocidadX = _velocidadX; }

	float getVelocidadY() { return velocidadY; }
	void setVelocidadY(float _velocidadY) { velocidadY = _velocidadY; }

	int getVda() { return vida; }
	void setVida(int _vida) { vida = _vida; }


};

