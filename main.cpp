#include <iostream>
#include <iomanip>

int main()
{
    // Declare and initialize the variables
    float number1{1.1231312344412321313f};   // precision 7
    double number2{1.2314234312315412232};   // precision 15
    long double number3{1.231223123123121L}; // precision

    // Print out the sizes
    std::cout << "size of float : " << sizeof(float) << std::endl;
    std::cout << "size of double : " << sizeof(double) << std::endl;
    std::cout << "size of long double : " << sizeof(long double) << std::endl;

    // Precision
    std::cout << std::setprecision(20);                   // Control the precision from std::cout
    std::cout << "number1 is : " << number1 << std::endl; // 7 digits
    std::cout << "number2 is : " << number2 << std::endl; // 15 ish digits
    std::cout << "number3 is : " << number3 << std::endl; // 15 + digits

    // Float problems : The precision is ususally too limited
    //  for a lot of applications
    double  number4{192400023.0}; // Error : narrowing conversion
    std::cout << "number4 is : " << number4 << std::endl;


    //Scientific notation
    // What we have so far in terms of floating point types is fixced notation. There is another notation scientific  that is handy if you have really huge or small numbers to represent 
    std::cout<<"-----------------------------"<<std::endl;
    double number5 {123213133};
    double number6 {1.231231312e8};
    double number7 {1.924e8};
                                            //Can coomit the lower 0023
                                            //for simpicity if our application allows
    double number8 {0.00000000003498}; 
    double number9 {3.498e-11}; // multiply with 10 exp(-11)
    std::cout<< "number5 : " <<number5 << std::endl;
    std::cout << "number6 : "<<number6 << std:: endl;
    std::cout << "number7 : "<<number7<< std::endl;
    std::cout << "number8 : "<<number8 <<std::endl;
    std::cout << "number9 : "<< number9 <<std::endl;
    std::cout << "**********************************" <<std::endl;
    // Infinity and Nan 
    std::cout <<std::endl;
    std::cout<<"Infinity and Nan" <<std::endl;
    double number10 {5.6};
    double number11{}; //Initialized to  0
    double number12 {};// Initialized to  0

    // Infinity 
    double result {number10 / number11};
    

    std::cout<< number10 <<"/" << number11 << " yields " << result <<std::endl;
    std::cout << result << " + " << number10 << " yields " << result + number10 << std::endl;

    // Nan
    result = number11 / number12;

    std::cout << number11 <<  "/" << number12 << " = " << result << std::endl;


    return 0;
}