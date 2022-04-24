#include <iostream>  // input/output stream library
#include <cmath>     // for math operations

int main(int argc, char* argv[]){

    if (argc == 4){

        double First = atof(argv[1]);
        double Second = atof(argv[2]);  // KOEFs
        double Third = atof(argv[3]);

        double Discriminant = Second * Second - 4.0 * First * Third;

        std::cout << "First koef >> " << First
            << "\nSecond koef >> " << Second
            << "\nThird koef >> " << Third
            << "\n\nDiscriminant = b^2 - 4*a*c"
            << "\nDiscriminant = " << Second << "^2 - 4 * " << First << " * " << Third
            << "\nDiscriminant = " << Discriminant << std::endl;
        if (Discriminant < 0.0) {
            std::cout << "\nDiscriminant < 0, Equation has not roots!\n" << std::endl;
            exit(0);
        }
        else if (Discriminant == 0.0) std::cout << "\nDiscriminant = 0, Equation has two identical roots\n" << std::endl;
        else std::cout << "\nDiscriminant > 0, Equation has two roots\n" << std::endl;

        std::cout << "X1 = (-b + root(Discriminant)) : 2a\nX2 = (-b - root(Discriminant)) : 2a\n"
            << "\nX1 = " << (-(Second) + sqrt(Discriminant)) / (2.0*First)
            << "\nX2 = " << (-(Second) - sqrt(Discriminant)) / (2.0*First) << std::endl;

    }
    else std::cout << "Something was wrong... Not correct args!" << std::endl;

    return 0;

}
