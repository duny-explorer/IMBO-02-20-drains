#include <iostream>
#include <SFML/Graphics.hpp>

using namespace sf;

int main() { // версия через SFML. Кто не знает как устанавливать библиотеки, то пропускаем данный контент
    RenderWindow window(VideoMode(550, 299), "Flag");
    window.clear(Color::White);


    for(int i = 0; i < 7; i++) {
        RectangleShape rectangle(Vector2f(550, 23));
        rectangle.setFillColor(Color::Red);
        rectangle.move(0, i*23*2);

        window.draw(rectangle);
    }

    RectangleShape blue_cube(Vector2f(200, 161));
    blue_cube.setFillColor(Color::Blue);

    window.draw(blue_cube);

    for(int i = 0; i < 8; i++) {
        for(int j = 0; j < 6; j++) {
            sf::ConvexShape star; star.setPointCount(10);
            star.setFillColor(sf::Color::White);

            star.setPoint(0, sf::Vector2f(13.5, 0));
            star.setPoint(1, sf::Vector2f(16, 9));
            star.setPoint(2, sf::Vector2f(25, 9));
            star.setPoint(3, sf::Vector2f(18, 14));
            star.setPoint(4, sf::Vector2f(22, 25));
            star.setPoint(5, sf::Vector2f(13.5, 18));
            star.setPoint(6, sf::Vector2f(3, 25));
            star.setPoint(7, sf::Vector2f(7, 14));
            star.setPoint(8, sf::Vector2f(0, 9));
            star.setPoint(9, sf::Vector2f(9, 9));

            star.move(i*24.5, j*26);
            window.draw(star);

        }
    }



    window.display();

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
    }



    return 0;
}

