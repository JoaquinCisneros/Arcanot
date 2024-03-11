#include "Player.h"

Player::Player(float ancho, float alto, Color color) {

	x = 350;
	y = 570;

	player.setSize(Vector2f(ancho, alto));
	player.setFillColor(color);
	player.setPosition(getX(), getY());

}
int Player::getX() {
	return x;
}
int Player::getY() {
	return y;
}
void Player::setX(int newX) {
	x = newX;
}
void Player::setY(int newY) {
	y = newY;
}
void Player::drawPlayer(RenderWindow& wnd) {
	wnd.draw(player);
}