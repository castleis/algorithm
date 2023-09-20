#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// A_len은 배열 A의 길이입니다.
// B_len은 배열 B의 길이입니다.
int solution(int A[], size_t A_len, int B[], size_t B_len) {
    int answer = 0;
    // A배열을 오름차순으로, B배열을 내림차순으로 정렬
    for (int i = 0; i < A_len - 1; i++) {
        for (int j = i; j < A_len; j++) {
            if (A[i] > A[j]) {
                int temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
            if (B[i] < B[j]) {
                int temp = B[i];
                B[i] = B[j];
                B[j] = temp;
            }
        }
    }
    for (int i = 0; i < A_len; i++) {
        answer += (A[i] * B[i]);
    }
    return answer;
}