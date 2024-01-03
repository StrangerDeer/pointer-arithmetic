#include <iostream>
#include <string>
#include <vector>

void taskOne(){
  int x = 410, y = 350;
  int *p = &x;
  *p = y;
  std::cout << x << std::endl;
  p = p + 4;
  p = &y;
  std::cout << x << std::endl;
  x = *p + 1;
  std::cout << x << std::endl;
}

void taskTwo(){
  int x = 5, y = 3;
  int z = x;

  int *p = &x;
  *p += y;

  std::cout << "Sum: " << x << std::endl;

  *p = z - y;

  std::cout << "Difference: " << x << std::endl;

  *p = z * y;

  std::cout << "Product: " << x << std::endl;

}

bool isNumber(const std::string& s) {
  for (char c : s) {
    if (std::isdigit(c) != 0) continue;
    return false;
  }

  return true;
}

void displayAllNumber(std::vector<int>& numbers){
  std::cout<< "All numbers:" << std::endl;

  for(int i = 0; i < numbers.size(); i++){
    int num = numbers[i];

    if(i == numbers.size() - 1){
      std::cout << std::to_string(num);

    } else {
      std::cout << std::to_string(num) << ", ";
    }

  }
  std::cout<< "\n";
}

void displayGiveMeNumber(std::string& input){
  std::cout << "Give me a number!" << std::endl;
  std::cin >> input;
}

void taskThree(std::vector<int> numbers){
  std::string input;
  int* sum;
  displayGiveMeNumber(input);

  while(isNumber(input)){
    int number = std::stoi(input);

    sum += number;

    numbers.push_back(number);
    displayAllNumber(numbers);

    //sum += number;
    std::cout << "All number sum:" << std::endl;
    std::cout << *sum << std::endl;

    displayGiveMeNumber(input);
  }

  std::cout << "Good Bye!" << std::endl;

}

int main() {
  std::vector<int> numbers;
  taskThree(numbers);
  return 0;
}
