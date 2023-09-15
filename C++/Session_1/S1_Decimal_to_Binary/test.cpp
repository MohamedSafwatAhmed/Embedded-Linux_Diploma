#include <iostream>
#include <bitset>
#include <sstream>
std::string decimalToBinary(int decimal){
    std::bitset<32>binary(decimal);
    return binary.to_string();
}
int binaryToDecimal(const std::string& binary){
    std::bitset<32> bits(binary);
    return static_cast<int>(bits.to_ulong())
    ;
}
int main(void)
{
    int decimal;
    std::cout<<"Enter a decimal number:";
    std::cin>>decimal;
    std::string binary=decimalToBinary(decimal);
    std::cout<<binary<<std::endl;

    std::string binaryInput;
    std::cout<< "Enter Binary Number: ";
    std ::cin >>binaryInput;
    int decimalResult=binaryToDecimal(binaryInput);
    std::cout << decimalResult<<std::endl;

}