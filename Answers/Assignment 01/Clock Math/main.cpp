#include <bits/stdc++.h>

using namespace std;

int main()
{
    int hour,minute;

    cin>>hour>>minute;


    if(hour == 12)
        hour = 0;
    if ( minute == 60)
        minute = 0;


    double hour_hand = (30*hour + 0.5*minute);
    double minute_hand = (6*minute);

    double x = hour_hand - minute_hand;

    if(x < 0)
        x = (-1)*x;

    double result = min(x, (360 - x));

    printf("%0.7f",result);

    return 0;
}
