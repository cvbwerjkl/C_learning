#ifndef FUNC_H_
#define FUNC_H_

#include <stdio.h>
#include <inttypes.h>
#include <stddef.h>

/*
 * strcmp: Compares the C string str1 to the C string str2.
 * This function starts comparing the first character of each string. If they are equal to each other, it continues with the following pairs until the characters differ or until a terminating null-character is reached.
 * This function performs a binary comparison of the characters.
 * Return value:
 *  1	the first character that does not match has a lower value in str1 than in str2
 *  0	the contents of both strings are equal
 *  -1	the first character that does not match has a greater value in str1 than in str2
*/
int8_t strcmp(const char* str1, const char* str2);

/*
 * strchr: Returns a pointer to the first occurrence of character in the C string str.
 * The terminating null-character is considered part of the C string. Therefore, it can also be located in order to retrieve a pointer to the end of a string.
 * Return Value - pointer to the first occurrence of character in str. If the character is not found, the function returns a null pointer.
*/
const char* strchr (const char* str, int character );

/*
 * strcpy: Copies the C string pointed by source into the array pointed by destination, including the terminating null character (and stopping at that point).
 * To avoid overflows, the size of the array pointed by destination shall be long enough to contain the same C string as source (including the terminating null character), and should not overlap in memory with source.
 * Parameters:
 *  destination - pointer to the destination array where the content is to be copied.
 *  source - C string to be copied.
 * Return value - destination is returned.
*/
char* strcpy ( char* destination, const char* source );

#endif /* FUNC_H_ */