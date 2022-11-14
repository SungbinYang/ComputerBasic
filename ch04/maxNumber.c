void main() {
  int targetCard[5];
  int nextCardIndex = 1;
  int currentCard = targetCard[0];
  int tmp = 0;

  five:
    if (currentCard > targetCard[nextCardIndex]) {
      tmp = currentCard;
      currentCard = targetCard[nextCardIndex];
      targetCard[nextCardIndex] = tmp;

      if (nextCardIndex != 5) {
        nextCardIndex++;
        goto five;
      }
    }

    return;
}