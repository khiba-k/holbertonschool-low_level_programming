#include "main.h"                                                                                                                                                                                           
                                                                                                                                                                                                            
/**                                                                                                                                                                                                         
 *_islower - function begins                                                                                                                                                                                
 *Return: end of function                                                                                                                                                                                   
 *@c: int variable name                                                                                                                                                                                     
*/                                                                                                                                                                                                          
int _islower(int c)                                                                                                                                                                                         
{                                                                                                                                                                                                           
if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')                                                                                                                                                                                   
{                                                                                                                                                                                                           
return (1);                                                                                                                                                                                                 
}                                                                                                                                                                                                           
else                                                                                                                                                                                                        
{                                                                                                                                                                                                           
return (0);                                                                                                                                                                                                 
}                                                                                                                                                                                                           
}                                                                                                                                                                                                           
   