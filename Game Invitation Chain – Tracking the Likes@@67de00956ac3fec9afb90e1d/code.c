// Your code here...
#include <math.h>

int totalLikes(int n)
{
    // 1 
    //    => 5 people
    // 2
    //    => 5 / 2 => 2 + like(0) then share each with (2 * 3) +  => 15
    // 3
    //    => 15 / 2 => 7 + like(2) then share each with (15 * 3) => 45
    // 4
    //.   => 45 / 2
    int people = 5;
    int like = 0;
    for (int i = 2; i <= n; i++) {
        int before = people;
        int newpeople = before / 2;
        like += newpeople;
        people = (newpeople * 3);
    }
    return like;
}