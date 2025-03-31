// Your code here...

int totalLikes(int n)
{
    // 1 
    //    => 5 people
    // 2
    //    => 5 / 2 => 3 people = 3 + like(0) then share each with (people * 3) + people => 3 * 3 + 3 = 12
    // 3
    //    => 12 / 2 => 6 people = like(3) + people(6) == 9
    int people = 5;
    int like = 0;
    for (int i = 2; i <= n; i++) {
        people /= 2 + 1;
        like += people;
        people = people * people + people;
    }
    return like;
}