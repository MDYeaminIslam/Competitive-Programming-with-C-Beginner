//Relational and Logical Operators are 3 types:
//Relational Operator
//Equlity Operator
//Logical Operator.

//সি প্রোগ্রামিং এর ৪ ধরনের Relational Operator বিদ্যমান সেগুলো হলোঃ
// "<"-Less than
// "<="-Less than or equal to
// ">"- Greater than
// ">="- Greater than or equal to

//সি প্রোগ্রামিং এর ২ ধরনের Equlity Operator বিদ্যমান সেগুলো হলোঃ
// "==" -Equal To
// "!=" - Not Equal to

//সি প্রোগ্রামিং এর ২ ধরনের Logical Operator বিদ্যমান সেগুলো হলোঃ
// "&&" - And -(এই ক্ষেত্রে && অপারেটর এর উভয় পাশে ভ্যালুর মান সত্য হলে পুরোটা সত্য অন্যথায় মিথ্যা। )
// "||" - OR - (এই ক্ষেত্রে || অপারেটর এর যেকোন পাশে ভ্যালুর মান সত্য হলে পুরোটা সত্য।)
// True value কে রিপ্রেজেন্ট করে 1;
// Flase value কে রিপ্রেজেন্ট করে ০;
#include<stdio.h>
int main()
{
    int v1=2,v2=3,v3=3,v4=5,z = 10,z1;
    printf("%d\n",v1<v2);
    printf("%d\n",v1>v2);

    //Uninary Operator ২ ধরনেরঃ
    // "++" - Increment Operator
    // "--" - Decrement Operator
    v3++;
    printf("%d\n",v3);
    v4--;
    printf("%d\n",v4);

    //Conditional Operator:
    // লেখার নিয়মঃ Condition ? Expression1 : Expresssion2;
    z1 = (z<11)? 10:11;
    printf("%d\n",z1);
    return 0;
}