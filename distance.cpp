#include<iostream>
#include<tuple>
#include<vector>
#include <cmath>


double distance_calculate(double pt1[], double pt2[], int dim) {
    // point1, point2, dimensions

    double dis = 0;
    for (int i = 0; i < dim; ++i) {
        dis += std::pow(pt1[i] - pt2[i],2);
    }
    dis = std::sqrt(dis);
    return dis;
}

int main () {
    std::cout << "hello ... testing" << std::endl;

    double pt1 [4] = {2.34,4.33,5.66,6.77};
    double pt2 [4] = {0.22,7.22,6.22,2.55};
    int dim = 4;
    std::cout << distance_calculate(pt1, pt2, dim) << std::endl;
}
