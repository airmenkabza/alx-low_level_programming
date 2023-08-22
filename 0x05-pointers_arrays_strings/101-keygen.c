#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * Function to generate a random character
 * between 'a' and 'z'
 * Function to generate a random password
 * Null-terminate the string
 * Seed the random number generator 
 * with the current time
 * You can adjust the length as needed
 * Return: Always 0.
 * +1 for the null terminator
 */
char generate_random_char()
{
    return ('a' + rand() % 26);
}
void generate_password(char *password, int length)
{
for (int i = 0; i < length; i++)
{
password[i] = generate_random_char();
}
password[length] = '\0'; 
}
int main(void) {
srand(time(NULL));
int password_length = 8;
char password[password_length + 1];
generate_password(password, password_length);
printf("Generated password: %s\n", password);
return (0);
}
