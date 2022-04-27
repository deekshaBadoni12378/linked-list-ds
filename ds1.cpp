

#include <iostream>
#include <conio.h>
using namespace std;

class branch{
public:
  int value;
  branch* next;
};

int main() {
  branch* head;
  branch* one = NULL;
  branch* two = NULL;
  branch* three = NULL;


  one = new branch();
  two = new branch();
  three = new branch();


  one->value = 0 ;
  two->value = 4 ;
  three->value = 6 ;


  one->next = two;
  two->next = three;
  three->next = NULL;


  head = one ;
  while (head != NULL) {
    cout << head->value;
    head = head->next;
  }
}
