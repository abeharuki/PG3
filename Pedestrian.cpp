#include "Pedestrian.h"
#include <stdio.h>

Pedestrian::Pedestrian() {
	name = "歩き";
	printf("%sで移動する\n\n",name);
}

Pedestrian::~Pedestrian() {
	printf("%sで目的地に着けなかった\n\n",name);
}


void Pedestrian::Accident() {
	printf("%sで移動中自転車に轢かれた\n\n",name);
}