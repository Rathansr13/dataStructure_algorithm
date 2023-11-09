#include <iostream>
using namespace std;

void distributeCandies(int N, int K) {
  int candies[K];
  int currentCandy = 1;
  int round = 1;

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < K; j++) {
      if (round == 1) {
        candies[j] = currentCandy;
        
      currentCandy++;

      } else {
        candies[j] += currentCandy;
        
      currentCandy++;

      }

      if (candies[j] > N) {
        currentCandy = 1;
        break;
      }
    }

    round++;
  }

  for (int i = 0; i < K; i++) {
    cout << candies[i] << " ";
  }
}

int main() {
  int N, K;

  cout << "Enter the number of candies N: ";
  cin >> N;

  cout << "Enter the number of children K: ";
  cin >> K;

  distributeCandies(N, K);

  return 0;
}