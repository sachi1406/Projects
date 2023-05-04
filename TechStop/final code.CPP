#include<iostream>
#include<iomanip>
#include<string>
#include<fstream>
#include<cstring>
using namespace std;
class electronics
{
    ofstream output;
    ofstream outinfo;
    string name,sname,email;
    long long int number;
    string pn[100];
    int pp[100];
    int pq[100];
    int tpq[100];
    static long double amt;
    double price;
    public:

    electronics()
    {
        for(int i=0;i<100;i++)
        {
            pq[i]=0;
            tpq[i]=0;
        }
    }
    void prodis(int i)
    {
        cout<<"Enter the quantity you want to buy\n";
        cin>>pq[i];
        cout<<"Confirm the quantity again"<<endl;
        cin>>pq[i];

        if(pq[i]>tpq[i])
        {
            cout<<"Sorry, we only have "<<tpq[i]<<" quantitiy available at the moment"<<endl;
            cout<<"Enter quantity again"<<endl;
            cin>>pq[i];
        }
        cout<<"You have purchase "<<pq[i]<<" "<<pn[i]<<" for Rs"<<pp[i]*pq[i]<<"\n";

    }
    void info()
    {
        outinfo.open("userinfo.txt",ios::app);
        cout<<"WELCOME TO TECHSTOP"<<endl;
        cout<<"ENTER YOUR FIRST NAME"<<endl;
        cin>>name;
        cout<<"ENTER YOUR SURNAME"<<endl;
        cin>>sname;
        cout<<"ENTER YOUR EMAIL ID"<<endl;
        cin>>email;
        reenter:
        cout<<"ENTER YOUR PHONE NUMBER"<<endl;
        cin>>number;
        long long int w;
        w=number/1000000000;
        if(w>10||w==0)
        {
            cout<<"WRONG NUMBER ENTERED"<<endl;
            goto reenter;
        }
        outinfo<<setw(15)<<"FIRST NAME"<<setw(15)<<"LAST NAME"<<setw(40)<<"EMAIL ID."<<setw(20)<<"PHONE  NUMBER"<<endl;
        outinfo<<setw(15)<<name<<setw(15)<<sname<<setw(40)<<email<<setw(20)<<number<<endl;
        outinfo<<"Purchase Info:"<<endl;
        outinfo.close();
    }
    void userdisplay()
    {
        cout<<"NAME          : "<<name<<" "<<sname<<endl;
        cout<<"EMAILID       : "<<email<<endl;
        cout<<"PHONE NUMBER  : "<<number<<endl;
    }
    void earphones()
    {
        int a=0;
        ifstream inearphones;
        inearphones.open("earphone.txt",ios::in);

        while(!inearphones.eof())
        {
            inearphones>>pn[a];
            inearphones>>pp[a];
            inearphones>>tpq[a];
             a++;
        }
        inearphones.close();
        int j;
        int ch1;
        int ch;
        do
        {
            cout<<"EARPHONES:\n";
            cout<<"1.SAMSUNG\n";
            cout<<"2.JBL\n";
            cout<<"3.AGK\n";
            cout<<"4.BEATS\n";
            cout<<"ENTER YOUR CHOICE\n";
            cin>>ch;
            switch (ch)
            {
                case 1:
                cout<<"EARPHONES:\n";
                cout<<"1.Samsung EHS61ASFWEC   :    Rs199\n";
                cout<<"2.Samsung EQ-EG920BW    :    Rs388\n";
                cout<<"3.Samsung EHS64AVFWE    :    Rs215\n";
                cout<<"4.Samsung HS130         :    Rs289\n";
                cout<<"5.Samsung Xenium I908/S :    Rs285\n";
                cout<<"6.Samsung EO-EG920      :    Rs990\n";

                cout<<"Enter choice\n";
                cin>>ch1;
                switch(ch1)
                {
                    case 1:prodis(0);
                    break;
                    case 2:prodis(1);
                    break;
                    case 3:prodis(2);
                    break;
                    case 4:prodis(3);
                    break;
                    case 5:prodis(4);
                    break;
                    case 6:prodis(5);
                    break;
                    default:cout<<"WRONG CHOICE\n";
                }
                break;
                case 2:
                cout<<"  JBL EARPHONES\n";
                cout<<"1.JBL T250 SI Over Ear Headphones          :    Rs899\n";
                cout<<"2.JBL T110 In the Ear Headphones           :    Rs599\n";
                cout<<"3.JBL T450 Stereo Headphones               :    Rs1690\n";
                cout<<"4.JBL REFMINIBT Bluetooth earphone         :    Rs3095\n";
                cout<<"5.JBL INSPIRE 100 In-Ear Sports Headphones :    Rs636\n";
                cout<<"6.JBL JR300 On the Ear Headphones          :    Rs1699\n";

                cout<<"Enter choice\n";
                cin>>ch1;
                switch(ch1)
                {
                    case 1:prodis(6);
                    break;
                    case 2:prodis(7);
                    break;
                    case 3:prodis(8);
                    break;
                    case 4:prodis(9);
                    break;
                    case 5:prodis(10);
                    break;
                    case 6:prodis(11);
                    break;
                    default:cout<<"WRONG CHOICE";
                }
                break;
                case 3:
                cout<<"  AGK EARPHONES\n";
                cout<<"1.AKG K52 Closed-Back Headphone (Black)               :    Rs2750\n";
                cout<<"2.AKG Y20U in-Ear Headphones with Mic(Black)          :    Rs1731\n";
                cout<<"3.AKG Pro Audio K92 Closed-Back Headphones            :    Rs3648\n";
                cout<<"4.AKG K72 Close-Back Studio Headphones (Black)        :    Rs3324\n";
                cout<<"5.AKG Nylon Braided Handfree/Earphone                 :    Rs200\n";
                cout<<"6.AKG Signature Y20UTEL in-Ear Stereo Headphone       :    Rs1499\n";

                cout<<"Enter choice\n";
                cin>>ch1;
                switch(ch1)
                {
                    case 1:prodis(12);
                    break;
                    case 2:prodis(13);
                    break;
                    case 3:prodis(14);
                    break;
                    case 4:prodis(15);
                    break;
                    case 5:prodis(16);
                    break;
                    case 6:prodis(17);
                    break;
                    default:cout<<"WRONG CHOICE";
                }
                break;
                case 4:
                cout<<"  BEATS EARPHONES\n";
                cout<<"1.BEATS Wild  Wireless Bluetooth Headphones    :    Rs1999\n";
                cout<<"2.BEATS Solo3 Wireless On-Ear Headphones       :    Rs19999\n";
                cout<<"3.BEATS Tour with Control Talk Headphone       :    Rs10512\n";
                cout<<"4.BEATS PowerbeatsSport Headphone              :    Rs10513\n";

                cout<<"Enter choice\n";
                cin>>ch1;
                switch(ch1)
                {
                    case 1:prodis(18);
                    break;
                    case 2:prodis(19);
                    break;
                    case 3:prodis(20);
                    break;
                    case 4:prodis(21);
                    break;

                    default:cout<<"WRONG CHOICE";
                }
                break;
                default:cout<<"WRONG CHOICE";
            }
            cout<<"enter 1 if you want to buy in the same catergory else enter 0\n";
            cin>>j;
        }while(j==1);

        calculate();

        for(int i=0;i<100;i++)
        {
            if(pq[i]>0)
            tpq[i]=tpq[i]-pq[i];
        }
    }
     void mobile()
    {
        int a=0;
        ifstream inmobile;
        inmobile.open("mobile.txt",ios::in);

        while(!inmobile.eof())
        {

            inmobile>>pn[a];
            inmobile>>pp[a];
            inmobile>>tpq[a];
             a++;
        }
        inmobile.close();

        int j;
        int ch2;
        int ch;
        do
        {
            cout<<"MOBILE:\n";
            cout<<"1.SAMSUNG:\n";
            cout<<"2.ONE PLUS:\n";
            cout<<"3.APPLE:\n";
            cout<<"4.VIVO:\n";
            cout<<"ENTER YOUR CHOICE\n";
            cin>>ch;
            switch(ch)
            {
                case 1:
                cout<<"SAMSUNG PHONES\n";
                cout<<"1.Samsung GALAXY A70    :    Rs26889\n";
                cout<<"2.Samsung GALAXY A80    :    Rs45590\n";
                cout<<"3.Samsung GALAXY A50    :    Rs17565\n";
                cout<<"4.Samsung GALAXY M30    :    Rs13990\n";
                cout<<"5.Samsung GALAXY A30    :    Rs14715\n";
                cout<<"6.Samsung GALAXY M40    :    Rs19990\n";
                cout<<"7.Samsung GALAXY A20    :    Rs10915\n";
                cout<<"8.Samsung GALAXY M20    :    Rs11990\n";

                cout<<"Enter choice\n";
                cin>>ch2;
                switch(ch2)
                {
                    case 1:prodis(0);
                    break;
                    case 2:prodis(1);
                    break;
                    case 3:prodis(2);
                    break;
                    case 4:prodis(3);
                    break;
                    case 5:prodis(4);
                    break;
                    case 6:prodis(5);
                    break;
                    case 7:prodis(6);
                    break;
                    case 8:prodis(7);
                    break;
                    default:cout<<"WRONG CHOICE\n";
                }
                break;
                case 2:
                cout<<"ONEPLUS\n";
                cout<<"1.OnePlus 6T McLaren Edition    :    Rs50999\n";
                cout<<"2.OnePlus 7 Pro                 :    Rs48990\n";
                cout<<"3.OnePlus 7                     :    Rs32999\n";
                cout<<"4.OnePlus 6T                    :    Rs26999\n";
                cout<<"5.OnePlus 5T                    :    Rs32999\n";

                cout<<"Enter choice\n";
                cin>>ch2;
                switch(ch2)
                {
                    case 1:prodis(8);
                    break;
                    case 2:prodis(9);
                    break;
                    case 3:prodis(10);
                    break;
                    case 4:prodis(11);
                    break;
                    case 5:prodis(12);
                    break;
                    default:cout<<"WRONG CHOICE\n";
                }
                break;
                case 3:
                cout<<"APPLE\n";
                cout<<"1.Apple iPhone X        :    Rs61379\n";
                cout<<"2.Apple iPhone XR       :    Rs55707\n";
                cout<<"3.Apple iPhone XS Max   :    Rs99655\n";
                cout<<"4.Apple iPhone 7 Plus   :    Rs44115\n";
                cout<<"5.Apple iPhone 7        :    Rs34409\n";

                cout<<"Enter choice\n";
                cin>>ch2;
                switch(ch2)
                {
                    case 1:prodis(13);
                    break;
                    case 2:prodis(14);
                    break;
                    case 3:prodis(15);
                    break;
                    case 4:prodis(16);
                    break;
                    case 5:prodis(17);
                    break;
                    default:cout<<"WRONG CHOICE\n";
                }
                break;
                case 4:
                cout<<"VIVO\n";
                cout<<"1.Vivo Z1 Pro     :    Rs14990\n";
                cout<<"2.Vivo S1         :    Rs17990\n";
                cout<<"3.Vivo V15 Pro    :    Rs22190\n";
                cout<<"4.Vivo Y15        :    Rs13290\n";
                cout<<"5.Vivo Y12        :    Rs12490\n";

                cout<<"Enter choice\n";
                cin>>ch2;
                switch(ch2)
                {
                    case 1:prodis(18);
                    break;
                    case 2:prodis(19);
                    break;
                    case 3:prodis(20);
                    break;
                    case 4:prodis(21);
                    break;
                    case 5:prodis(22);
                    break;

                    default:cout<<"WRONG CHOICE\n";

                }
                break;
            }
            cout<<"enter 1 if you want to buy in the same catergory else enter 0\n";
            cin>>j;
        }while(j==1);

        calculate();

       for(int i=0;i<100;i++)
        {
            if(pq[i]>0)
            tpq[i]=tpq[i]-pq[i];
        }

    }
    void laptop()
    {
        int a=0;
        ifstream inlaptop;
        inlaptop.open("laptop.txt",ios::in);

        while(!inlaptop.eof())
        {
            inlaptop>>pn[a];
            inlaptop>>pp[a];
            inlaptop>>tpq[a];
             a++;
        }
        inlaptop.close();
        int j;
        int ch3;
        int ch;
        do
        {
            cout<<"LAPTOP:\n";
            cout<<"1.SAMSUNG:\n";
            cout<<"2.APPLE:\n";
            cout<<"3.MICROSOFT:\n";
            cout<<"4.LENOVO:\n";
            cout<<"ENTER CHOICE\n";
            cin>>ch;
            switch(ch)
            {
                case 1:
                cout<<".SAMSUNG:\n";
                cout<<"1.Samsung NP900X5T-X01US Laptop (Core i7 8th Gen/16 GB/256 GB SSD/Windows 10/2 GB)               :    Rs143360\n";
                cout<<"2.Samsung Book Galaxy Book S Laptop (Qualcomm Snapdragon Octa Core/8 GB/256 GB SSD/Windows 10)   :    Rs70830\n";
                cout<<"3.Samsung Notebook 7 NP740U3L-L02US Laptop (Core i5 6th Gen/8 GB/1 TB/Windows 10)                :    Rs100600\n";
                cout<<"4.Samsung Notebook 3 NP300E5K-L04US Laptop (Core i5 5th Gen/4 GB/1 TB/Windows 10)                :    Rs72760\n";
                cout<<"5.Samsung Series  NP930QAA-K01US Laptop (Core i7 8th Gen/8 GB/256 GB SSD/Windows 10)            :    Rs186160\n";
                cout<<"6.Samsung XE500C13-S03US (Intel Celeron Dual Core 2GB 16GB SSD ChromeOS)                         :    Rs27987\n";

                cout<<"Enter choice\n";
                cin>>ch3;
                switch(ch3)
                {
                    case 1:prodis(0);
                    break;
                    case 2:prodis(1);
                    break;
                    case 3:prodis(2);
                    break;
                    case 4:prodis(3);
                    break;
                    case 5:prodis(4);
                    break;
                    case 6:prodis(5);
                    break;
                    default:cout<<"WRONG CHOICE\n";
                }
                break;
                case 2:
                cout<<"APPLE:\n";
                cout<<"1.Apple MacBook Air MQD32HN/A Ultrabook (Core i5 5th Gen/8 GB/128 GB SSD/macOS Sierra              :    Rs62990\n";
                cout<<"2.Apple MacBook Air MVFM2HN/A Ultrabook (Core i5 8th Gen/8 GB/128 GB SSD/macOS Mojave)             :    Rs89990\n";
                cout<<"3.Apple MacBook Pro MV962HN/A Ultrabook (Core i5 8th Gen/8 GB/256 GB SSD/macOS Mojave)             :    Rs154990\n";
                cout<<"4.Apple MacBook Air MVFN2HN/A Ultrabook (Core i5 8th Gen/8 GB/256 GB SSD/macOS Mojave)             :    Rs105990\n";
                cout<<"5.Apple MacBook Pro MR9Q2HN/A Ultrabook (Core i5 8th Gen/8 GB/256 GB SSD/macOS High Sierra)        :    Rs158994\n";

                cout<<"Enter choice\n";
                cin>>ch3;
                switch(ch3)
                {
                    case 1:prodis(6);
                    break;
                    case 2:prodis(7);
                    break;
                    case 3:prodis(8);
                    break;
                    case 4:prodis(9);
                    break;
                    case 5:prodis(10);
                    break;
                    default:cout<<"WRONG CHOICE\n";
                }
                break;
                case 3:
                cout<<"MICROSOFT:\n";
                cout<<"1.Microsoft Surface Go Pentium Gold                                                                   :    Rs29990\n";
                cout<<"2.Microsoft Surface Pro 6 (LGP-00001) Laptop (Core i5 8th Gen/8 GB/128 GB SSD/Windows 10)             :    Rs119490\n";
                cout<<"3.Microsoft Surface Pro 3                                                                             :    Rs58990\n";
                cout<<"4.Microsoft Surface Pro 6 1796 (KJU-00015) Laptop (Core i7 8th Gen/8 GB/256 GB SSD/Windows 10)        :    Rs127363\n";
                cout<<"5.Microsoft Surface Pro 4 (CR5-00028) Laptop (Core i5 6th Gen/4 GB/128 GB SSD/Windows 10)             :    Rs70988\n";

                cout<<"Enter choice\n";
                cin>>ch3;
                switch(ch3)
                {
                    case 1:prodis(11);
                    break;
                    case 2:prodis(12);
                    break;
                    case 3:prodis(13);
                    break;
                    case 4:prodis(14);
                    break;
                    case 5:prodis(15);
                    break;

                    default:cout<<"WRONG CHOICE\n";
                }
                break;
                case 4:
                cout<<"LENOVO:\n";
                cout<<"1.Lenovo Ideapad 330-15ARR (81D2008WIN) Laptop (AMD Quad Core Ryzen 5/8 GB/1 TB/DOS)    :    Rs31990\n";
                cout<<"2.Lenovo Laptop IP330S-14IKB 81F400GLIN                                                 :    Rs37790\n";
                cout<<"3.Lenovo Ideapad 130 (81H7009WIN) Laptop (Core i3 7th Gen/4 GB/1 TB/Windows 10)         :    Rs26590\n";
                cout<<"4.Lenovo 330S (81F501EMIN) Laptop (Core i3 7th Gen/4 GB/1 TB/Windows 10)                :    Rs33090\n";

                cout<<"Enter choice\n";
                cin>>ch3;
                switch(ch3)
                {
                    case 1:prodis(16);
                    break;
                    case 2:prodis(17);
                    break;
                    case 3:prodis(18);
                    break;
                    case 4:prodis(19);
                    break;
                    default:cout<<"WRONG CHOICE\n";
                }
                break;
            }
            cout<<"enter 1 if you want to buy in the same catergory else enter 0\n";
            cin>>j;
        }while(j==1);

        calculate();

        for(int i=0;i<100;i++)
        {
            if(pq[i]>0)
            tpq[i]=tpq[i]-pq[i];
        }
    }
    void tablets()
    {
        int a=0;
        ifstream intablet;
        intablet.open("tablet.txt",ios::in);

        while(!intablet.eof())
        {
            intablet>>pn[a];
            intablet>>pp[a];
            intablet>>tpq[a];
             a++;
        }
        intablet.close();
        int j;
        int ch4;
        int ch;
        do
        {
            cout<<"TABLETS:\n";
            cout<<"1.SAMSUNG:\n";
            cout<<"2.APPLE:\n";
            cout<<"3.LENOVO:\n";
            cout<<"ENTER CHOICE\n";
            cin>>ch;
            switch(ch)
            {
                case 1:
                cout<<"SAMSUNG:\n";
                cout<<"1.Samsung Galaxy Tab S5e              :    Rs34999\n";
                cout<<"2.Samsung Galaxy Tab A 10.1 2019 LTE  :    Rs14999\n";
                cout<<"3.Samsung Galaxy Tab A 10.5 LTE       :    Rs29990\n";
                cout<<"4.Samsung Galaxy Tab A 8.0 2019       :    Rs9999\n";
                cout<<"5.Samsung Galaxy Tab A 8.0 2017 LTE   :    Rs17499\n";
                cout<<"6.Samsung Galaxy Tab A 7.0            :    Rs8990\n";

                cout<<"Enter choice\n";
                cin>>ch4;
                switch(ch4)
                {
                    case 1:prodis(0);
                    break;
                    case 2:prodis(1);
                    break;
                    case 3:prodis(2);
                    break;
                    case 4:prodis(3);
                    break;
                    case 5:prodis(4);
                    break;
                    case 6:prodis(5);
                    break;
                    default:cout<<"WRONG CHOICE";

                }
                break;
                case 2:
                cout<<"APPLE:\n";
                cout<<"1.Apple iPad 2018 WiFi 32GB                :    Rs26880\n";
                cout<<"2.Apple iPad Mini 2019                     :    Rs34990\n";
                cout<<"3.Apple iPad Air 2019                      :    Rs42655\n";
                cout<<"4.Apple iPad Pro 11 WiFi Cellular 256GB    :    Rs96394\n";
                cout<<"5.Apple iPad Pro 12.9 2018                 :    Rs89900\n";

                cout<<"Enter choice\n";
                cin>>ch4;
                switch(ch4)
                {
                    case 1:prodis(6);
                    break;
                    case 2:prodis(7);
                    break;
                    case 3:prodis(8);
                    break;
                    case 4:prodis(9);
                    break;
                    case 5:prodis(10);
                    break;
                    default:cout<<"WRONG CHOICE";
                }
                break;
                case 3:
                cout<<"LENOVO:\n";
                cout<<"1.Lenovo Tab 4 10 16GB LTE        :    Rs14670\n";
                cout<<"2.Lenovo Yoga Tab 3 10 LTE        :    Rs19990\n";
                cout<<"3.Lenovo Tab 7                    :    Rs9460\n";
                cout<<"4.Lenovo Tab 4 8 Plus 64GB LTE    :    Rs21990\n";
                cout<<"5.Lenovo Yoga Tab 3 8 2GB RAM     :    Rs13610\n";

                cout<<"Enter choice\n";
                cin>>ch4;
                switch(ch4)
                {
                    case 1:prodis(11);
                    break;
                    case 2:prodis(12);
                    break;
                    case 3:prodis(13);
                    break;
                    case 4:prodis(14);
                    break;
                    case 5:prodis(15);
                    break;
                    default:cout<<"WRONG CHOICE";
                }
                break;
            }
            cout<<"enter 1 if you want to buy in the same catergory else enter 0\n";
            cin>>j;
        }while(j==1);
        for(int i=0;i<100;i++)
        {
            if(pq[i]>0)
            tpq[i]=tpq[i]-pq[i];
        }
        calculate();
    }
    void display()
    {
        for(int i=0;i<100;i++)
        {
            if(pq[i]>0)
            cout<<setw(50)<<pn[i]<<setw(20)<<pq[i]<<setw(20)<<"Rs. "<<pp[i]*pq[i]<<"\n";
        }
    }
    void fdisplay()
    {
        cout<<"===================================================================================================================";
        cout<<"\nAMOUNT"<<setw(84)<<"Rs. "<<amt;

        cout<<"\nGST : 12%"<<setw(81)<<"Rs. "<<(amt*0.12)<<"\n";
        cout<<"\nTOTAL AMOUNT"<<setw(78)<<"Rs. "<<((amt*0.12)+amt)<<"\n";
        cout<<"===================================================================================================================";
    }
    void calculate()
    {
        for(int i=0;i<100;i++)
        {
            price=pp[i]*pq[i];
            amt=amt+price;
        }
    }

    void input()
    {
        output.open("sold.txt",ios::app);
        outinfo.open("userinfo.txt",ios::app);
        for(int i=0;i<100;i++)
        {
            if(pq[i]>0)
            {
                output<<setw(50)<<pn[i]<<setw(20)<<pq[i]<<setw(20)  <<pp[i]*pq[i]<<"\n";
                outinfo<<setw(50)<<pn[i]<<setw(20)<<pq[i]<<setw(20)  <<pp[i]*pq[i]<<"\n";
            }
        }
        output.close();
        outinfo.close();
    }
    void modifye()
    {
        ofstream mode;
        mode.open("earphone.txt");
        for(int i=0;i<22;i++)
        {
            mode<<pn[i]<<endl;
            mode<<pp[i]<<endl;
            mode<<tpq[i]<<endl;
        }
        mode.close();
    }
    void modifym()
    {
        ofstream modm;
        modm.open("mobile.txt");
        for(int i=0;i<23;i++)
        {
            modm<<pn[i]<<endl;
            modm<<pp[i]<<endl;
            modm<<tpq[i]<<endl;
        }
        modm.close();
    }
    void modifyl()
    {
        ofstream modl;
        modl.open("laptop.txt");
        for(int i=0;i<20;i++)
        {
            modl<<pn[i]<<endl;
            modl<<pp[i]<<endl;
            modl<<tpq[i]<<endl;
        }
        modl.close();
    }
    void modifyt()
    {
        ofstream modt;
        modt.open("tablet.txt");
        for(int i=0;i<16;i++)
        {
            modt<<pn[i]<<endl;
            modt<<pp[i]<<endl;
            modt<<tpq[i]<<endl;
        }
        modt.close();
    }
};

class admin
{
    string pn1[100];
    int pp1[100];
    int tpq1[100];
    public:
        admin()
        {

        for(int i=0;i<100;i++)
        {
            pp1[i]=0;
            tpq1[i]=0;
        }


        }

    void soldreport()
    {
        char line[200];
        ifstream in;
        in.open("sold.txt",ios::in);
        while(!in.eof())
        {
            in.getline(line,200);
            cout<<line<<endl;
        }
        in.close();
    }
    void userreport()
    {
        char line[200];
        ifstream in;
        in.open("userinfo.txt",ios::in);
        while(!in.eof())
        {
            in.getline(line,200);
            cout<<line<<endl;
        }
        in.close();
    }
    void stockreporte()
    {
        cout<<setw(50)<<"ITEM"<<setw(20)<<"QUANTITY"<<"\n";
        ifstream stock;
        stock.open("earphone.txt",ios::in);
        int a=0;
        while(!stock.eof())
        {
            stock>>pn1[a];
            stock>>pp1[a];
            stock>>tpq1[a];
            a++;
        }
        for(int i=0;i<a-1;i++)
        {
            cout<<setw(50)<<pn1[i]<<setw(20)<<tpq1[i]<<"\n";
        }
        stock.close();
    }
    void stockreportm()
    {
        ifstream stock;
        stock.open("mobile.txt",ios::in);
        int a=0;

        while(!stock.eof())
        {
            stock>>pn1[a];
            stock>>pp1[a];
            stock>>tpq1[a];
            a++;
        }
        for(int i=0;i<a-1;i++)
        {
            cout<<setw(50)<<pn1[i]<<setw(20)<<tpq1[i]<<"\n";
        }
        stock.close();
    }
    void stockreportl()
    {
        ifstream stock;
        stock.open("laptop.txt",ios::in);
        int a=0;

        while(!stock.eof())
        {
            stock>>pn1[a];
            stock>>pp1[a];
            stock>>tpq1[a];
            a++;
        }
        for(int i=0;i<a-1;i++)
        {
            cout<<setw(50)<<pn1[i]<<setw(20)<<tpq1[i]<<"\n";
        }
        stock.close();
    }

    void stockreportt()
    {
        ifstream stock;
        stock.open("tablet.txt",ios::in);
        int a=0;
        while(!stock.eof())
        {
            stock>>pn1[a];
            stock>>pp1[a];
            stock>>tpq1[a];
            a++;
        }
        for(int i=0;i<a-1;i++)
        {
            cout<<setw(50)<<pn1[i]<<setw(20)<<tpq1[i]<<"\n";
        }
        stock.close();
    }
};
long double electronics::amt=0;
int main()
{
    int choice,k;
    cout<<"1:Customer"<<endl;
    cout<<"2:Admin"<<endl;
    cin>>choice;

    admin ob;
    electronics obj;
    electronics obj1;
    electronics obj2;
    electronics obj3;
    electronics obj4;

    switch(choice)
    {
        case 1:
        {
            obj.info();
            int ch;
            int j;
            cout<<endl;
            cout<<"WELCOME TO TECHSTOP"<<endl;
            do
            {
                cout<<endl;
                cout<<"1.Earphones\n";
                cout<<"2.Mobile\n";
                cout<<"3.Laptop\n";
                cout<<"4.Tablet\n";
                cout<<"Enter choice\n";

                cin>>ch;
                switch(ch)
                {
                    case 1:obj1.earphones();
                    obj1.modifye();
                    break;
                    case 2:obj2.mobile();
                    obj2.modifym();
                    break;
                    case 3:obj3.laptop();
                    obj3.modifyl();
                    break;
                    case 4:obj4.tablets();
                    obj4.modifyt();
                    break;
                    default:"WRONG CHOICE\n";
                }
                cout<<"enter 1 if you want to buy in the other catergory else enter 0\n";
                cin>>j;
            }while(j==1);
            cout<<endl<<endl;
            cout<<setw(60)<<"TECHSTOP"<<endl;
            obj.userdisplay();
            cout<<"BILL:\n";
            cout<<setw(50)<<"ITEM"<<setw(20)<<"QUANTITY"<<setw(24)  <<"AMOUNT"<<"\n";
            obj1.display();
            obj2.display();
            obj3.display();
            obj4.display();
            obj4.fdisplay();

            ofstream out;
            out.open("sold.txt",ios::app);
            //out<<setw(50)<<"ITEM"<<setw(20)<<"QUANTITY"<<setw(20)  <<"AMOUNT"<<"\n";
            out.close();

            obj1.input();
            obj2.input();
            obj3.input();
            obj4.input();
        }
        break;

        case 2:
        int u;
        wc:
        cout<<"Enter Username and Password"<<endl;
        cout<<"1.Existing User"<<endl;
        cout<<"2.New User"<<endl;
        cin>>u;
        switch(u)
        {
            case 1:
            {
                ifstream input;
                ofstream output;
                input.open("account.txt",ios::in);
                int i=0;
                string username[100];
                string password[100];
                string user;
                string pass;
                while(!input.eof())
                {
                    input>>username[i];
                    input>>password[i];
                    i++;
                }
                cout<<"ENTER USERNAME"<<endl;
                cin>>user;
                int c=100,c1;

                eagain:
                for(int j=0;j<i;j++)
                {
                    if(user==username[j])
                    {
                        cout<<"USERNAME FOUND"<<endl;
                        c=0;
                        c1=j;
                    }
                }
                if(c!=0)
                {
                    cout<<"USERNAME NOT FOUND"<<endl;
                    cout<<"ENTER USERNAME AGAIN"<<endl;
                    cin>>user;
                    goto eagain;
                }
                cout<<"ENTER PASSWORD"<<endl;
                cin>>pass;
                eagain1:
                if(pass==password[c1])
                cout<<"ACCOUNT  FOUND"<<endl;
                else
                {
                    cout<<"ENTERED WRONG PASSWORD"<<endl;
                    cout<<"ENTER PASSWORD AGAIN"<<endl;
                    cin>>pass;
                    goto eagain1;
                }
                input.close();
            }
            break;
            case 2:
            {
                string username,password;
                ofstream o_stream;
                o_stream.open("account.txt",ios::app);

                cout<<"Enter your username: ";
                getline(cin,username);
                getline(cin,username);
                cout<<"Enter your password: ";
                cin>>password;
                o_stream<<username<<endl;
                o_stream<<password<<endl;

                cout<<"Welcome "<<endl;
                o_stream.close();
            }
            break;
            default:
                {
                cout<<"Wrong Choice"<<endl;
                return 0;
                }
        }
        do
        {
          int n,s,x;
          cout<<"Enter:\n";
          cout<<"1. SOLD REPORT\n";
          cout<<"2. STOCK REPORT\n";
          cout<<"3. USER REPORT\n";
          cin>>n;
          switch(n)
          {
              case 1:cout<<"SOLD REPORT:"<<endl<<"\n";
                        ob.soldreport();
                        break;
              case 2:do
                    {
                        cout<<"STOCK REPORT OF:"<<endl;
                        cout<<"1.Earphones"<<endl;
                        cout<<"2.Mobiles"<<endl;
                        cout<<"3.Laptops"<<endl;
                        cout<<"4.Tablets"<<endl;
                        cin>>s;

                        switch(s)
                        {
                            case 1: cout<<"STOCK REPORT OF EARPHONES:"<<endl<<"\n";
                                        ob.stockreporte();
                                        break;
                            case 2: cout<<"STOCK REPORT OF MOBILES:"<<endl<<"\n";
                                        ob.stockreportm();
                                        break;
                            case 3: cout<<"STOCK REPORT OF LAPTOPS:"<<endl<<"\n";
                                        ob.stockreportl();
                                        break;
                            case 4: cout<<"STOCK REPORT OF TABLETS:"<<endl<<"\n";
                                        ob.stockreportt();
                                        break;
                            default: cout<<"Wrong Choice"<<endl;
                        }
                        cout<<"Enter 1 to check other stock report else enter 0"<<endl;
                        cin>>x;
                    }while(x==1);
                break;
                case 3: cout<<"USER REPORT"<<endl;
                            ob.userreport();
                            break;
                default:cout<<"Wrong Choice"<<endl;
            }
            cout<<"enter 1 if you want to any other report else enter 0\n";
            cin>>k;
        }while(k==1);

        break;
        default:cout<<"Wrong Choice";
        return 0;
    }
}






















