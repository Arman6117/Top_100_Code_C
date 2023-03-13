// Maximum number of handshakes

/*all persons present should shake hands.

For the first person, there will be N-1 people to shake hands with
For second person, there will be N -1 people available but as he has already shaken hands with the first person, there will be N-1-1 = N-2 shake-hands
For third person, there will be N-1-1-1 = N-3, and So On…
Therefore the total number of handshake   =   ( N – 1 + N – 2 +….+ 1 + 0 )   =   ( (N-1) * N ) / 2.

*/

#include <stdio.h>

int handShakes(int A);
int main () 
{
  int person = 0, totalShakes = 0;
  printf("Enter number of persons: ");
  scanf("%d", &person);

  totalShakes = handShakes(person);

 printf("For %d people there will be %d handshakes", person, totalShakes);
 return 0;
}

int handShakes(int A)
{
    int handshake = 0;
  // Using loop
    for (int i = 1; i <=A; i++)
    {
        handshake += A-i;
    }
 // Using formula
    // handshake = ((A-1)*A)/2;
    return handshake;
}