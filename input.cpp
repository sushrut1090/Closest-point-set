#include<iostream>
#include<fstream>

int main () {
    std::ifstream infile{"../coordinates"};
    int dim{}; int number_of_points{};
    if (infile.fail()) {
        std::cout << "Couldn't open the coordinates file\n";
    } else {
        std::cout << "Reading coordinates file ..." << std::endl;
        infile >> dim >> number_of_points;
        double coors [number_of_points][dim];
        std::cout << "Dimensions: " << dim << std::endl;
        std::cout << "Number of Points: " << number_of_points << std::endl;

        for (int i = 0; i < number_of_points; ++i) {
            for (int j = 0; j < dim; ++j) {
                infile >> coors [i][j];
            }
        }
        std::cout << "Printing array:" << std::endl;

        for (int i = 0; i < number_of_points; ++i) {
            for (int j = 0; j < dim; ++j) {
                std::cout << coors [i][j] << " ";
            }
            std::cout << "" << std::endl;
        }
        std::cout << " ...File read" << std::endl;
    }
}