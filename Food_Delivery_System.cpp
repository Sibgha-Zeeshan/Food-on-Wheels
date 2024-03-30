#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
char c, m;
int i = 0, tot = 0, y = 0;
int a1 = 0, a2 = 0, a3 = 0, a4 = 0, a5 = 0, a6 = 0, a7 = 0, a8 = 0, a9 = 0, a10 = 0, a11 = 0, a12 = 0, a13 = 0, a14 = 0, a15 = 0;
string arr1[50] = {"1.Pad_Thai", "2.Mongolian_Beef", "3.Chicken_Munchurian", "4.Chicken_Shashlik", "5.Tiramisu", "6.DaalChaawal", "7.Cheesecake", "8.Feiry_Pepper_Chicken", "9.Mixed_vegetables", "A.Biryani", "B.Pulau", "C.Pepsi", "D.Fanta", "E.7up", "F.Mineral_Water"};
string arr2[50] = {"345", "400", "678", "810", "367", "150", "500", "790", "200", "250", "250", "80", "80", "80", "50"};
class Customer
{
public:
    string newname, newpass, name, pass;
    int f;
    void u()
    {
        int choice = 1;
        while (choice != 0)
        {
            cout << "\t\t\t\t ____________________________________________________________________________________" << endl;
            cout << "\t\t\t\t|                                                                                    |" << endl;
            cout << "\t\t\t\t|                        W   E    L    C    O    M    E                              |" << endl;
            cout << "\t\t\t\t|____________________________________________________________________________________|" << endl;
            cout << "\t\t\t\t_____________________________________________________________________________________" << endl;
            cout << "\t\t\t\t|                                                                                    |" << endl;
            cout << "\t\t\t\t|   press 1 registration                                                             |" << endl;
            cout << "\t\t\t\t|   press 2 for log in                                                               |" << endl;
            cout << "\t\t\t\t|   press 3 for menu                                                                 |" << endl;
            cout << "\t\t\t\t|   press 0 for exist                                                                |" << endl;
            cout << "\t\t\t\t|____________________________________________________________________________________|" << endl;
            cout << "enter your choice ";
            cin >> choice;
            switch (choice)
            {
            case 0:
                break;
            case 1:
                registration();
                break;
            case 2:
                login();
                break;
            case 3:
                main();
            default:
                cout << "Enter Valid Number" << endl;
            }
        }
    }

    void registration()
    {
        cout << "\t\t\t\t ____________________________________________________________________________________" << endl;
        cout << "\t\t\t\t|                                                                                    |" << endl;
        cout << "\t\t\t\t|                 W E L C O M E  T O    R E G I S T R A T I O N                      |" << endl;
        cout << "\t\t\t\t|____________________________________________________________________________________|" << endl;
        cout << "\t\t\t\t enter new user name= " << endl;
        cin >> newname;
        cout << "\t\t\t\t enter new password= " << endl;
        cin >> newpass;
        system("cls");
        cout << "\t\t\t\t ____________________________________________________________________________________" << endl;
        cout << "\t\t\t\t|                                                                                    |" << endl;
        cout << "\t\t\t\t|  Y O U    A R E    S U C C E S S F U L L Y       R E G I S T R E D                 |" << endl;
        cout << "\t\t\t\t|____________________________________________________________________________________|" << endl;
    }
    void login()
    {
        cout << "\t\t\t\t ____________________________________________________________________________________" << endl;
        cout << "\t\t\t\t|                                                                                    |" << endl;
        cout << "\t\t\t\t|                 W E L C O M E  T O    L O G I N                                    |" << endl;
        cout << "\t\t\t\t|____________________________________________________________________________________|" << endl;
        cout << "\t\t\t\t enter  name= " << endl;
        cin >> name;
        cout << "\t\t\t\t enter password= " << endl;
        cin >> pass;
        system("cls");
        if (newname == name && newpass == pass)
        {
            cout << "\t\t\t\t ____________________________________________________________________________________" << endl;
            cout << "\t\t\t\t|                                                                                    |" << endl;
            cout << "\t\t\t\t|  Y O U    A R E    S U C C E S S F U L L Y       L O G I N                         |" << endl;
            cout << "\t\t\t\t|____________________________________________________________________________________|" << endl;
        }
        else
        {
            cout << "\t\t\t\t ____________________________________________________________________________________" << endl;
            cout << "\t\t\t\t|                                                                                    |" << endl;
            cout << "\t\t\t\t|                         W R O N G     P A S S W O R D                              |" << endl;
            cout << "\t\t\t\t|____________________________________________________________________________________|" << endl;
        }
        cout << "enter 1 if you forgot your password and enter 0 if you are login" << endl;
        cin >> f;
        if (f == 1)
        {
            cout << "\t\t\t\t ____________________________________________________________________________________" << endl;
            cout << "\t\t\t\t|                                                                                    |" << endl;
            cout << "\t\t\t\t|                    F O R G O T         P A S S W O R D                             |" << endl;
            cout << "\t\t\t\t|____________________________________________________________________________________|" << endl;
            int option;
            cout << "\t\t\t you forgot the password? no worries \n";
            cout << "press 1 to search your id by username " << endl;
            cin >> option;
            switch (option)
            {
            case 1:
            {
                int count = 0;
                string suserId;
                cout << "\n\t\t\tenter the username which you remembered :";
                cin >> suserId;
                if (suserId == newname)
                {
                    count = 1;
                }
                if (count == 1)
                {
                    cout << "\n\n your account is found! \n";
                    cout << "\n\n your password is : " << newpass << endl;
                }
                else
                {
                    cout << "\n\t sorry! your account is not found! \n";
                }
                u();
                break;
            }
            }
        }
        if (f == 0)
        {
            main();
        }
    }
    void main()
    {
        int c = 1;
        int f;
        cout << "enter 1 if you want to continue and 0 if you want to go back" << endl;
        cin >> f;
        if (f == 1)
        {
            while (c != 0)
            {
                cout << "press 1 to view food details" << endl;
                cout << "press 2 to add to cart" << endl;
                cout << "press 3 to place order" << endl;
                cout << "press 4 to cancel order" << endl;
                cout << "press 5 to update cart" << endl;
                cout << "press 6 to pay cash on delivery" << endl;
                cout << "press 7 to check food delivery status" << endl;
                cout << "press 0 to exit" << endl;
                cout << "enter your choice=" << endl;
                cin >> c;
                switch (c)
                {

                case 1:
                    cuisine();
                    break;

                case 2:

                    cart();

                    break;

                case 3:

                    placeorder();

                    break;
                case 4:

                    cancelorder();

                    break;

                case 5:

                    updatecart();

                    break;

                case 6:

                    cashondelivery();
                    break;
                case 7:

                    fooddeliverystatus();
                    break;

                case 0:
                    break;

                default:
                    cout << "\aInvalid Input" << endl;
                    break;
                }
            }
        }
    }

    void cuisine()
    {
        char a;
        cout << "-------------Menu--------------" << endl;
        cout << "----DISH---(SERVES 1 PERSON)---PRICE ----" << endl;
        for (int i = 0; i < 50; i++)
        {
            cout << arr1[i] << "       " << arr2[i] << endl;
        }
        do
        {
            cout << "enter your choice and enter b to exit" << endl;
            cin >> a;

            switch (a)
            {
            case '1':
                cout << "\nselected\n";
                a1++;
                break;
            case '2':
                cout << "\nselected\n";
                a2++;
                break;
            case '3':
                cout << "\nselected\n";
                a3++;
                break;
            case '4':
                cout << "\nselected\n";
                a4++;
                break;
            case '5':
                cout << "\nselected\n";
                a5++;
                break;
            case '6':
                cout << "\nselected\n";
                a6++;
                break;
            case '7':
                cout << "\nselected\n";
                a7++;
                break;
            case '8':
                cout << "\nselected\n";
                a8++;
                break;
            case '9':
                cout << "\nselected\n";
                a9++;
                break;
            case 'A':
                cout << "\nselected\n";
                a10++;
                break;
            case 'B':
                cout << "\nselected\n";
                a11++;
                break;
            case 'C':
                cout << "\nselected\n";
                a12++;
                break;
            case 'D':
                cout << "\nselected\n";
                a13++;
                break;
            case 'E':
                cout << "\nselected\n";
                a14++;
                break;
            case 'F':
                cout << "\nselected\n";
                a15++;
                break;
            default:
                cout << "\n invalid input\n";
            }
        } while (a != 'b');
        if (a == 'b')
        {
            system("cls");
            main();
        }
    }
    void cart()
    {
        char z, b;
        int total = 0;
        time_t rawtime;
        struct tm *timeinfo;
        time(&rawtime);
        timeinfo = localtime(&rawtime);
        cout << (asctime(timeinfo));
        cout << "\nDISHES\t\t\t\t\tPRICE (PKR)\n\n"
             << endl;
        if (a1 > 0)
        {
            cout << "Pad_Thai 	    = " << 345 * a1 << "      "
                 << "QUANTITY = " << a1 << "\n";
            total += (345 * a1);
            y++;
        }
        if (a2 > 0)
        {
            cout << "Mongolian_Beef	     = " << 400 * a2 << "      "
                 << "QUANTITY = " << a2 << "\n";
            total += (400 * a2);
            y++;
        }
        if (a3 > 0)
        {
            cout << "Chicken_Munchurian      			  = " << 678 * a3 << "      "
                 << "QUANTITY = " << a3 << "\n";
            total += (678 * a3);
            y++;
        }
        if (a4 > 0)
        {
            cout << "Chicken_Shashlik       	  = " << 810 * a4 << "      "
                 << "QUANTITY = " << a4 << "\n";
            total += (810 * a4);
            y++;
        }
        if (a5 > 0)
        {
            cout << "Tiramisu           	  = " << 367 * a5 << "      "
                 << "QUANTITY = " << a5 << "\n";
            total += (367 * a5);
            y++;
        }
        if (a6 > 0)
        {
            cout << "DaalChaawal			 			 = " << 150 * a6 << "      "
                 << "QUANTITY = " << a6 << "\n";
            total += (150 * a6);
            y++;
        }
        if (a7 > 0)
        {
            cout << "Cheesecake     						 = " << 500 * a7 << "      "
                 << "QUANTITY = " << a7 << "\n";
            total += (500 * a7);
            y++;
        }
        if (a8 > 0)
        {
            cout << "Feiry_Pepper_Chicken     					 = " << 790 * a8 << "      "
                 << "QUANTITY = " << a8 << "\n";
            total += (790 * a8);
            y++;
        }
        if (a9 > 0)
        {
            cout << "Mixed_Vegetables       						 = " << 200 * a9 << "      "
                 << "QUANTITY = " << a9 << "\n";
            total += (200 * a9);
            y++;
        }
        if (a10 > 0)
        {
            cout << "Biryani            	  		 = " << 250 * a10 << "      "
                 << "QUANTITY = " << a10 << "\n";
            total += (250 * a10);
            y++;
        }
        if (a11 > 0)
        {
            cout << "Pulau 			  	= " << 250 * a11 << "      "
                 << "QUANTITY = " << a11 << "\n";
            total += (250 * a11);
            y++;
        }
        if (a12 > 0)
        {
            cout << "Pepsi   			    = " << 80 * a12 << "      "
                 << "QUANTITY = " << a12 << "\n";
            total += (80 * a12);
            y++;
        }
        if (a13 > 0)
        {
            cout << "Fanta      					    = " << 80 * a13 << "      "
                 << "QUANTITY = " << a13 << "\n";
            total += (80 * a13);
            y++;
        }
        if (a14 > 0)
        {
            cout << "7up        			    = " << 80 * a14 << "      "
                 << "QUANTITY = " << a14 << "\n";
            total += (200 * a14);
            y++;
        }
        if (a15 > 0)
        {
            cout << "Mineral_Water				                 	= " << 50 * a15 << "      "
                 << "QUANTITY = " << a15 << "\n";
            total += (50 * a15);
            y++;
        }
    }
    void placeorder()
    {
        char z, b;
        int total = 0;
        time_t rawtime;
        struct tm *timeinfo;
        time(&rawtime);
        timeinfo = localtime(&rawtime);
        cout << (asctime(timeinfo));
        cout << "\nDISHES\t\t\t\t\tPRICE (PKR)\n\n"
             << endl;
        if (a1 > 0)
        {
            cout << "Pad_Thai 	    = " << 345 * a1 << "      "
                 << "QUANTITY = " << a1 << "\n";
            total += (345 * a1);
            y++;
        }
        if (a2 > 0)
        {
            cout << "Mongolian_Beef	     = " << 400 * a2 << "      "
                 << "QUANTITY = " << a2 << "\n";
            total += (400 * a2);
            y++;
        }
        if (a3 > 0)
        {
            cout << "Chicken_Munchurian      			  = " << 678 * a3 << "      "
                 << "QUANTITY = " << a3 << "\n";
            total += (678 * a3);
            y++;
        }
        if (a4 > 0)
        {
            cout << "Chicken_Shashlik       	  = " << 810 * a4 << "      "
                 << "QUANTITY = " << a4 << "\n";
            total += (810 * a4);
            y++;
        }
        if (a5 > 0)
        {
            cout << "Tiramisu           	  = " << 367 * a5 << "      "
                 << "QUANTITY = " << a5 << "\n";
            total += (367 * a5);
            y++;
        }
        if (a6 > 0)
        {
            cout << "DaalChaawal			 			 = " << 150 * a6 << "      "
                 << "QUANTITY = " << a6 << "\n";
            total += (150 * a6);
            y++;
        }
        if (a7 > 0)
        {
            cout << "Cheesecake     						 = " << 500 * a7 << "      "
                 << "QUANTITY = " << a7 << "\n";
            total += (500 * a7);
            y++;
        }
        if (a8 > 0)
        {
            cout << "Feiry_Pepper_Chicken     					 = " << 790 * a8 << "      "
                 << "QUANTITY = " << a8 << "\n";
            total += (790 * a8);
            y++;
        }
        if (a9 > 0)
        {
            cout << "Mixed_Vegetables       						 = " << 200 * a9 << "      "
                 << "QUANTITY = " << a9 << "\n";
            total += (200 * a9);
            y++;
        }
        if (a10 > 0)
        {
            cout << "Biryani            	  		 = " << 250 * a10 << "      "
                 << "QUANTITY = " << a10 << "\n";
            total += (250 * a10);
            y++;
        }
        if (a11 > 0)
        {
            cout << "Pulau 			  	= " << 250 * a11 << "      "
                 << "QUANTITY = " << a11 << "\n";
            total += (250 * a11);
            y++;
        }
        if (a12 > 0)
        {
            cout << "Pepsi   			    = " << 80 * a12 << "      "
                 << "QUANTITY = " << a12 << "\n";
            total += (80 * a12);
            y++;
        }
        if (a13 > 0)
        {
            cout << "Fanta      					    = " << 80 * a13 << "      "
                 << "QUANTITY = " << a13 << "\n";
            total += (80 * a13);
            y++;
        }
        if (a14 > 0)
        {
            cout << "7up        			    = " << 80 * a14 << "      "
                 << "QUANTITY = " << a14 << "\n";
            total += (200 * a14);
            y++;
        }
        if (a15 > 0)
        {
            cout << "Mineral_Water				                 	= " << 50 * a15 << "      "
                 << "QUANTITY = " << a15 << "\n";
            total += (50 * a15);
            y++;
        }
        cout << "TOTAL BILL      = " << total << endl
             << "TOTAL DISHES    = " << y << endl;
        tot += total;

        cout << "\nPRESS b TO GO BACK" << endl;

        cin >> z;

        if (z == 'b')
        {
            a1 = 0, a2 = 0, a3 = 0, a4 = 0, a5 = 0, a6 = 0, a7 = 0, a8 = 0, a9 = 0, a10 = 0, a11 = 0, a12 = 0, a13 = 0, a14 = 0, a15 = 0;
            b++;
        }
    }
    void cancelorder()
    {
        int c;
        cout << "if u want to cancel order then press 1" << endl;
        cout << "if u do not want to canccel order then press 0" << endl;
        cin >> c;
        if (c == 1)
        {
            tot = 0;
            cout << "your order is cancel" << endl;
        }
        if (c == 0)
        {
            cout << "not cancel your order" << endl;
        }
    }
    void updatecart()
    {
        int u;
        cout << "if you want to update then press 1" << endl;
        cout << "if you donot want to update then press 0" << endl;
        cin >> u;
        system("cls");
        if (u == 1)
        {
            cuisine();
        }
    }
    void cashondelivery()
    {
        cout << "please pay cash on delivery" << endl;
    }
    void fooddeliverystatus()
    {
        int f;
        cout << "your food is delivered after 45 min" << endl;
        cout << "if your order is not deliverd in 45 min then please wait for 20 to 30 min more" << endl;
        cout << "if your order is reached after given time then press 1 " << endl;
        cout << "if you order is not reached after given time then press 0" << endl;
        cout << "if your order is not reached and you want to cancel your order then press 2" << endl;
        cin >> f;
        if (f == 1)
        {
            cout << "order is reached" << endl;
        }
        if (f == 0)
        {
            cout << "order is not reached=" << endl;
        }
        if (f == 2)
        {
            cancelorder();
            cout << "your order was cancel" << endl;
        }
    }
};
class Restaurant : public Customer
{
public:
    string name = "Sibgha";
    string pass = "sib456";
    string n, p;
    void func()
    {
        cout << "enter name= " << endl;
        cin >> n;
        cout << "enter password= " << endl;
        cin >> p;
        if (n == name, p == pass)
        {
            int r = 1;
            int f;
            cout << "\t\t\t\t ____________________________________________________________________________________" << endl;
            cout << "\t\t\t\t|                                                                                    |" << endl;
            cout << "\t\t\t\t|                 W E L C O M E     T O     R E S T A U R A N T                      |" << endl;
            cout << "\t\t\t\t|____________________________________________________________________________________|" << endl;
            cout << "enter 1 if you want to continue and 0 if you want to go back" << endl;
            cin >> f;
            if (f == 1)
            {
                while (r != 0)
                {

                    cout << "\t\t\t\t_____________________________________________________________________________________" << endl;
                    cout << "\t\t\t\t|                                                                                    |" << endl;
                    cout << "\t\t\t\t|   press 1 to see food details                                                      |" << endl;
                    cout << "\t\t\t\t|   press 2 to add food details                                                      |" << endl;
                    cout << "\t\t\t\t|   press 3 to delete food details                                                   |" << endl;
                    cout << "\t\t\t\t|   press 4 to view order placed by customer and calculate bill                      |" << endl;
                    cout << "\t\t\t\t|   press 5 to check food delivery status                                            |" << endl;
                    cout << "\t\t\t\t|  press 0 for exist                                                                 |" << endl;
                    cout << "\t\t\t\t|____________________________________________________________________________________|" << endl;
                    cout << "\t\t\t\t|enter your choice ";
                    cin >> r;
                    system("cls");
                    switch (r)
                    {
                    case 0:
                        break;
                    case 1:
                        menu();
                        break;
                    case 2:
                        update();
                        break;
                    case 3:
                        delete1();
                        break;
                    case 4:
                        placeorder1();
                        break;
                    case 5:
                        fooddeliveystatus1();
                        break;
                    default:
                        cout << "Enter Valid Number" << endl;
                    }
                }
            }
        }
    }
    void menu()
    {
        cout << "-------------Menu--------------" << endl;
        cout << "----DISH---(SERVES 1 PERSON)---PRICE ----" << endl;
        for (int i = 0; i < 50; i++)
        {
            cout << arr1[i] << "       " << arr2[i] << endl;
        }
    }
    void update()
    {
        int u;
        cout << "press 1 for updating" << endl;
        cout << "press 0 for nonupdating" << endl;
        cin >> u;
        int p = 0;
        if (u == 1)
        {
            string arr3[50];
            string arr4[50];
            int s1, s2, i = 15;
            cout << "enter size of first array: ";
            cin >> s1;
            s1 += 15;
            for (i = 15; i < s1; i++)
            {
                cout << "enter the name of item which you want to be added: ";
                cin >> arr4[i];
                arr1[i] = arr4[i];
            }
            p = i;
            s2 = s1;
            s2 -= 15;
            s2 += 15;
            for (i = 15; i < s2; i++)
            {
                cout << "enter the price of item which you want to added:";
                cin >> arr3[i];
                arr2[p] = arr3[i];
                p++;
            }
            cout << "menu updated" << endl;
            for (i = 0; i < p; i++)
                ;
            cout << arr1[i] << "\t\t\t\t\t" << arr2[i] << endl;
        }
        if (u == 0)
        {
            cout << "menu is remain same" << endl;
        }
    }
    int delete1()
    {
        int tot = 50, a1, a2, b1, b2, found = 0;
        string elem1, elem2;
        cout << "\nEnter dish to Delete: ";
        cin >> elem1;
        for (a1 = 0; a1 < tot; a1++)
        {
            if (arr1[a1] == elem1)
            {
                for (b1 = a1; b1 < (tot - 1); b1++)
                    arr1[b1] = arr1[b1 + 1];
                found++;
                a1--;
                tot--;
            }
        }
        if (found == 0)
        {
            cout << "\nElement doesn't found in the Array!";
        }
        else
        {
            cout << "\nElement Deleted Successfully!";
        }
        cout << "\nEnter price of the dish you deleted: ";
        cin >> elem2;
        for (a2 = 0; a2 < tot; a2++)
        {
            if (arr2[a2] == elem2)
            {
                for (b2 = a2; b2 < (tot - 1); b2++)
                    arr2[b2] = arr2[b2 + 1];
                found++;
                a2--;
                tot--;
            }
        }
        if (found == 0)
        {
            cout << "\nElement doesn't found in the Array!";
        }
        else
        {
            cout << "\nElement Deleted Successfully!";
        }
        return 0;
    }
    void placeorder1()
    {
        placeorder();
    }
    void fooddeliveystatus1()
    {
        int f;
        cout << "your food is delivered after 45 min" << endl;
        cout << "if your order is not deliverd in 45 min then please wait for 20 to 30 min more" << endl;
        cout << "if your order is reached after given time then press 1 " << endl;
        cout << "if you order is not reached after given time then press 0" << endl;
        cout << "if your order is not reached and you want to cancel your order then press 2" << endl;
        cin >> f;
        if (f == 1)
        {
            cout << "order is reached" << endl;
        }
        if (f == 0)
        {
            cout << "order is not reached=" << endl;
        }
        if (f == 2)
        {
            cancelorder();
            cout << "your order was cancel" << endl;
        }
    }
};
class Rider : public Restaurant
{
public:
    int h;
    void g()
    {
        int choice = 1;
        while (choice != 0)
        {
            cout << "\t\t\t\t ____________________________________________________________________________________" << endl;
            cout << "\t\t\t\t|                                                                                    |" << endl;
            cout << "\t\t\t\t|                        W   E    L    C    O    M    E                              |" << endl;
            cout << "\t\t\t\t|____________________________________________________________________________________|" << endl;
            cout << "\t\t\t\t_____________________________________________________________________________________" << endl;
            cout << "\t\t\t\t|                                                                                    |" << endl;
            cout << "\t\t\t\t|   press 1 registration                                                             |" << endl;
            cout << "\t\t\t\t|   press 2 for log in                                                             |" << endl;
            cout << "\t\t\t\t|   press 3 for menu                                                                |" << endl;
            cout << "\t\t\t\t|   press 0 for exist                                                                |" << endl;
            cout << "\t\t\t\t|____________________________________________________________________________________|" << endl;
            cout << "enter your choice ";
            cin >> choice;
            system("cls");
            switch (choice)
            {
            case 0:
                break;
            case 1:
                regis();
                break;
            case 2:
                log();
                break;
            case 3:
                f();
            default:
                cout << "Enter Valid Number" << endl;
            }
        }
    }
    void regis()
    {
        cout << "\t\t\t\t ____________________________________________________________________________________" << endl;
        cout << "\t\t\t\t|                                                                                    |" << endl;
        cout << "\t\t\t\t|                 W E L C O M E  T O    R E G I S T R A T I O N                      |" << endl;
        cout << "\t\t\t\t|____________________________________________________________________________________|" << endl;
        cout << "\t\t\t\t enter new user name= " << endl;
        cin >> newname;
        cout << "\t\t\t\t enter new password= " << endl;
        cin >> newpass;
        system("cls");
        cout << "\t\t\t\t ____________________________________________________________________________________" << endl;
        cout << "\t\t\t\t|                                                                                    |" << endl;
        cout << "\t\t\t\t|  Y O U    A R E    S U C C E S S F U L L Y       R E G I S T R E D                 |" << endl;
        cout << "\t\t\t\t|____________________________________________________________________________________|" << endl;
    }
    void log()
    {
        cout << "\t\t\t\t ____________________________________________________________________________________" << endl;
        cout << "\t\t\t\t|                                                                                    |" << endl;
        cout << "\t\t\t\t|                 W E L C O M E  T O    L O G I N                                    |" << endl;
        cout << "\t\t\t\t|____________________________________________________________________________________|" << endl;
        cout << "\t\t\t\t enter  name= " << endl;
        cin >> name;
        cout << "\t\t\t\t enter password= " << endl;
        cin >> pass;
        system("cls");
        if (newname == name && newpass == pass)
        {
            cout << "\t\t\t\t ____________________________________________________________________________________" << endl;
            cout << "\t\t\t\t|                                                                                    |" << endl;
            cout << "\t\t\t\t|  Y O U    A R E    S U C C E S S F U L L Y       L O G I N                         |" << endl;
            cout << "\t\t\t\t|____________________________________________________________________________________|" << endl;
        }
        else
        {
            cout << "\t\t\t\t ____________________________________________________________________________________" << endl;
            cout << "\t\t\t\t|                                                                                    |" << endl;
            cout << "\t\t\t\t|                         W R O N G     P A S S W O R D                              |" << endl;
            cout << "\t\t\t\t|____________________________________________________________________________________|" << endl;
        }
        cout << "enter 1 if you forgot your password and enter 0 if you are login" << endl;
        cin >> h;
        if (h == 1)
        {
            cout << "\t\t\t\t ____________________________________________________________________________________" << endl;
            cout << "\t\t\t\t|                                                                                    |" << endl;
            cout << "\t\t\t\t|                    F O R G O T         P A S S W O R D                             |" << endl;
            cout << "\t\t\t\t|____________________________________________________________________________________|" << endl;
            int option;
            cout << "\t\t\t you forgot the password? no worries \n";
            cout << "press 1 to search your id by username " << endl;
            cin >> option;
            switch (option)
            {
            case 1:
            {
                int count = 0;
                string suserId;
                cout << "\n\t\t\tenter the username which you remembered :";
                cin >> suserId;
                if (suserId == name)
                {
                    count = 1;
                }
                if (count == 1)
                {
                    cout << "\n\n your account is found! \n";
                    cout << "\n\n your password is : " << newpass << endl;
                }
                else
                {
                    cout << "\n\t sorry! your account is not found! \n";
                }
                login();
                break;
            }
            }
        }
        if (h == 0)
        {
            f();
        }
    }
    void f()
    {
        int c = 1;
        int f;
        cout << "enter 1 if you want to continue and 0 if you want to go back" << endl;
        cin >> f;
        if (f == 1)
        {
            while (c != 0)
            {
                cout << "press 1  View Order" << endl;
                cout << "press 2  Accept or reject delivery order" << endl;
                cout << "press 3  Update food delivery status" << endl;
                cout << "press 4  Cash collection updates" << endl;
                cout << "enter your choice=" << endl;
                cin >> c;
                switch (c)
                {

                case 1:
                    view();
                    break;

                case 2:
                    AR();

                    break;

                case 3:

                    up();

                    break;
                case 4:

                    cash();

                    break;

                case 0:
                    break;

                default:
                    cout << "\aInvalid Input" << endl;
                    break;
                }
            }
        }
    }
    void view()
    {
        placeorder();
    }
    void AR()
    {
        int orderr;
        cout << "DO YOU WANT TO ACCDEPT OR REJECT THE ORDER" << endl;
        cout << "press 1 to accept the order and 0 to reject" << endl;
        cin >> orderr;
        if (orderr == 1)
        {
            cout << "ACCEPTED" << endl;
        }

        else
        {
            cout << "REJECTED" << endl;
        }
    }
    void up()
    {
        fooddeliverystatus();
    }
    void cash()
    {
        int c;
        cout << "enter 1 if order is delivered and cash is paid" << endl;
        cin >> c;
        if (c == 1)
        {
            cout << "CASH COLLECTED: " << tot << endl;
        }
        else
        {
            cout << "cash is not paid" << endl;
        }
    }
};
class Admin : public Rider
{
public:
    string name = "Areeba";
    string pass = "456";
    string n, p;
    void A()
    {
        cout << "enter name= " << endl;
        cin >> n;
        cout << "enter password= " << endl;
        cin >> p;
        if (n == name, p == pass)
        {
            int r = 1;
            int j;
            cout << "\t\t\t\t ____________________________________________________________________________________" << endl;
            cout << "\t\t\t\t|                                                                                    |" << endl;
            cout << "\t\t\t\t|                                 A D M I N                                          |" << endl;
            cout << "\t\t\t\t|____________________________________________________________________________________|" << endl;
            cout << "enter 1 if you want to continue and 0 if you want to go back" << endl;
            cin >> j;
            if (j == 1)
            {
                while (r != 0)
                {

                    cout << "\t\t\t\t_____________________________________________________________________________________" << endl;
                    cout << "\t\t\t\t|                                                                                    |" << endl;
                    cout << "\t\t\t\t|   press 1 to manage vendor food                                                    |" << endl;
                    cout << "\t\t\t\t|   press 2 to manage customer                                                       |" << endl;
                    cout << "\t\t\t\t|   press 3 to see food order details                                                |" << endl;
                    cout << "\t\t\t\t|   press 4 to see payment details                                                   |" << endl;
                    cout << "\t\t\t\t|  press 0 for exist                                                                 |" << endl;
                    cout << "\t\t\t\t|____________________________________________________________________________________|" << endl;
                    cout << "\t\t\t\t|enter your choice ";
                    cin >> r;
                    system("cls");
                    switch (r)
                    {
                    case 0:
                        break;
                    case 1:
                        foo();
                        break;
                    case 2:
                        cu();
                        break;
                    case 3:
                        ory();
                        break;
                    case 4:
                        pay();
                        break;
                    default:
                        cout << "Enter Valid Number" << endl;
                    }
                }
            }
        }
    }
    void foo()
    {
        int fo;
        cout << "enter 1 if you want to see food menu" << endl;
        cout << "enter 2 if you want to add new dish in food menu" << endl;
        cout << "enter 3 if you want to delete any dish from food menu" << endl;
        cin >> fo;
        if (fo == 1)
        {
            menu();
        }
        if (fo == 2)
        {
            update();
        }
        if (fo == 3)
        {
            delete1();
        }
        if (fo == 3)
        {
            foo();
        }
    }
    void cu()
    {
        int cu;
        cout << "enter 1 if you want to see customer order" << endl;
        cout << "enter 2 if you want to cancel customer order" << endl;
        cin >> cu;
        if (cu == 1)
        {
            cart();
        }
        if (cu == 2)
        {
            cancelorder();
        }
    }
    void ory()
    {
        placeorder();
    }
    void pay()
    {
        cash();
    }
};
int main()
{
    Admin a;
    int choice = 1;

    while (choice != 0)
    {
        cout << "\t\t\t\t ____________________________________________________________________________________" << endl;
        cout << "\t\t\t\t|                                                                                    |" << endl;
        cout << "\t\t\t\t|                        W   E    L    C    O    M    E                              |" << endl;
        cout << "\t\t\t\t|____________________________________________________________________________________|" << endl;
        cout << "\t\t\t\t_____________________________________________________________________________________" << endl;
        cout << "\t\t\t\t|                                                                                    |" << endl;
        cout << "\t\t\t\t|   press 1 restaurant                                                               |" << endl;
        cout << "\t\t\t\t|   press 2 for customer                                                             |" << endl;
        cout << "\t\t\t\t|   press 3 for rider                                                                |" << endl;
        cout << "\t\t\t\t|   press 4 for Admin                                                                |" << endl;
        cout << "\t\t\t\t|   press 0 for exit                                                                |" << endl;
        cout << "\t\t\t\t|____________________________________________________________________________________|" << endl;
        cout << "enter your choice ";
        cin >> choice;
        system("cls");
        switch (choice)
        {
        case 0:
            break;
        case 1:
            a.func();
            break;
        case 2:
            a.u();
            break;
        case 3:
            a.g();
        case 4:
            a.A();
        default:
            cout << "Enter Valid Number" << endl;
        }
    }

    return 0;
}