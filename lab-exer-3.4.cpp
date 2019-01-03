#include <iostream>
using namespace std;
int main()
	// lab-exer-3 question #4
{
    char a;
 	   cout << "Enter a letter: ";
 	   cin >> a;
    
    char b;
 	   cout << "Enter another letter: ";
 	   cin >> b;
 	   
    int al = int(a);
    int bl = int(b);

    if(al > bl) {
        int temp = bl;
        bl = al;
        al = temp;
     	   for(int i = al; i <= bl; i++) {
          	  char hey = i;
         	   cout << hey;
        }
    } else {
     	  for(int i = al; i <= bl; i++) {
       	     char hey = i;
       	     cout << hey;
        }
    }
    
    return 0;
}
