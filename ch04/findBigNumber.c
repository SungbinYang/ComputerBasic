#include <stdio.h>

void main() {
    int targetCards[5]; // 예시로 int 배열을 사용합니다. 적절히 초기화 필요
    int nextCardIndex = 1;
    int referenceCard = targetCards[0];

    while (nextCardIndex < 5) { // 배열의 크기가 5라고 가정
        if (referenceCard < targetCards[nextCardIndex]) {
            // 위치 교환 로직
            int temp = referenceCard;
            referenceCard = targetCards[nextCardIndex];
            targetCards[nextCardIndex] = temp;
        }
        nextCardIndex++;
    }
}
