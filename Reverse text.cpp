#include <iostream>

int main() {
    std::string a;
    char b;
    std::cout << "Please write a text: ";
    std::getline(std::cin, a);
    for(int i = 0; i <= (a.size()-1)/2; i++){
        b = a[i];
        a[i] = a[a.size() - 1 - i];
        a[a.size()-1 - i] = b;

    }
    std::cout << "Your reverse text is: " << a << std::endl;
    return 0;
}
