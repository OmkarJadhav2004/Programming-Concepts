#include <stdio.h>
int main() {
    int D[12], p1, p2, p4, p8, syndrome;
    char D1[13]; // Increased size to accommodate the null terminator

    // Read the input as a string
    scanf("%12s", D1);

    // Convert input string to integer array (0 or 1)
    for (int i = 0; i < 12; i++) {
        D[11 - i] = D1[i] - '0';
    }

    // Calculate parity bits
    p1 = D[0] ^ D[2] ^ D[4] ^ D[6] ^ D[8] ^ D[10];
    p2 = D[1] ^ D[2] ^ D[5] ^ D[6] ^ D[9] ^ D[10];
    p4 = D[3] ^ D[4] ^ D[5] ^ D[6];
    p8 = D[7] ^ D[8] ^ D[9] ^ D[10];

    // Calculate syndrome
    syndrome = 8 * p8 + 4 * p4 + 2 * p2 + p1;

    // If syndrome is non-zero, an error has been detected
    if (syndrome) {
        printf("Data corrupted, syndrome = %d\n", syndrome);
        // Correct the error by flipping the bit at the syndrome position (adjusting for 1-based index)
        D[12 - syndrome] ^= 1;
    }

    // Extract the original data bits
    int input[7] = {
        D[10], D[9], D[8], // Data bits from positions 11, 10, 9 (0-based index 10, 9, 8)
        D[6], D[5], D[4], // Data bits from positions 7, 6, 5 (0-based index 6, 5, 4)
        D[2]               // Data bit from position 3 (0-based index 2)
    };

    // Print the corrected data bits
    for (int i = 0; i < 7; i++) {
        printf("%d", input[i]);
    }
    printf("\n");

    return 0;
}
