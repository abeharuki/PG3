#include "Rectangle.h"

Rectangle::Rectangle() {

}

void Rectangle::size(float vertical, float beside) {
	area = vertical * beside;
}

void Rectangle::draw() {
	printf("矩形の面積は%f\n",area);
}