/*Sinh hợp âm(guitar) theo tone trưởng bất kì (luyện tập chuyển hợp âm cho người chơi guitar)
 Các tone trưởng gồm có: c(Đô);C(Đô thăng);d(Rê);D(Rê thăng);e(Mi);f(Fa);F(Fa thăng);g(Sol);G(Sol thăng);a(La);A(La thăng);b(Si).

 Hợp âm gồm có:c(Đô trưởng),cm(Đô thứ),C(Đô thăng trưởng),Cm(Đô thăng thứ),d(Rê trưởng),dm(Rê thứ),D(Rê thăng trưởng),Dm(Rê thăng thứ),e(Mi trưởng)
,em(Mi thứ),f(Fa trưởng),fm(Fa thứ),F(Fa thăng trưởng),Fm(Fa thăng thứ),g(Sol trưởng),gm(Sol thứ),G(Sol thăng trưởng),Gm(Sol thăng thứ),a(La trưởng)
,am(La thứ),A(La thăng trưởng),Am(La thăng thứ),b(Si trưởng),bm(Si thứ).
 - 1 tone trưởng có : + 7 hợp âm (bao gồm hợp âm thứ và hợp âm trưởng)
                     + hợp âm bậc 1,4,5 là hợp âm trưởng
                     + hợp âm bậc 2,3,6 là hợp âm thứ
                     + hợp âm bậc 7 là hợp âm dim
 - 4 hợp âm thuộc tone đó sinh ra ngẫu nhiên có quy tắc:
                     + hợp âm thứ nhất được phép chọn là hợp âm bậc 1 hoặc bậc 2 hoặc bậc 4 hoặc bậc 6
                     + hợp âm kết thúc (thứ 4) chọn theo hợp âm thứ nhất: Nếu hợp âm thứ nhất là bậc 1 thì hợp âm thứ 4 được chọn là hợp âm bậc 5 hoặc bậc 4
                                                                          Nếu hợp âm thứ nhất là bậc 2 thì hợp âm thứ 4 được chọn là hợp âm bậc 6 hoặc bậc 1
                                                                          Nếu hợp âm thứ nhất là bậc 4 thì hợp âm thứ 4 được chọn là hợp âm bậc 6 hoặc bậc 1 hoặc bậc 5
                                                                          Nếu hợp âm thứ nhất là bậc 6 thì hợp âm thứ 4 được chọn là hợp âm bậc 5 hoặc bậc 1 hoặc bậc 3
-Trong 1 tone trưởng thì:
    bậc 1 cách bậc 2 :1 cung
    bậc 2 cách bậc 3 :1 cung
    bậc 3 cách bậc 4 :0.5 cung
    bậc 4 cách bậc 5 :1 cung
    bậc 5 cách bậc 6 :1 cung
    bậc 6 cách bậc 7 :1 cung
    (bậc 7 về bậc 1 : 0.5 cung)
-Cách dùng:
    Ấn 1 chữ trong tập hợp các chữ đại diện cho tone trưởng:c,C,d,D,e,f,F,g,G,a,A,b
*/
#include<iostream>
#include<cstring>
#include<cstdlib>
#include<ctime>
#include<random>
using namespace std;
void printChord(char a, bool kiemtra)
{
    if(a=='c'&&kiemtra==true)
    {
        cout<<"------------"<<endl;
        cout<<"x|_|_|_|1|_|"<<endl;
        cout<<"x|_|2|_|_|_|"<<endl;
        cout<<"x|3|_|_|_|_|"<<endl;

    }
    else if(a=='c'&&kiemtra==false)
    {
        cout<<"------------"<<endl;
        cout<<"x|3|3|3|3|3|"<<endl;
        cout<<"x|_|_|_|4|_|"<<endl;
        cout<<"x|_|5|5|_|_|"<<endl;

    }
    else if(a=='C'&&kiemtra==true)
    {
        cout<<"------------"<<endl;
        cout<<"x|_|_|1|1|1|"<<endl;
        cout<<"x|_|_|_|2|_|"<<endl;
        cout<<"x|_|3|_|_|_|"<<endl;
        cout<<"x|4|_|_|_|_|"<<endl;


    }
    else if(a=='C'&&kiemtra==false)
    {
        cout<<"------------"<<endl;
        cout<<"x|4|4|4|4|4|"<<endl;
        cout<<"x|_|_|_|5|_|"<<endl;
        cout<<"x|_|6|6|_|_|"<<endl;

    }
    else if(a=='d'&&kiemtra==true)
    {
        cout<<"------------"<<endl;
        cout<<"x|x|_|_|_|_|"<<endl;
        cout<<"x|x|_|2|_|2|"<<endl;
        cout<<"x|x|_|_|3|_|"<<endl;

    }
    else if(a=='d'&&kiemtra==false)
    {
        cout<<"------------"<<endl;
        cout<<"x|x|_|_|_|1|"<<endl;
        cout<<"x|x|_|2|_|_|"<<endl;
        cout<<"x|x|_|_|3|_|"<<endl;

    }
    else if(a=='D'&&kiemtra==true)
    {
        cout<<"------------"<<endl;
        cout<<"x|x|1|_|_|_|"<<endl;
        cout<<"x|x|_|_|_|_|"<<endl;
        cout<<"x|x|_|3|_|3|"<<endl;
        cout<<"x|x|_|_|4|_|"<<endl;

    }
    else if(a=='D'&&kiemtra==false)
    {
        cout<<"------------"<<endl;
        cout<<"x|x|1|_|_|_|"<<endl;
        cout<<"x|x|_|_|_|2|"<<endl;
        cout<<"x|x|_|3|_|_|"<<endl;
        cout<<"x|x|_|_|4|_|"<<endl;
    }
    else if(a=='e'&&kiemtra==true)
    {
        cout<<"------------"<<endl;
        cout<<"_|_|_|1|_|_|"<<endl;
        cout<<"_|2|2|_|_|_|"<<endl;
        cout<<"_|_|_|_|_|_|"<<endl;

    }
    else if(a=='e'&&kiemtra==false)
    {
        cout<<"------------"<<endl;
        cout<<"_|_|_|_|_|_|"<<endl;
        cout<<"_|2|2|_|_|_|"<<endl;
        cout<<"_|_|_|_|_|_|"<<endl;
    }
    else if(a=='f'&&kiemtra==true)
    {
        cout<<"------------"<<endl;
        cout<<"1|1|1|1|1|1|"<<endl;
        cout<<"_|_|_|2|_|_|"<<endl;
        cout<<"_|3|3|_|_|_|"<<endl;
    }
    else if(a=='f'&&kiemtra==false)
    {
        cout<<"------------"<<endl;
        cout<<"1|1|1|1|1|1|"<<endl;
        cout<<"_|_|_|_|_|_|"<<endl;
        cout<<"_|3|3|_|_|_|"<<endl;
    }
    else if(a=='F'&&kiemtra==true)
    {
        cout<<"------------"<<endl;
        cout<<"2|2|2|2|2|2|"<<endl;
        cout<<"_|_|_|3|_|_|"<<endl;
        cout<<"_|4|4|_|_|_|"<<endl;
    }
    else if(a=='F'&&kiemtra==false)
    {
        cout<<"------------"<<endl;
        cout<<"2|2|2|2|2|2|"<<endl;
        cout<<"_|_|_|_|_|_|"<<endl;
        cout<<"_|4|4|_|_|_|"<<endl;
    }
    else if(a=='g'&&kiemtra==true)
    {
        cout<<"------------"<<endl;
        cout<<"_|_|_|_|_|_|"<<endl;
        cout<<"_|2|_|_|_|_|"<<endl;
        cout<<"3|_|_|_|3|3|"<<endl;
    }
    else if(a=='g'&&kiemtra==false)
    {
        cout<<"------------"<<endl;
        cout<<"3|3|3|3|3|3|"<<endl;
        cout<<"_|_|_|_|_|_|"<<endl;
        cout<<"_|5|5|_|_|_|"<<endl;
    }
    else if(a=='G'&&kiemtra==true)
    {
        cout<<"------------"<<endl;
        cout<<"4|4|4|4|4|4|"<<endl;
        cout<<"_|_|_|5|_|_|"<<endl;
        cout<<"_|6|6|_|_|_|"<<endl;
    }
    else if(a=='G'&&kiemtra==false)
    {
        cout<<"------------"<<endl;
        cout<<"4|4|4|4|4|4|"<<endl;
        cout<<"_|_|_|_|_|_|"<<endl;
        cout<<"_|6|6|_|_|_|"<<endl;
    }
    else if(a=='a'&&kiemtra==true)
    {
        cout<<"------------"<<endl;
        cout<<"x|_|_|_|_|_|"<<endl;
        cout<<"x|_|2|2|2|_|"<<endl;
        cout<<"x|_|_|_|_|_|"<<endl;
    }
    else if(a=='a'&&kiemtra==false)
    {
        cout<<"------------"<<endl;
        cout<<"x|_|_|_|1|_|"<<endl;
        cout<<"x|_|2|2|_|_|"<<endl;
        cout<<"x|_|_|_|_|_|"<<endl;
    }
    else if(a=='A'&&kiemtra==true)
    {
        cout<<"------------"<<endl;
        cout<<"x|1|1|1|1|1|"<<endl;
        cout<<"x|_|_|_|_|_|"<<endl;
        cout<<"x|_|3|3|3|_|"<<endl;
    }
    else if(a=='A'&&kiemtra==false)
    {
        cout<<"------------"<<endl;
        cout<<"x|1|1|1|1|1|"<<endl;
        cout<<"x|_|_|_|2|_|"<<endl;
        cout<<"x|_|3|3|_|_|"<<endl;
    }
    else if(a=='b'&&kiemtra==true)
    {
        cout<<"------------"<<endl;
        cout<<"x|2|2|2|2|2|"<<endl;
        cout<<"x|_|_|_|_|_|"<<endl;
        cout<<"x|_|4|4|4|_|"<<endl;
    }
    else if(a=='b'&&kiemtra==false)
    {
        cout<<"------------"<<endl;
        cout<<"x|2|2|2|2|2|"<<endl;
        cout<<"x|_|_|_|3|_|"<<endl;
        cout<<"x|_|4|4|_|_|"<<endl;
    }
}

int main()
{
//tất cả các nốt nhạc
    vector<char> note;
    note.push_back('c');
    note.push_back('C');
    note.push_back('d');
    note.push_back('D');
    note.push_back('e');
    note.push_back('f');
    note.push_back('F');
    note.push_back('g');
    note.push_back('G');
    note.push_back('a');
    note.push_back('A');
    note.push_back('b');
// các nốt trong 1 tone
    vector<char> tone;
    char x;
    cin>>x;
    int q;
    int p;
    for(int i=0; i<note.size(); i++)
    {
        if(note[i]==x)
        {
            q=i+1;
        }
    }
    tone.push_back(note[q-1]);
    p=q+2;
    if(p>12)
    {
        p=p-12;
    }
    tone.push_back(note[p-1]);
    p=q+4;
    if(p>12)
    {
        p=p-12;
    }
    tone.push_back(note[p-1]);
    p=q+5;
    if(p>12)
    {
        p=p-12;
    }
    tone.push_back(note[p-1]);
    p=q+7;
    if(p>12)
    {
        p=p-12;
    }
    tone.push_back(note[p-1]);
    p=q+9;
    if(p>12)
    {
        p=p-12;
    }
    tone.push_back(note[p-1]);
    p=q+11;
    if(p>12)
    {
        p=p-12;
    }
    tone.push_back(note[p-1]);
// hợp âm trưởng và hợp âm thứ
    bool majormin[256];
    memset(majormin,true,sizeof(majormin));
    for(int i=0; i<tone.size(); i++)
    {
        if(i+1==2||i+1==3||i+1==6)
        {
            majormin[tone[i]]=false;
        }
    }
//mảng hợp âm thứ nhất
    vector<char> Ha1;
    Ha1.push_back(tone[0]);
    Ha1.push_back(tone[1]);
    Ha1.push_back(tone[3]);
    Ha1.push_back(tone[5]);
// mảng các hợp âm thứ 4
    vector<char> HA41;
    HA41.push_back(tone[4]);
    HA41.push_back(tone[3]);
    vector<char> HA42;
    HA42.push_back(tone[5]);
    HA42.push_back(tone[0]);
    vector<char> HA43;
    HA43.push_back(tone[5]);
    HA43.push_back(tone[0]);
    HA43.push_back(tone[4]);
    vector<char> HA44;
    HA44.push_back(tone[4]);
    HA44.push_back(tone[0]);
    HA44.push_back(tone[2]);
//chọn h/am thứ nhất
    char hopam1;
    char hopam2;
    char hopam3;
    char hopam4;
    srand(time(NULL));
    int n=(rand()%4)+1;
    hopam1=Ha1[n-1];
//chọn h/am thứ 4
    switch(n-1)
    {
    case 0:
        n=(rand()%2)+1;
        hopam4=HA41[n-1];
        break;
    case 1:
        n=(rand()%2)+1;
        hopam4=HA42[n-1];
        break;
    case 2:
        n=(rand()%3)+1;
        hopam4=HA43[n-1];
        break;
    case 3:
        n=(rand()%3)+1;
        hopam4=HA44[n-1];
        break;
    }
//chọn h/am thứ 2
    n=(rand()%6)+1;
    hopam2=tone[n-1];
    while(hopam2==hopam1||hopam2==hopam4)
    {
        n=(rand()%6)+1;
        hopam2=tone[n-1];
    }
//chọn h/am thứ 3
    n=(rand()%6)+1;
    hopam3=tone[n-1];
    while(hopam3==hopam1||hopam3==hopam4||hopam3==hopam2)
    {
        n=(rand()%6)+1;
        hopam3=tone[n-1];
    }
// thêm kí hiệu 'm' vào sau hợp âm thứ, còn hơp âm trưởng thì không phải thêm
    char duoi1=' ';
    for(int i=0; i<tone.size(); i++)
    {
        if(hopam1==tone[i]&&majormin[tone[i]]==false)
        {
            duoi1='m';
        }
    }
    char duoi2=' ';
    for(int i=0; i<tone.size(); i++)
    {
        if(hopam2==tone[i]&&majormin[tone[i]]==false)
        {
            duoi2='m';
        }
    }
    char duoi3=' ';
    for(int i=0; i<tone.size(); i++)
    {
        if(hopam3==tone[i]&&majormin[tone[i]]==false)
        {
            duoi3='m';
        }
    }
    char duoi4=' ';
    for(int i=0; i<tone.size(); i++)
    {
        if(hopam4==tone[i]&&majormin[tone[i]]==false)
        {
            duoi4='m';
        }
    }

    cout<<hopam1<<duoi1<<" "<<hopam2<<duoi2<<" "<<hopam3<<duoi3<<" "<<hopam4<<duoi4<<endl;
    bool HA1;
    if(duoi1=='m')
    {
        HA1=false;
    }
    else HA1=true;
    cout<<"FIRST CHORD"<<':'<<hopam1<<endl;
    printChord(hopam1,HA1);
    cout<<endl;
    bool HA2;
    if(duoi2=='m')
    {
        HA2=false;
    }
    else HA2=true;
    cout<<"SECOND CHORD"<<':'<<hopam2<<endl;
    printChord(hopam2,HA2);
    cout<<endl;
    bool HA3;
    if(duoi3=='m')
    {
        HA3=false;
    }
    else HA3=true;
    cout<<"THIRT CHORD"<<':'<<hopam3<<endl;
    printChord(hopam3,HA3);
    cout<<endl;
    bool HA4;
    if(duoi4=='m')
    {
        HA4=false;
    }
    else HA4=true;
    cout<<"FINAL CHORD"<<':'<<hopam4<<endl;
    printChord(hopam4,HA4);
    cout<<endl;
    return 0;
}
