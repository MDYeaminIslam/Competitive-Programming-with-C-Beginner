//if – else একটা লজিক্যাল টেস্ট যদি সত্য হয়, তাহলে কিছু কাজ করবে। যদি মিথ্যে হয়, তাহলে অন্য কাজ।
// এ লজিক থেকেই if else. যেমনঃ যদি আজ শুক্রবার হয়, ঘুমাবো। না হলে ব্যাগ গুছিয়ে স্কুল/কলেজে যাবো।
//এমন ধরনের “যদি, তা নাহলে” থেকেই if – else।
#include <stdio.h>
int main(void)
{
    int day;
    printf("Enter value of day: ");
    scanf("%c",&day);
    if((day=='F')|| (day=='f')){
      printf("You can sleep today! :D");
    } else {
        printf("oh no! have to go to class :'( ");
    }
    return 0;
}
