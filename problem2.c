#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int startsWith( char const *bigString, char const *start ) {
    if(strncmp(bigString, start, strlen(start))==0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}




int main(int argc, char *argv[]) {
char *trials[][2] =
 {
   {"abcdef", "a"},
   {"abcdef", "x"},
   {"abcdef", "ab"},
   {"abcdef", "abx"},
   {"abcdef", "abcdef"},
   {"abcdef", "f"},
   {"abcdef", "abcdefx"},
   {"abcdef", "abcdefxyz"},
   {"abcdef", "fooey"},
   {"abcdef", "rats"},
   {"aaaaaa", "a"},
   {"abcdefg", "g"},
    {"applecart", "apple"},
   {"green", "apple"},
   {"apple", ""},
   {"", "rats"},
   {"",""}
 };



 int j;
 for ( j=0; j<sizeof(trials)/sizeof(trials[0]); j++ )
 {
   int result = startsWith( trials[j][0], trials[j][1] ) ;
   if ( result==0)
     printf("%s\t\t starts with\t\t%s\n", trials[j][0], trials[j][1] );
   else
     printf("%s\t\t does not start  with\t%s\n", trials[j][0], trials[j][1]  );
 }

 return 0;
}


