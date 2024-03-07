/* Exercise that simulates an american elevator */

#include <stdio.h>
int	main(void){
    //	declare/define	variables
    int	floor,	actualFloor;
    //	Obtain floor number	from the user as an	integer
    printf("Floor : ");
    // I use %d because I except that user enter an integer value
    scanf("%d",	&floor);
    /*	Adjust floor if	necessary. */
    if	(floor	>	13) {
        actualFloor = floor-1;
    } else {
        actualFloor	=	floor;
        // Print the result.
    }
    printf("The	elevator will travel to	the	"
          "actual	floor	%d\n",	actualFloor);
}