#include "Game.h"

Game::Game(int alto, int ancho, string titulo) {
	window = new RenderWindow(VideoMode(ancho, alto), titulo);
}

void Game::Play() {
	
	while (window->isOpen()) {
		CheckCollisions();
		DrawGame();
		Event evt;
		while (window->pollEvent(evt)) {
			ProcessEvent(evt);
		}

	}
}
void Game::CheckCollisions() {

}
void Game::DrawGame() {
	window->clear();
	player1->drawPlayer(*window);
	window->display();
}
void Game::ProcessEvent(Event& evt) {
	switch (evt.type)
	{
	case Event::Closed():
		window->close();
		break;
	}
}
void Game::UpdateGame() {

}