#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include "Player.h"
using namespace sf;
using namespace std;

class Game {

public:
	Game(int alto, int ancho, string titulo);
	void Play();

private:
	RenderWindow* window;
	void ProcessEvent(Event& evt);
	void CheckCollisions();
	void DrawGame();
	void UpdateGame();
	Player* player1 = new Player(150.0, 30.0, Color::Blue);
};


