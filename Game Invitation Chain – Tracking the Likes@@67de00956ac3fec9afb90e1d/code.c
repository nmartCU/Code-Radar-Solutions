// Your code here...
#include <math.h>

int totalLikes(int n)
{
    // 1 
    //    => 5 people
    // 2
    //    => 5 / 2 => 2 people = 2 + like(0) then share each with (2 * 5) + people => 15
    // 3
    //    => 15 / 2 => 7 people = like(2) + people(7) == 9
    int people = 5;
    int like = 0;
    for (int i = 2; i <= n; i++) {
        people /= 2;
        printf("people is: %d\n", people);
        like += people;
        people = (5 * people) + people;
    }
    return like;
}