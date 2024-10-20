// #include "header\main.h"
#include <SFML/Graphics.hpp>

int main() {
    sf::RenderWindow window(sf::VideoMode(800, 600), "Display Image");

    // // Tạo một đối tượng texture và tải hình ảnh từ file
    // sf::Texture texture;
    // if (!texture.loadFromFile("img/phao_xanh.png")) {
    //     // Kiểm tra xem hình ảnh có được tải thành công không
    //     return -1;
    // }

    // // Tạo sprite và gán texture cho nó
    // sf::Sprite sprite;
    // sprite.setTexture(texture);

    // // Vòng lặp chính
    // while (window.isOpen()) {
    //     sf::Event event;
    //     while (window.pollEvent(event)) {
    //         if (event.type == sf::Event::Closed)
    //             window.close();
    //     }

    //     // Xóa màn hình
    //     window.clear();

    //     // Vẽ sprite (hình ảnh)
    //     window.draw(sprite);

    //     // Hiển thị mọi thứ lên màn hình
    //     window.display();
    // }
    int a = 2;
    return 0;
}