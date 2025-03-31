// Your code here...
#include <math.h>

int totalLikes(int n)
{
    // 0 
    //    => 5 people
    // 1
    //    => 5 / 2 => 2 + like(0) then share each with (2 * 3)  => 6
    // 2
    //    => 6 / 2 => 3 + like(2) then share each with (3 * 3) => 9
    // 3
    //.   => 9 / 2 => 4 + like(5) then share each with (4 * 3) => 12
    // ...
    int people = 5;
    int like = 0;
    for (int i = 1; i <= n; i++) {
        like += people / 2;
        people = (people / 2 * 3);
    }
    return like;
}