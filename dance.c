#include <stdio.h>
#include <stdlib.h>

#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define RESET "\033[0m"

int i, j, k = 0;

// Function prototypes
void display();
void Head(int i);
void body(int i);
void leg(int i);

// Apply colors in display function
void display() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
    
    // Head part
    for (i = 1; i <= 5; i++) {
        printf(RED); // Set color to red
        Head(i);
        Head(i);
        Head(i);
        Head(i);
        Head(i);
        printf(RESET "\n"); // Reset color after each line
    }
    
    // Body part
    for (i = 1; i <= 5; i++) {
        printf(GREEN); // Set color to green
        body(i);
        body(i);
        body(i);
        body(i);
        body(i);
        printf(RESET "\n");
    }
    
    // Leg part
    for (i = 1; i <= 5; i++) {
        printf(YELLOW); // Set color to yellow
        leg(i);
        leg(i);
        leg(i);
        leg(i);
        leg(i);
        printf(RESET "\n");
    }
}

int main() {
    while (1) {
        k = k + 1;
        display();
        if (k >= 16) k = 0;
        
        for (i = 0; i <= 10000; i++) {
            for (j = 0; j <= 9000; j++) {
                // Empty delay loop
            }
        }
    }
    return 0;
}

void Head(int i) {
    // Head left side
    for (j = 1; j <= 5; j++) {
        if (k <= 9) {
            if (i == j) printf("0");
            else printf(" ");
        } else {
            printf(" ");
        }
    }
    printf("   ");
    
    // Head mid
    for (j = 1; j <= 5; j++) {
        if (k >= 1 && k <= 16) {
            if (k >= 2 && i <= 4 && j >= 2 && j <= 4) printf("0");
            else if (i == 5 && j == 3) printf("0");
            else printf(" ");
        }
    }
    printf("   ");
    
    // Head right side
    for (j = 1; j <= 5; j++) {
        if (k == 1 || (k >= 10 && k <= 16)) {
            if (i + j == 6) printf("0");
            else printf(" ");
        } else if (k == 9) {
            if (i + j == 6) printf("0");
            else printf(" ");
        } else {
            printf(" ");
        }
    }
    printf("   ");
}

void body(int i) {
    // Body left side
    for (j = 1; j <= 5; j++) {
        if (k % 2 == 0) {
            if (i + j == 6 && i <= 3) printf("0");
            else if (i == j && i >= 3) printf("0");
            else printf(" ");
        } else {
            if (i == 1 || j == 1) printf("0");
            else if (j + i >= 6) printf("0");
            else printf(" ");
        }
    }
    printf("   ");
    
    // Body mid
    for (j = 1; j <= 5; j++) {
        if (k % 2 == 0) {
            printf("0");
        } else {
            if (i + j <= 6) printf("0");
            else printf(" ");
        }
    }
    printf("   ");
    
    // Body right side
    for (j = 1; j <= 5; j++) {
        if (k % 2 == 0) {
            if (i == j && j <= 3) printf("0");
            else if (i + j == 6 && i >= 3) printf("0");
            else printf(" ");
        } else {
            if (i == 1 || j == 5 || i >= j) printf("0");
            else printf(" ");
        }
    }
    printf("   ");
}

void leg(int i) {
    // Leg left side
    for (j = 1; j <= 5; j++) {
        if (k % 2 == 1) {
            if (i == j) printf("0");
            else printf(" ");
        } else {
            printf(" ");
        }
    }
    printf("   ");
    
    // Leg mid
    for (j = 1; j <= 5; j++) {
        if (k % 2 == 0) {
            if (j == 1 || j == 5) printf("0");
            else printf(" ");
        } else {
            if (i == j) printf("0");
            else printf(" ");
        }
    }
    printf("   ");
    
    // Leg right side
    for (j = 1; j <= 5; j++) {
        if (k % 2 == 1) {
            if (i + j == 6) printf("0");
            else printf(" ");
        } else {
            printf(" ");
        }
    }
    printf("   ");
}
