#include "Level.h"

Level::Level(sf::RenderWindow* hwnd)
{
	window = hwnd;

	// initialise game objects
	rect.setSize(sf::Vector2f(50, 50));
	rect.setPosition(100, 100);
	rect.setFillColor(sf::Color::Red);

	sf::Vector2u pos = window->getSize();

	rect2.setSize(sf::Vector2f(50, 50));
	rect2.setPosition(pos.x - 50, pos.y - 50);
	rect2.setFillColor(sf::Color::Green);

	rect3.setSize(sf::Vector2f(60, 60));
	rect3.setPosition(500, 500);
	rect3.setFillColor(sf::Color::Red);

	rect4.setSize(sf::Vector2f(40, 40));
	rect4.setPosition(510, 510);
	rect4.setFillColor(sf::Color::Green);

	rect5.setSize(sf::Vector2f(20, 20));
	rect5.setPosition(520, 520);
	rect5.setFillColor(sf::Color::Blue);

	circle.setRadius(50);
	circle.setPosition(300, 300);
	circle.setFillColor(sf::Color::Green);
	circle.setOutlineColor(sf::Color::Magenta);
	circle.setOutlineThickness(2.f);

	if (!font.loadFromFile("font/arial.ttf"))
	{
		std::cout << "Error loading font\n";

	}

	text.setFont(font);
	text.setString("Hello World");
	text.setCharacterSize(24);
	text.setPosition(400, 0);
	text.setFillColor(sf::Color::Red);

}

Level::~Level()
{
}


// handle user input
void Level::handleInput()
{

}


// Update game objects
void Level::update()
{
	sf::Vector2u pos = window->getSize();
	rect2.setPosition(pos.x - 50, pos.y - 50);
}

// Render level
void Level::render()
{
	beginDraw();

	window->draw(rect);
	window->draw(rect2);
	window->draw(rect3);
	window->draw(rect4);
	window->draw(rect5);
	window->draw(circle);
	window->draw(text);

	endDraw();
}

void Level::beginDraw()
{
	window->clear(sf::Color(100, 149, 237));
}

// Ends rendering to the back buffer, and swaps buffer to the screen.
void Level::endDraw()
{
	window->display();
}