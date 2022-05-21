//“scanf” ফাংশন ব্যবহারের নিয়মঃ
//scanf(control string, argument1, argument2,……..argumentn);
//printf(control string, argument1, argument2,……..argumentn);
//এখানে control string দ্বারা কোন ধরনের Data Output দিবে তার ফরমেট বুঝায়।
#include <stdio.h>
int main(void)

{
    float gpa;
    printf("Enter your SSC GPA:" );
    scanf("%f",&gpa);
    printf("You SSC GPA: %f \n",gpa);
    return 0;
}
