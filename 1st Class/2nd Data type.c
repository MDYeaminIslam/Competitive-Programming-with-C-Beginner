// Variable হচ্ছে একটি নাম যা দিয়ে কম্পিউটারে মেমোরিতে কোন ডাটা রাখা হয়।
// Variable এ কোন ধরনের ডাটা রাখতে হবে অইটাই হচ্ছে Data Type.
//      সি তে বেশ কিছু ডাটা টাইপ আছে । কিন্তু প্রধান ৪ টা হচ্ছেঃ
// 1.Integer Data Type (int)
// 2.Character Data Type (Char)
// 3.Float Data Type (float)
// 4.Double Data Type (double)
// data type গুলো প্রিন্ট গুলা গুলার জন্য placeholder এর প্রয়োজন পরে।
// int=%d
// char=%c
// float=%f
// double=%lfc
//      এইবার ডাটা টাইপ গুলো প্রিন্ট করে দেখা যাক।
// Data Type  গুলো লেখার নিয়মঃ
// Data_type Variable_name = value;
#include<stdio.h>
int main()
{
    int int_value = 10;
    char char_value = 'A';
    float float_value = 10.89;      //  দশমিক এর পর ৬ ঘর পর্যন্ত ভ্যালু ঠিকমত প্রিন্ট করতে পারে।
    double double_value = 10.907807079; //দশমিক এর পর 15 ঘর পর্যন্ত ভ্যালু ঠিকমত প্রিন্ট করতে পারে/
    double double_value2 = 10.90780707909834934;

    printf("%d\n",int_value);     //এইখানে  "\n" হচ্ছে এক ধরনের Escape sequence যার নাম Line feed.
    printf("%c\n",char_value);
    printf("%f\n",float_value);
    printf("%lf\n",double_value);
    printf("%.14lf\n",double_value2); // আমরা এইখানে দশমিক এর পর ১৪ ঘর পর্যন্ত ভ্যালু জানতে চাচ্ছি তাই % এর পর (.14lf) ব্যবহার করেছি।যত ঘর নিয়ে কাজ করতে চাই তত সংখ্যা লিখে দিলেই চলবে।
    return 0;

}
//  int data type size = 2 byte/16 bit (range=(-32768 to +32767))
//  char data type size = 1 byte/8 bit (range =(-128 to +127))
//  float data type size = 4 byte/16 bit (range= (.2E-38 to 3.4E+38))
//  double data type size = 8 byte/64 bit (Range = 2.3E-308 to 1.7E+308))
//  visit this link for better understanding: https://prepinsta.com/all-about-c-language/range-of-data-types-in-c/
//  Escape sequence link: https://www.educba.com/escape-sequence-in-c/
//  We can use // for comment or /* Comments */
