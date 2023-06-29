#include <stddef.h> // for size_t

char *_strcat(char *dest, const char *src) {
    // Find the end of the dest string
    char *ptr = dest;
    while (*ptr != '\0') {
        ptr++;
    }
    
    // Append characters from src to dest
    while (*src != '\0') {
        *ptr = *src;
        ptr++;
        src++;
    }
    
    // Add a terminating null byte
    *ptr = '\0';
    
    return dest;
}

