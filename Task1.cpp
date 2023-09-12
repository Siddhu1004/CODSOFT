#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
  // Generate a random number between 1 and 254.
  int random_number = 1 + (rand() % 254);

  int guess;
  int count = 0;

  // Loop until the user guesses the correct number.
  do {
    cout << "Enter your guess: ";
    cin >> guess;

    count++;

    if (guess < random_number) {
      cout << "Your guess is too low.\n";
    } else if (guess > random_number) {
      cout << "Your guess is too high.\n";
    } else {
      cout << "Hurrah! You guessed the number in " << count << " guesses.\n";
    }
  } while (guess != random_number);

  return 0;
}
