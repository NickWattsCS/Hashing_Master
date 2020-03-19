linear: linear.h linear.cpp
	g++ -o linear.x linear.cpp -std=c++11

quadratic: quadratic.h quadratic.cpp
	g++ -o quadratic.x quadratic.cpp -std=c++11

double: double.h double.cpp
	g++ -o double.x double.cpp -std=c++11

part1: part1.h part1.cpp
	g++ -o part1.x part1.cpp -std=c++11

clean:
	rm *.x
