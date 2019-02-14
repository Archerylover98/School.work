#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int main(){
  cout << "\nGreetings Player, welcome to a Simulated Combat Encounter, or SCE.";
  int health1;
  int health2;
  int attack;
  int block;
  int iterator;
  int randomNumber = rand();
  srand(static_cast<unsigned>(time(0)));
  attack = rand()%5;
  block = rand()%5;
  health1 = 10;
  health2 = 10;
  int tries = 0;
  int turns = rand()%20;
  while (iterator < turns){
  ++iterator;
  if (attack > block)
  {
    health1 - attack;
    cout << "\nYou have taken damage.";
  }
  else if (block > attack)
  {
    cout << "\nYou blocked the Enemy's attack.";
  }
  else
  {
    health2 - attack;
    cout <<"\nYou riposted and damaged the enemy.";
    }
  }
  if (health1 > 0)
  {
    cout << "\nCongratulations Player, you did not survive the SCE.";
  }
  else
  {
    cout << "\nCongratulations Player, you survived the SCE and defeated the enemy.";
  }
  return 0;
}