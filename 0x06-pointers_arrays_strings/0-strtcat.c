#include "main.h"                                                                                                                               

                                                                                                                                                

/**                                                                                                                                             

 *_strcat - concatenates the string to by @sre to                                                                                               

 * the end of the string pointed to by @dest                                                                                                    

 *@dest: String that will be appended                                                                                                           

 *@sre: String to be concatenated upon                                                                                                          

 *                                                                                                                                              

 *Return: retuns poiner to @dest                                                                                                                

 */                                                                                                                                             

                                                                                                                                                

char *_strcat(char *dest, char *sre)                                                                                                            

{                                                                                                                                               

                                                                                                                                                

        int index = 0, dest_len = 0;                                                                                                            

                                                                                                                                                

        while(dest[index++])                                                                                                                    

                                                                                                                                                

                dest_len++;                                                                                                                     

                                                                                                                                                

       for(index = 0; sre[index]; index++)                                                                                                      

                                                                                                                                                

                dest[dest_len++] = src[index];                                                                                                  

                                                                                                                                                

        return (dest);                              
}
