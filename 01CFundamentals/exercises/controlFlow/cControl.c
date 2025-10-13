#include <stdio.h>

int main()
    {
        int x, y, a, b, c, d, e, f, g,
        BlackSheepCount, WhiteSheepCount, DaysUntilTheEndOfTheWorld,
        TempOutside, currVel;

        a = x == y;

        b = BlackSheepCount == 2 * WhiteSheepCount; /* == operator is low prio*/
        
        c = DaysUntilTheEndOfTheWorld != 0; 

        d = BlackSheepCount > WhiteSheepCount;

        e = TempOutside >= 0.0;

        f = currVel < 110;
        g = currVel <= 110;

        printf 
        ("%d \n %d \n %d \n %d \n %d \n %d \n %d \n", a, b, c, d, e, f, g);

        return 0;
    }