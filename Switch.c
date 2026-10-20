#include<stdio.h>
int main ()
{
    char name[100][50];
    int prices[100];
    int quantities[100];
    int subtotal[100];
    int count=0;
    int choice,item,choose,total=0,subitem,price,quantity;
    char again;
    do
    {
    price=0;
    printf("***********************Arabian Nights***********************\n");
    printf("<<<<<<<<<<<<Welcome to our restaurant>>>>>>>>>>>>\n");
    printf("MENUE\n");
    printf("1.Chinese\n2.Veg\n3.Non-Veg\n4.Mandi\n5.Soups\n6.Beverages\n7.Desserts\n");
    printf("Enter your choice:\n");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
    printf("\n1.Noodles");
    printf("\n2.fried rice\n3.Manchurian\n4.Rice\n5.Chicken 65\n");
    printf("Enter your item:\n");
    scanf("%d",&item);
    switch(item)
    {
        case 1:
        printf("\n1.Veg Noodles\n2.Hakka Noodles\n3.Chicken Noodles\n4.Egg Noodles\n");
        printf("Select Item\n");
        scanf("%d",&subitem);
        switch(subitem)
        {
        case 1:
        price=100;
        break;
        case 2:
        price=120;
        break;
        case 3:
        price=140;
        break;
        case 4:
        price=120;
        break;
        default:
        price=0;
        printf("Please Secelt Item");
        break;
        }
        break;
        case 2:
        printf("\n1.Veg fried rice\n2.Chicken fried rice\n3.Egg fried rice\n4.Prawn fried rice\n");
        printf("Select Item\n");
        scanf("%d",&subitem);
        switch(subitem)
        {
            case 1:
            price=60;
            break;
            case 2:
            price=80;
            break;
            case 3:
            price=60;
            break;
            case 4:
            price=100;
            break;
            default:
            price=0;
            printf("Please select item\n");
            break;
        }
        break;
        case 3:
        printf("\n1.Veg Manchurian\n2.Chicken Manchurian\n3.Prawn Manchurian-\n");
        printf("Select Items\n");
        scanf("%d",&subitem);
        switch(subitem)
        {
            case 1:
            price=60;
            break;
            case 2:
            price=80;
            break;
            case 3:
            price=100;
            break;
            default:
            price=0;
            printf("Please Select Item\n");
            break;
        }
        break;
        case 4:
        printf("\n1.Lemon rice\n2.Tamarind rice\n3.Curd rice\n4.Tomato rice\n");
        printf("Select Item\n");
        scanf("%d",&subitem);
        switch(subitem)
        {
            case 1:
            price=50;
            break;
            case 2:
            price=60;
            break;
            case 3:
            price=60;
            break;
            case 4:
            price=50;
            break;
            default:
            price=0;
            printf("Please Select Item");
            break;
        }
        break;
        case 5:
        printf("\n1.Chicken 65\n2.Chicken 65 with rice\n3.Chicken 65 with noodles\n4.Chicken 65 with fried rice\n");
        printf("Select Item");
        scanf("%d",&subitem);
        switch(subitem)
        {
            case 1:
            price=70;
            break;
            case 2:
            price=120;
            break;
            case 3:
            price=150;
            break;
            case 4:
            price=130;
            break;
            default:
            price=0;
            printf("Please Se'ect Item\n");
            break;
        }
        break;
        default:
        printf("order from 1-5");
    }
    break;
    case 2:
    printf("\n1.veg Briyani\n2.Veg fried rice\n3.Veg Manchurian\n4.Veg 65\n");
    printf("Select Item\n");
    scanf("%d",&subitem);
    switch(subitem)
    {
        case 1:
        price=100;
        break;
        case 2:
        price=60;
        break;
        case 3:
        price=70;
        break;
        case 4:
        price=80;
        break;
        default:
        price=0;
        printf("Please Select Item\n");
        break; 
    }
    break;
    case 3:
    printf("\n1.Motton Briyani\n2.Chicken Biryani\n3.Zaffrani Motton Biryani\n4.Zaffrani Chicken Biryani\n");
    printf("Select Item\n");
    scanf("%d",&subitem);
    switch (subitem)
    {
        case 1:
        price=180;
        break;
        case 2:
        price=160;
        break;
        case 3:
        price=220;
        break;
        case 4:
        price=240;
        break;
        default:
        price=0;
        printf("Please Select Item\n");
        break;
    }
    break;
    case 4:
    printf("\n1.Motton Mandi\n2.Chicken Mandi\n3.Fish Mandi\n4.Mix Mandi\n");
    printf("Select Item\n");
    scanf("%d",&subitem);
    switch(subitem)
    {
        case 1:
        price=250;
        break;
        case 2:
        price=200;
        break;
        case 3:
        price=220;
        break;
        case 4:
        price=350;
        break;
        default:
        price=0;
        printf("Please Select Item\n");
        break;
    }
    break;
    case 5:
    printf("\n1.vegitable soup\n2.Chicken soup\n3.Mutton soup\n4.Fish soup\n");
    printf("Select Item\n");
    scanf("%d",&subitem);
    switch(subitem)
    {
        case 1:
        price=100;
        break;
        case 2:
        price=120;
        break;
        case 3:
        price=150;
        break;
        case 4:
        price=130;
        break;
        default:
        price=0;
        printf("Please Select Item\n");
        break;
    }
    break;
    case 6:
    printf("\n1.cold drinks\n2.hot drinks\n");
    printf("Enter your item:\n");
    scanf("%d",&choose);
    switch(choose)
    {
        case 1:
        printf("\n1.Coke\n2.Sprite\n3.Fanta\n4.Thumbs up\n");
        printf("Select Item\n");
        scanf("%d",&subitem);
        switch(subitem)
        {
            case 1:
            price=30;
            break;
            case 2:
            price=30;
            break;
            case 3:
            price=30;
            break;
            case 4:
            price=30;
            break;
            default:
            price=0;
            printf("Please Select Item\n");
            break;
        }
        break;
        case 2:
        printf("\n1.Tea\n2.Coffee\n3.Hot chocolate\n4.Masala tea\n");
        printf("Select Item\n");
        scanf("%d",&subitem);
        switch(subitem)
        {
            case 1:
            price=20;
            break;
            case 2:
            price=40;
            break;
            case 3:
            price=60;
            break;
            case 4:
            price=30;
            break;
            default:
            price=0;
            printf("Please Select Item\n");
            break;
        }
        break;
        default:
        printf("order from 1-2");
        break;
    }
    break;
    case 7:
    printf("\n1.ice cream\n2.cake\n3.pastries\n4.chocolate\n");
    printf("Select Item\n");
    scanf("%d",&subitem);
    switch(subitem)
    {
        case 1:
        price=30;
        break;
        case 2:
        price=50;
        break;
        case 3:
        price=40;
        break;
        case 4:
        price=30;
        break;
        default:
        price=0;
        printf("Please Select Item\n");
        break;
    }
    break;
    default:
    price=0;
    printf("order from 1-7");
}
if(price>0)
{
    printf("Enter Quantity:\n");
    scanf("%d",&quantity);
    if(quantity<=0)
    {
        printf("Invalid Quantity!\n");
        continue;
    }
    prices[count]=price;
    quantities[count]=quantity;
    subtotal[count]=price*quantity;
    sprintf(name[count],"Item %d",count+1);
    total=total+subtotal[count];
    count++;
    printf("Subtotal=%d\n",subtotal[count-1]);
}
printf("Do you want to order more?(y/n)\n");
scanf(" %c",&again);
    }
    while(again=='y' || again=='Y');
    printf("\n========= FINAL BILL =========\n");
    int i;
    for(i=0;i<count;i++)
    {
        printf("%s|Qty:%d|Price:%d\n",name[i],quantities[i],subtotal[i]);
    }
    printf("Total Amount=%d\n",total);
printf("\nThank you for visiting Arabian Nights\n");
return 0;
}