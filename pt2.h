#ifndef PT2_H
#define PT2_H

/*******************************************************
 * 
 * // (3 pts) (2) Find the first character c in 
 *          a const char* s: 
 * 
 *          strchr ( const char* str, char target);
 * 
 * // (3 pts) (3) Find the length of the prefix of const
 *          char* s that has characters in const char* t: 
 * 
 *          strspn ( const char* s1, const char* s2);         
 * 
 * // (3 pts) (4) Terminate a program immediately 
 * 
 *          exit(int n);
 * 
 * 
 * // (3 pts) (5) Open the file “midterm.txt” in read mode /
 * 
 *          fopen("midterm.txt","r");
 * 
 * 
 * 
 * size_t strcpy(char* s, const char* t); // (4 pts) (6)
 *          char* point = dest;
 *          int size = strlen(target);
 *          while((*dest++ = *target++)!= '\0'){}
 *          return point;
 * 
 * 
 * char* strncat(char* s, const char* t, size_t n); // (4 pts) (7)
 * 
 *          while( n>0){
 *              *s++ = *t++;
 *              --n;
 *          }
 * 
 * int strcmp(const char* s, const char* t); // (4 pts) (8)
 * 
 *          while(*s != '\0' && *t != '\0' && *s == *t){
 *              ++s;
 *              ++t;
 *          }
 *          return *s-*t;
 * 
 * 
 * 
 *  
********************************************************/
#endif