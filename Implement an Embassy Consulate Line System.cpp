#include<iostream>
using namespace std;
int main ()
{
    int tr=0; //Travel Visa
    int med=0; // Medical Visa
    int bs=0; //business Visa
    int go=0; // Government Officials Visa

    int travel[25]; // for store token
    int medical[25];  // for store token
    int business[25];  // for store token
    int government[25];  // for store token

    int x; // type of token user want to take
    int y=0; // for total token
    int z=0; // for total token


    cout << " Issuing Tokens"<< endl<<endl;

    for (int i=1;i<=150;i++) {

    cout << " For Travel visa input               : 1"<<endl;
    cout << " For Medical Visa input              : 2"<<endl;
    cout << " For Business Visa input             : 3"<<endl;
    cout << " For Government Officials Visa input : 4"<<endl;
    cout << " For Ending input                    : 0"<<endl<<endl;

    cout << "Request token for : ";
    cin >>x;
    if (x==1 && tr<25)
    {


            cout << " Your token is: TR-"<<y+1<<endl<<endl;
            travel[tr]=y+1;
            tr++;
            y++;
            z++;

    }

    else if (x==2 && med<25)
    {

            cout << " Your token is: MED-"<<y+1<<endl<<endl;
            medical[med]=y+1;
            med++;
            y++;
            z++;

    }

    else if (x==3 && bs<25)
    {

            cout << " Your token is: BS-"<<y+1<<endl<<endl;
            business[bs]=y+1;
            bs++;
            y++;
            z++;

    }

    else if (x==4 && go<25)
    {

            cout << " Your token is: GO-"<<y+1<<endl<<endl;
            government[go]=y+1;
            go++;
            y++;
            z++;

    }

   else if (x==0)
    {
        cout << "END"<<endl<<endl;
       break;
    }
   else if (x>4)
   {
       cout << "IVALID INPUT"<<endl;
   }
    else
    {
       cout << "OUT OF LIMIT"<<endl<<endl;
    }
    }

    cout << "Counter Availability (Day summary) "<<endl;
    cout << " Travel (TR): "<<tr << " applicants"<<endl;
    cout << " Medical (MED): "<<med << " applicants"<<endl;
    cout << " Business (BS): "<<bs << " applicants"<<endl;
    cout << " Government Officials (GO): "<<go << " applicants"<<endl<<endl;

    cout << "Calling the Next Customer"<<endl<<endl;

    int n=1; // for counter 1 if user want to call the customer or not
    int o=1; // for counter 2 if user want to call the customer or not
    int p=1; // for counter 3 if user want to call the customer or not
    int q=1; // for counter 4 if user want to call the customer or not

    int t=0; // for printing the index value of array travel
    int m=0; // for printing the index value of array medical
    int r=0; // for printing the index value of array business
    int s=0; // for printing the index value of array government

    int a=tr; // input the total number of token for travel
    int b=med; // input the total number of token for medical
    int c=bs; // input the total number of token for business
    int d=go; // input the total number of token for government officials

    // for counter 1
    int tr1=0; // travel
    int med1=0; // medical
    int bs1=0; // business
    int go1=0; // government officials
    // for counter 2
    int tr2=0; // travel
    int med2=0; // medical
    int bs2=0; // business
    int go2=0; // government officials
    // for counter 3
    int tr3=0; // travel
    int med3=0; // medical
    int bs3=0; // business
    int go3=0; // government officials
    // for counter 4
    int tr4=0; // travel
    int med4=0; // medical
    int bs4=0; // business
    int go4=0; // government officials

    for (int i=0;i<y;)

    {

        if (n==1 && i<y)
     {
        for (int j=0;j<1;j++)
        {
            cout << "Counter 1 (Travel Visa)"<<endl<<endl;
            cout << "For Call Next Customer Input : 1"<<endl;
            cout << "For Break Input              : 0"<<endl;

            cout << "INPUT : ";
            cin>>n;

            if (n==1)
            {
                if (t<tr)
                {
                    cout << "Counter 1, Please served token number : TR-"<<travel[t]<<endl<<endl;
                    t++;
                    i++;
                    a--;
                    tr1++;
                }
                else if (b>c && b>d)
                {
                    cout << "Counter 1, Please served token number : MED-"<<medical[m]<<endl<<endl;
                    m++;
                    i++;
                    b--;
                    med1++;
                }
                 else if (c>b && c>d)
                {
                    cout << "Counter 1, Please served token number : BS-"<<business[r]<<endl<<endl;
                    r++;
                    i++;
                    c--;
                    bs1++;
            }
            else
            {
               cout << "Counter 1, Please served token number : GO-"<<government[s]<<endl<<endl;
                    s++;
                    i++;
                    d--;
                    go1++;
            }
            }
        }
     }
            else
            {
                i++;

                break;
            }



     if (o==1 && i<y)
     {
        for (int j=0;j<1;j++)
        {
            cout << "Counter 2 (Med Visa)"<<endl<<endl;
            cout << "For Call Next Customer Input : 1"<<endl;
            cout << "For Break Input              : 0"<<endl;

            cout << "INPUT : ";
            cin>>o;

            if (o==1)
            {
                if (m<med)
                {
                    cout << "Counter 2, Please served token number : MED-"<<medical[m]<<endl<<endl;
                    m++;
                    i++;
                    b--;
                    med2++;
                }
                else if (a>c && a>d)
                {
                    cout << "Counter 2, Please served token number : TR-"<<travel[t]<<endl<<endl;
                    t++;
                    i++;
                    a--;
                    tr2++;
                }
                 else if (c>a && c>d)
                {
                    cout << "Counter 2, Please served token number : BS-"<<business[r]<<endl<<endl;
                    r++;
                    i++;
                    c--;
            }
            else
            {
               cout << "Counter 2, Please served token number : GO-"<<government[s]<<endl<<endl;
                    s++;
                    i++;
                    d--;
                    go2++;
            }
            }
        }
     }
            else
            {
                i++;
                break;
            }


     if (p==1 && i<y)
     {
        for (int j=0;j<1;j++)
        {
            cout << "Counter 3 (Business Visa)"<<endl<<endl;
            cout << "For Call Next Customer Input : 1"<<endl;
            cout << "For Break Input              : 0"<<endl;

            cout << "INPUT : ";
            cin>>p;

            if (p==1)
            {
                if (r<bs)
                {
                    cout << "Counter 3, Please served token number : BS-"<<business[r]<<endl<<endl;
                    r++;
                    i++;
                    c--;
                    bs3++;
                }
                else if (a>b && a>d)
                {
                    cout << "Counter 3, Please served token number : TR-"<<travel[t]<<endl<<endl;
                    t++;
                    i++;
                    a--;
                    tr3++;
                }
                 else if (b>a && b>d)
                {
                    cout << "Counter 3, Please served token number : MED-"<<medical[m]<<endl<<endl;
                    m++;
                    i++;
                    b--;
                    med3++;
            }
            else
            {
               cout << "Counter 3, Please served token number : GO-"<<government[s]<<endl<<endl;
                    s++;
                    i++;
                    d--;
                    go3++;
            }
            }
            }

        }

            else
            {
                i++;
                break;

            }


     if (q==1 && i<y)
     {
        for (int j=0;j<1;j++)
        {
            cout << "Counter 4 (Governmemt Visa)"<<endl<<endl;
            cout << "For Call Next Customer Input : 1"<<endl;
            cout << "For Break Input              : 0"<<endl;

            cout << "INPUT : ";
            cin>>q;

            if (q==1)
            {
                if (s<go)
                {
                    cout << "Counter 4, Please served token number : GO-"<<government[s]<<endl<<endl;
                    s++;
                    i++;
                    d--;
                    go4++;
                }
                else if (b>a && b>c)
                {
                    cout << "Counter 4, Please served token number : MED-"<<medical[m]<<endl<<endl;
                    m++;
                    i++;
                    b--;
                    med4++;
                }
                 else if (c>a && c>b)
                {
                    cout << "Counter 4, Please served token number : BS-"<<business[r]<<endl<<endl;
                    r++;
                    i++;
                    c--;
                    bs4++;
            }
            else
            {
               cout << "Counter 4, Please served token number : TR-"<<travel[t]<<endl<<endl;
                    t++;
                    i++;
                    a--;
                    tr4++;
            }
                  }
        }
     }
            else
            {
                i++;
                break;
            }
        }

        cout <<endl;
        cout << "Daily Summary Report"<<endl<<endl;

        cout << "1.Applicants served by Visa Type"<<endl;
        cout << "-   TR (Travel): "<<tr<<endl;
        cout << "-   MED (Medical): "<<med<<endl;
        cout << "-   BS (Business): "<<bs<<endl;
        cout << "-   GO (Government Officials): "<<go<<endl<<endl;



        cout << "1.Applicants served by Counter"<<endl;
        cout << "-   Counter 1 (TR): ";

        if (tr1>0)
        {
            cout << "TR: "<<tr1 << " ";
        }
        if (med1>0)
        {
            cout << "MED: "<<med1 << " ";
        }
        if (bs1>0)
        {
            cout << "BS: "<<bs1 << " ";
        }
        if (go1>0)
        {
            cout << "GO: "<<go1 << " ";
        }

        cout <<endl;

        cout << "-   Counter 2 (MED): ";

        if (med2>0)
        {
            cout << "MED: "<<med2 << " ";
        }
        if (tr2>0)
        {
            cout << "TR: "<<tr2 << " ";
        }

        if (bs2>0)
        {
            cout << "BS: "<<bs2 << " ";
        }
        if (go2>0)
        {
            cout << "GO: "<<go2 << " ";
        }

        cout <<endl;


        cout << "-   Counter 3 (BS): ";

        if (bs3>0)
        {
            cout << "BS: "<<bs3 << " ";
        }
        if (tr3>0)
        {
            cout << "TR: "<<tr3 << " ";
        }
        if (med3>0)
        {
            cout << "MED: "<<med3 << " ";
        }

        if (go3>0)
        {
            cout << "GO: "<<go3 << " ";
        }

        cout <<endl;


        cout << "-   Counter 4 (GO): ";

        if (go4>0)
        {
            cout << "GO: "<<go4 << " ";
        }
        if (tr4>0)
        {
            cout << "TR: "<<tr4 << " ";
        }
        if (med4>0)
        {
            cout << "MED: "<<med4 << " ";
        }
        if (bs4>0)
        {
            cout << "BS: "<<bs4 << " ";
        }


        cout <<endl<<endl;


        cout << "3. Idle Counter"<<endl;

        if (med1==0 && bs1==0 && go1==0)
        {
            cout << "-  TR(Travel)"<<endl;
        }

         if (tr2==0 && bs2==0 && go2==0)
        {
            cout << "-  MED(Medical)"<<endl;
        }

         if (med3==0 && tr3==0 && go3==0)
        {
            cout << "-  BS(Business)"<<endl;
        }

         if (med4==0 && bs4==0 && tr4==0)
        {
            cout << "-  GO(Government Officials)"<<endl;
        }

        cout <<endl;
        cout << "Total Applicants Served : ("<<y<< ") "<<endl;

    return 0;
}
