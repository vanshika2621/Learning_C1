#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Array of month abbreviations. We use 1-based indexing (index 1 for Jan, 2 for Feb, etc.).
// Index 0 is intentionally unused to align the array index with the month number (1-12).
const char *MONTH_NAMES[] = {
    "",     // 0: Unused
    "Jan",  // 1
    "Feb",  // 2
    "Mar",  // 3
    "Apr",  // 4 (The specific month from your example)
    "May",  // 5
    "Jun",  // 6
    "Jul",  // 7
    "Aug",  // 8
    "Sep",  // 9
    "Oct",  // 10
    "Nov",  // 11
    "Dec"   // 12
};

// Maximum number of months is 12
#define MAX_MONTH 12

int main() {
    // Buffer to hold the input date string (e.g., "31/04/2023")
    char input_date[11]; 
    
    // Variables to store the parsed day, month number, and year
    int day, month_num, year;

    // --- Input Phase ---
    printf("Enter a date in dd/mm/yyyy format (e.g., 15/04/2023): ");
    
    // Read the input string
    if (fgets(input_date, sizeof(input_date), stdin) == NULL) {
        fprintf(stderr, "Error reading input.\n");
        return 1;
    }
    
    // Remove potential newline character from fgets
    input_date[strcspn(input_date, "\n")] = '\0';

    // --- Parsing Phase ---
    // Use sscanf to safely extract the day, month, and year integers 
    // from the input string based on the dd/mm/yyyy pattern.
    if (sscanf(input_date, "%d/%d/%d", &day, &month_num, &year) != 3) {
        printf("Error: Invalid date format. Please use dd/mm/yyyy.\n");
        return 1;
    }

    // --- Validation Phase ---
    // Basic validation for month number (1 to 12)
    if (month_num < 1 || month_num > MAX_MONTH) {
        printf("Error: Invalid month number (%d). Month must be between 01 and 12.\n", month_num);
        return 1;
    }

    // Basic validation for day (assuming max 31, but simple check is enough for this task)
    if (day < 1 || day > 31) {
        printf("Error: Invalid day number (%d).\n", day);
        return 1;
    }
    
    // --- Output Phase ---
    // %02d ensures the day is printed with at least two digits, zero-padded (e.g., 05 instead of 5)
    // We use the month_num as the index to fetch the corresponding month name.
    printf("\nOriginal Date: %s\n", input_date);
    printf("Converted Date: %02d-%s-%d\n", day, MONTH_NAMES[month_num], year);

    return 0;
}
