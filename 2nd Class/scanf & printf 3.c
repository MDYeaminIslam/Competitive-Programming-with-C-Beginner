//এর আগে আমরা একটি মাত্র ভ্যালু ইনপুট এবং আউটপুট দিয়েছি। আমরা চাইলে দুইটা মান একই সাথে ইনপুট বা আউটপুট দিয়ে পারি। ইনপুটের জন্য লিখব এভাবেঃ

#include <stdio.h>
int main(void)
{
    char name[50];
    int id;
    float gpa;

    printf("Enter your name, id and gpa: \n");

    scanf("%s %d %f", &name, &id, &gpa);
    printf("Name: %s ID: %d GPA: %f \n", name, id, gpa);

    return 0;
}
