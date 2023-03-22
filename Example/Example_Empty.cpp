#include <stdio.h>
#include <format>
#include <random>

int main(){
	std::string str = std::format("this is empty project\n");
	printf(str.c_str());

	std::random_device rd;
	std::mt19937 mt(rd());
	std::uniform_real_distribution<double> dist_x(-10, 10);
	std::uniform_real_distribution<double> dist_y(-5, 5);
	for (size_t i = 0; i < 100; i++) {
		double x_rand = dist_x(mt);
		double y_rand = dist_y(mt);
		str = std::format("rand [{:0.6f}, {:0.6f}]\n", x_rand, y_rand);
		printf(str.c_str());
	}
	
	return 0;
}