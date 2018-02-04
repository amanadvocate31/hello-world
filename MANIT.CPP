#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
int curt_yr[6];  //current date
int yr;          // current year
int sch[9];    // array for scholar no
int valid_sch()
{ int i,a=1,c;
  cout<<"enter scholar no\n";
  for(int j=0;j<9; j++)
  {cin>>sch[j];
  } c=sch[0]*10+sch[1];
 if( c > (yr-5))
     {
      for(i=2;i<9;i++)
      {
       switch(i)
      {
      case 2:
      {
      if(sch[i]==1 || sch[i]==2)
      {
      a=0;
	  }
	  else
	{  a=1; }
	  break;}
    case 3:
    {
    if(sch[i]==1)
   { a=0; }
     else
    { a=1;}
    break;
   }
   case 4:
   {
   if(sch[2]==1 && sch[i]==1)
   a=0;
   else if(sch[2]==2 &&( (sch[i]==0 || sch[i]==1) || sch[i]==2))
   { a=0;}

   else
  { a=1;}
   break;
   }
   case 5:
   { if(sch[2]==1 && ((sch[i]!=0 && sch[i]!=8) && sch[i]!=5))
   a=0;
   else if(sch[2]==2 && sch[i]!=0)
   a=0;
   else
   a=1;
   break;
   }}

   if(a==1)
   {
   return 0;
   break ;
   }

    }
   if(a==0)
   {
   return 1 ;
   }}
   else
   return 0;

 }
   char *getbranch()
   {
   int l;  char *ch="branch"  ;
   l=valid_sch();
   if(l==1)
   {if(sch[2]==1)
   {
   switch(sch[5])
   {
   case 1:   ch = "bci";
   break;
   case 2:   ch="cse";

   break;
   case 3:   ch="electrical";
   break;
   case 4:    ch="ece";

   break;
   case 6:   ch="mech";
     break;
   case 7: ch="chemical"  ;

   break;
   case 9:  ch="msme";
   break;
   } return ch;
     }
   else
   {
   if(sch[4]==1)
   {
    switch(sch[5])
      {  case 1:{
      switch(sch[6])
      {
      case 1:  ch="geotechnical engg";
      break;
      case 2:  ch="hydropower engg";
      break;
      case 3:    ch="environmental";
      break;
      case 4:   ch="structural";
      break;
      case 5:   ch="transport"  ;
      break;
      case 7:  ch="water";
      }
      return ch;
      break; }
      case 2:
      {  switch(sch[6])
      {
      case 1: ch="computer networking";
      break;
      case 2: ch="information security";
      break;
      case 3 : ch="advanced computing";
      }
       return ch;
       break;}
      case 3:
      {
      switch(sch[6])
      {
      case 1: ch="power";
      break;
      case 2: ch="elect";
      }
     return ch;
      break;}

      case 4:
      {
      switch(sch[6])
      {
      case 1: ch="digital";
      break ;
      case 2: ch="vlsl";
      }
      return ch;
      break ;}
      case 6:
      {
	 switch(sch[6])
	 {
	 case 1:
	 ch="thermal";
	 break;
	 case 2:
	 ch="maintenance";
	 break;
	 case 3:
	 ch="industrial";
	 break;
	 case 4:
	 ch="engg materials";
	 break;
	 case 5:
	 ch="stress and vibrational";}
	 return ch;
	 break;
	 }
    case 7:
    {
    ch="chemical process";
    return ch;
    break;
    }
    case 8:
    {
    switch(sch[6])
    {
    case 1: ch="green tecnology";
    break;
    case 2:
    ch="renewable";
    }
    return ch;
    break;
    }
    case 9:
    {
    ch="material";
    return ch;
    }
    }}
    else if(sch[4]==2)
    {
    switch(sch[5])
    {
    case 4:
    ch="bio tecnology";
    break;
    case 5:
    ch="geoinformation";
    break;
    case 6:
    ch="nano technoloy";
    }
    return ch;
    }
    else
    { ch="bio information";
    return ch;}
     }}
   else
   cout<<"please enter valid scholar number";
					     }
    int getyear()
    { int k,j,a;
 a= valid_sch();
 k=sch[0]*10+sch[1];
    j = yr-k+1;
    if(a==1){
    switch(j)
    {
    case 1:
    return 1;
    break;
    case 2:
    return 2;break;
    case 3:
    return 3;break;
    case 4 :
    return 4;}}
    else
    {
    return 0;}}

    char *getSemester()
    { int a,b; char * ch="sems";
    a=getyear();
    b= curt_yr[2]*10 + curt_yr[3];
     if(b>7)
     {switch(a)
     {
     case 1: ch="i";
     break;
     case 2:
     ch="iii";
     break;
     case 3:
     ch="v";
     break;
     case 4:
     ch="vii";
     }
     return ch;
     }
     else
     {
     switch(a)
     {
     case 1: ch="ii";
     break;
     case 2: ch="iv";
     break;
     case 3: ch="vi";
     break;
     case 4: ch="viii";
     }
     return ch;
     } }
 class branch
{
public:
char * name;
int sems;
char *sub[10];
void read(int i);
void get_sub(char *,int)  ;
};
void branch :: read(int i)
{
switch(i)
{
case 1:
{       switch(sems)
    {
    case 1:
    {
    sub[5]="mathematics 1(MTH 111)" ;
       sub[0]="basic civil engineering(CE112)";
    sub[1]="communication skills(HUM114)";
    sub[2]="computer programing(CS115)";
    sub[3]="computer program lab(CS117)";
    sub[4]="engineering graphics(ME116)";
     sub[6]="physics(PHY113)";
     sub[7]="physics(PHY118)";
     break;
     }
   }
    }}}



void branch :: get_sub(char *nam,int sem)
{        name=nam;
	  sems=sem;
	  if(!strcmp(name,"civil"))
  read(1);
   else if(!strcmp(name,"cse"))
   read(2);
   else if(!strcmp(name,"electrical"))
   read(3);
   else if(!strcmp(name,"ece"))
   read(4);
   else if(!strcmp(name,"mech"))
   read(5);
   else if(!strcmp(name,"chemical"))
   read(6);
   else if(!strcmp(name,"msme"))
   read(7);
   else if(!strcmp(name,"ge"))
   read(8);
   else if(!strcmp(name,"hp"))
   read(9);
   else if(!strcmp(name,"ee"))
   read(10);
   else if(!strcmp(name,"se"))
   read(11);
   else if(!strcmp(name,"te"))
   read(12);
   else if(!strcmp(name,"wr"))
   read(13);
   else if(!strcmp(name,"cn"))
   read(14);
   else if(!strcmp(name,"is"))
   read(15);
   else if(!strcmp(name,"ac"))
   read(16);
   else if(!strcmp(name,"ps"))
   read(17);
   else if(!strcmp(name,"em"))
   read(18);
   else if(!strcmp(name,"dc"))
   read(19);
   else if(!strcmp(name,"vl"))
   read(20);
     else if(!strcmp(name,"he"))
    read(21);
    else if(!strcmp(name,"mm"))
    read(22);
    else if(!strcmp(name,"id"))
    read(23);
    else if(!strcmp(name,"em"))
    read(24);
    else if(!strcmp(name,"sv"))
    read(25);
    else if(!strcmp(name,"cp"))
    read(26);
    else if(!strcmp(name,"gt"))
    read(27);
    else if(!strcmp(name,"re"))
      read(28);
      else if(!strcmp(name,"ms"))
      read(29);
      else if(!strcmp(name,"bt"))
      read(30);
      else if(!strcmp(name,"gi"))
      read(31);
      else if(!strcmp(name,"nt"))
      read(32);
      else if(!strcmp(name,"bi"))
      read(33);}

     void main()
     {
     clrscr();
     int  n;
     char *nam;
     int sem;
     branch s;

    cout<<"welcome to manit help desk\n";
     cout<<"enter current date in format(ddmmyy)\n";
     for(int j=0;j<6;j++)
     {cin>>curt_yr[j];}
     yr=curt_yr[4]*10+curt_yr[5];

       cout<<"enter 1 to know your subjects by scholar number\n";
       cout<<"enter 2 to know your subjects by your branch and semester \n";

      cin>>n;
      if(n==2)
      {
      cout<<"enter your branch\n";
      gets(nam);
      cout<<"enter your semester \n";
      cin>>sem;
      s.get_sub(nam,sem);
      for(int i=0;s.sub[i]!=NULL;i++)
      { cout<<s.sub[i];
      cout<<"\n";
      }
       }
     getch();
     }


