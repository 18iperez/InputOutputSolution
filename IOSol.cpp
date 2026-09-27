#include <iostream>
using namespace std;

int main() {
  string n; // We cannot return letters with an int variable
  cout << "Hello, please state your name:";
  cin >> n; //The >> operator was flipped
  cout << "Nice to meet you " << n; // This line was past the return line meaning it would not execute
  return 0;
}
