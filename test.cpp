#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <cmath>

double get_random(){
    int num = 10;
    double number = (rand() % (2*num + 1)) - num;
    number = number / 100.0;
    return number;
}

double average(std::vector<double> ax){
    double avg = 0;
    for(auto & i : ax){
        avg += i;
    }
    avg /= ((double) ax.size());
    return avg;
}


int main()
{
    std::vector<double> x;
    int N = 100;
    for(int i = 0; i < N; ++i){
        x.push_back(get_random());
    }

    double mean = average(x);
    double stdev = 0;
    for(int i = 0; i < N; ++i){
        stdev += pow(x[i] - mean, 2);
    }

    stdev = sqrt(stdev/((double) N - 1));
    std::cout << "C++ Deviation: " << stdev << std::endl;

    return 0;
}


/*
double multiply(double aa, double bb, double cc){
    return aa*bb*cc;
}

int main()
{
    double x = 2.33;
    double y = 1.66;
    double z = 4.21;

    double M = multiply(x, y, z);

    std::cout << M << std::endl;

    return 0;
}
*/


/*
int main()
{
    std::vector<int> x;
    int A = 12;
    int N = 20;

    for(int i = A; i < N; ++i){
        x.push_back(i);
    }

    for(auto & i : x){
        std::cout << i << " ";
    }
    std::cout << std::endl;


    return 0;
}
*/

/*
int main()
{
    int N = 20;
    int A = 12;

    for(int i = A; i < N; ++i){
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}
*/

/*
int add_numbers(int u, int v){
    return u + v + 4;
}

int main()
{
    int a = 5;
    int b = 3;
    int c = add_numbers(a, b);

    std::cout << "C++: " << c << std::endl;

    return 0;
}
*/
/*
std::string join_string(std::string a, std::string b){
    return a + b + " | Verified";
}

int main()
{
    std::string sampleA = "This is a C++ string";
    std::string sampleB = " | C++ Rocks";

    std::string sampleC = join_string(sampleA, sampleB);

    return 0;
}
*/