#include <cstring>
#include <iostream>
#include <math.h>
using namespace std;

int main() {
  string word, ans;
  int key, i;
  char a, answer;

  while (answer != 'y') {
    cout << "Enter your word here (use simple letters): " << endl;
    cin >> word;

    cout << "Do you want Plain text or Cipher text please enter (Plain or Cipher): " << endl;
    cin >> ans;

    cout << "Enter your key: " << endl;
    cin >> key;

    if (ans == "Cipher" || ans == "cipher" || ans == "CIPHER") 
    {
      for (i = 0; i < word.length(); i++) 
        {
          a = (word[i] - 'a' + key) % 26 + 'a';
          cout << a;
        }
      cout << endl;
      
    }
    
    else if (ans == "Plain" || ans == "plain" || ans == "PLAIN") 
    {
      for (i = 0; i < word.length(); i++) 
        {
          a = (word[i] - 'a' - key + 26) % 26 +'a'; // added +26 to avoid negative values
          cout << a;
        }
      cout << endl;
      
    }

    cout << "Do you want to exit ? (y/n) :" << endl;
    cin >> answer;
  }

  cout << "You have exited from the program" << endl;

  return 0;
}