#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
using namespace sf;

class Player {
private:
	int x;
	int y;
	RectangleShape player;
public:
	Player(float ancho, float alto, Color color);
	int getX();
	int getY();
	void setX(int newX);
	void setY(int newY);
	void drawPlayer(RenderWindow& wnd);
};
