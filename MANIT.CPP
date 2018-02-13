#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
int curt_yr[6];  //  for current date
int yr;          //for  current year
int sch[9];    // for array for scholar no
int getyear();       // for getting year
char *getbranch();    // for getting branch

int class_str()   // for class strenght
{    int a=0,c,b;
char *ch;
if(sch[6]==0 )
b=sch[7]*10+sch[8];         // for class strength
else
b= sch[6]*100+sch[7]*10+sch[8];     // class strength>100

c=getyear();                        // getting year

  if(sch[2]==1)
  { switch(sch[5])                   // btech
  {
   case 1:
   {      switch(c)
   {
   case 1:                                // first year strengh
   { if(b<=103)
      a=1;
      else
     a=0;

      break;
      }
   case 2:
   {                                         // second year strenght
   if(b<=102)
   a=1;
   else
    a=0;

   break;
   }
   case 3:
   {
   if(b<=126)                             // third year strenght
   a=1;
   else
   a=0;

   break;
   }
   case 4:                                 // fourth year strenght
   {
   if(b<=139)
   a=1;
   else
   a=0;

   }
   }
   return a;                              // similarly for all btech branches



   }
  case 2:
  {   if(sch[6]==2 || sch[6]==3)              // for two section of branch
   {
   switch(c)
  {case 1 :
  {
  if(b<=301)
  a=1;
  else
  a=0;
 break;
  }
  case 2:
  {
  if(b<=300)
  a=1;
  else
  a=0;
  break;
  }
  case 3:
  {
  if(b<=310)
  a=1;
  else
  a=0;
  break;
  }
  case 4:
  {
  if(b<=307)
  a=1;
  else
  a=0;

  }
    }}
 else
 {  switch(c) {
 case 1:
 {
 if(b<=109)
 a=1;
 else
a=0;
break;
 }
 case 2:
 {
 if(b<=106)
 a=1;
 else
 a=0 ;
 break;
 }
 case 3:
 {
 if(b<=114)
 a=1;
 else
 a=0;
 break;
 }
 case 4:
 {
 if(b<=110)
 a=1;
 else
 a=0;

 }
 }}
 return a;

 }
 case 3:
 {
 switch(c)
 {
 case 1:
 {
 if(b<=122)
 a=1;
 else
 a=0 ;
break;
 }
 case 2:
 {
 if(b<=125)
 a=1;
 else
 a=0 ;
 break;
 }
 case 3:
 {
 if(b<=130)
 a=1;
 else
a=0 ;

 break;
 }
 case 4:
 {
 if(b<=134)
 a=1;
 else
a=0;


 } }
 return a;

 }
 case 4:
{
switch(c)
{
case 1:
{
if(b<=148)
a=1;
else
 a=0 ;

break;
}
case 2:
{
if(b<=165)
a=1;
else
a=0 ;

break;
}
case 3:
{
if(b<=169)
a=1;
break;
}
case 4:
{
if(b<=171)
a=1;
else
a=0 ;


}}
return a;

}
case 6 :
{ if(sch[6]==2 || sch[6]==3)
  {
  switch(c)
  {
case 1:
{
if(b<=290)
   a=1;
   else
a=0 ;

   break;
   }
 case 2:
 {
 if(b<=294)
 a=1;
 else
a=0 ;

 break;
 }
 case 3:
 {
 if(b<=301)
 a=1;
 else
a=0 ;

 break;
 }
 case 4:
 {
 if(b<=296)
 a=1;
 else
a=0 ;


 }
 }
 }
 else
 {
 switch(c)
 {
 case 1:
 {
 if(b<=94)
 a=1;
 else
a=0 ;

 break;
 }
 case 2:
 {
 if(b<=100)
 a=1;
 else
a=0 ;

 break;
 }
 case 3:
 {
 if(b<=110)
 a=1;
 else
a=0 ;
 break;
 }
 case 4:
 {
 if(b<=101)
 a=1;
 else
 a=0 ;


 }
 }}
 return a;

 }
case 7:
{
switch(c)
{
case 1:
{
if(b<=69)
a=1;
else
 a=0 ;

break;
}
case 2:
{
if(b<=57)
a=1;
else
 a=0 ;

break;
}
case 3:
{
if(b<=73)
a=1;
else
 a=0 ;

break;
}
case 4:
{
if(b<=92)
a=1;
else
 a=0 ;


}
}
return a;

}
case 9:
{
switch(c)
{
case 1:
{
if(b<=77)
a=1;
else
 a=0 ;

break;
}
case 2:
{
if(b<=51)
a=1;
else
 a=0 ;

break;
}
case 3:
{
if(b<=64)
a=1;
else
 a=0 ;
break;
}
case 4:
{
if(b<=69)
a=1;
else
 a=0 ;

}}
return a;
}}}
else
{   b=sch[7]*10+sch[8];
						    // getting branch
  ch = getbranch();
  if(!strcmp(ch,"geoinformatics"))    // mtech cases more simply by name branches as there is no pattern
  {  if(c==1 && b<=14)
      a=1;
      else if(c==2 && b<=15)
      a= 1;
      else
      a= 0;
      }
  else if(!strcmp(ch,"nanotechnology"))
   {
   if(c==1 && b<=13)
   a= 1;
   else if(c==2 && b<=18)
   a= 1;
   else
   a= 0; }
   else if(!strcmp(ch,"renewable energy"))
   {
   if(c==1 && b<=15)
   a= 1;
   else if(c==2 && b<=26)
   a= 1;
   else
   a= 0;
   }
   else if(!strcmp(ch,"advanced computing"))
   {
   if(c==1 && b<=18)
   a= 1;
   else if(c==2 && b<=19)
   a= 1;
   else
   a= 0;
   }
   else if(!strcmp(ch,"bioinformatics"))
   {
   if(c==1 && b<=11)
   a= 1;
   else if(c==2 && b<=10)
   a= 1;
   else
   a= 0;
   }
   else if(!strcmp(ch,"biotechnology"))
   {
   if(c==1 && b<=16)
   a= 1;
   else if(c==2 && b<=11)
   a= 1;
   else
   a= 0;
   }
   else if(!strcmp(ch,"chemical process"))
   {
   if(c==1 && b<=5)
   a= 1;
   else if(c==2 && b<=9)
   a= 1;
   else
   a= 0;
   }
   else if(!strcmp(ch,"computer networking"))
   {
   if(c==1 && b<=12)
   a= 1;
   else if(c==2 && b<=18)
   a= 1;
   else
   a= 0;
   }
   else if(!strcmp(ch,"digital"))
   {
   if(c==1 && b<=16)
   a= 1;
   else if(c==2 && b<=18)
   a= 1;
   else
   a= 0;
   }
   else if(!strcmp(ch,"electrical drives"))
   {
   if(c==1 && b<=19)
   a= 1;
   else if(c==2 && b<=18)
   a= 1;
   else
   a= 0;
   }
   else if(!strcmp(ch,"engg materials"))
   {
   if(c==1 && b<=19)
   a= 1;
   else if(c==2 && b<=18)
   a= 1;
   else
   a= 0;
   }
   else if(!strcmp(ch,"environmental engg"))
   {
   if(c==1 && b<=21)
   a= 1;
   else if(c==2 && b<=18)
   a= 1;
   else
   a= 0;
   }
   else if(!strcmp(ch,"geotechnical engg"))
   {
   if(c==1 && b<=21)
   a= 1;
   else if(c==2 && b<=19)
   a= 1;
   else
   a= 0;
   }
   else if(! strcmp (ch,"green technology"))
   {
   if(c==1 && b<=13)
   a= 1;
   else if(c==2 && b<=19)
   a= 1;
   else
   a= 0;
   }
   else if (!strcmp(ch,"hydropower engg"))
   {
   if(c==1 && b<=17)
   a= 1;
   else if(c==2 && b<=25)
   a= 1;
   else
   a= 0;
   }
   else if(!strcmp(ch,"industrial design"))
   {
   if(c==1 && b<=17)
   a= 1;
   else if(c==2 && b<=18)
   a= 1;
   else
   a= 0;
   }
   else if(!strcmp(ch,"information security"))
   {
   if(c==1 && b<=16)
   a= 1;
   else if(c==2 && b<=19)
   a= 1;
   else
   a= 0;
   }
   else if(!strcmp(ch,"maintenance engg"))
   {
   if(c==1 && b<=19)
   a= 1;
   else if(c==2 && b<=22)
   a= 1;
   else
   a= 0;
   }
   else if(!strcmp(ch,"power system"))
   {
   if(c==1 && b<=16)
   a= 1;
   else if(c==2 && b<=18)
   a= 1;
   else
   a= 0;
   }
  else if(!strcmp(ch,"stress and vibrational"))
  {
  if(c==1 && b<=21)
  a= 1;
  else if(c==2 && b<=19)
  a= 1;
  else
  a= 0;
  }
  else if(!strcmp(ch,"structural engg"))
  {
  if(c==1 && b<=17)
  a= 1;
  else if(c==2 && b<=18)
  a= 1;
  else
  a= 0;
  }
  else if(!strcmp(ch,"thermal engg"))
  {
  if(c==1 && b<=16)
  a= 1;
  else if(c==2 && b<=19)
  a= 1;
  else
  a= 0;
  }
  else if(!strcmp(ch,"transportational engg"))
  {
  if(c==1 && b<=18)
  a= 1;
  else if(c==2 && b<=14)
  a= 1;
  else
  a= 0;
  }
  else if(!strcmp(ch,"vlsl and embedded system"))
  {
  if(c==1 && b<=17)
  a= 1;
  else if(c==2 && b<=21)
  a= 1;
  else
  a= 0;
  }
  else if(!strcmp(ch,"water resources engg"))
  {
  if(c==1 && b<=23)
  a= 1;
  else if(c==2 && b<=21)
  a= 1;
  else
  a= 0;
  }
  else if(!strcmp(ch,"material science and technology"))
  {
  if(c==1 && b<=19)
  a= 1;
  else if(c==2 && b<=19)
  a= 1;
  else
  a= 0;
  }
   }
   return a;

   }




















int valid_sch()       //function for checking scholar number
{ int i,a=1,c,k,b;             // variables for random operational
  cout<<"enter scholar no(press space bar after each entry)\n";
  for(int j=0;j<9; j++)        // getting scholar number
  {cin>>sch[j];
  } c=sch[0]*10+sch[1] ;	// sum of first two digit
   if (sch[2]==1 && c>(yr-5) )
   b=1;
   else if(sch[2]==2 && c>(yr-3))
   b=1;
   else
   b=0;

 if( b==1 && c< yr )               // since after four year scholar become invalid
     {
      for(i=2;i<6;i++)
      {
       switch(i)                //for  checking each digit of scholar number
      {
      case 2:
      {
      if(sch[i]==1 || sch[i]==2)     // btech and mtech have 1 and 2 in this place

	 a=1;
       else
	{  a=0;
	return a;
	}
	  break;
	  }
    case 3:
    {
    if(sch[i]==1)                     // this is unique in each scholar number
   { a=1; }
     else
    { a=0;
    return a;
    }
    break;
   }
   case 4:
   {
   if(sch[2]==1 && sch[i]==1)         // btech contains only 1 while mtech contains 0,1 and 2
   a=1;
   else if(sch[2]==2 &&( (sch[i]==0 || sch[i]==1) || sch[i]==2))
   { a=1;}

   else
  { a=0;
     return a;       }
   break;
   }
   case 5:
   { if(sch[2]==1 && ((sch[i]!=0 && sch[i]!=8) && sch[i]!=5))    // in btech there is no 0,8 and 5 in this place
   a=1;
   else if(sch[2]==2 && sch[i]!=0)                             //in mtech there is no 0 at this place
   a=1;
   else
  { a=0;
  return a;}
   break;
   }
  case 6:
  {
  if(sch[2]==2)                         // strength of mtech <100 always
  {
  if(sch[i]<=5 || sch[i]==7)
  a=1;
  else
  return 0;
  }}
 }}
   k  = class_str();                // checking scholar no upto class strengh

   return k;
   }
   else
   return 0;

 }
   char *getbranch()
   {
     char *ch  ;
   {if(sch[2]==1)
   {
   switch(sch[5])
   {
   case 1:   ch = "civil";
   break;
   case 2: { if(sch[6]==0 || sch[6]==1)
    ch="cse1";
    else
    ch="cse2";
  break;}
   case 3:   ch="electrical";
   break;
   case 4:    ch="ece";

   break;
   case 6: {

	 if(sch[6]==0 || sch[6]==1)
     ch="mech1";
     else
     ch="mech2";
     break;}
   case 7: ch="chemical"  ;

   break;
   case 9:  ch="msme";
   break;
   } return ch;
     }
   else
   {                        // analysis of scholar number give following cases of mtech
   if(sch[4]==1)
   {
    switch(sch[5])
      {  case 1:{
      switch(sch[6])
      {
      case 1:  ch="geotechnical engg";
      break;
      case 2:  ch="hydropower engg ";
      break;
      case 3:    ch="environmental engg";
      break;
      case 4:   ch="structural engg";
      break;
      case 5:   ch="transportational engg"  ;
      break;
      case 7:  ch="water resource engg";
      }
      return ch;
       }
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
       }
      case 3:
      {
      switch(sch[6])
      {
      case 1: ch="power system";
      break;
      case 2: ch="electrical drives";
      }
     return ch;
      }

      case 4:
      {
      switch(sch[6])
      {
      case 1: ch="digital";
      break ;
      case 2: ch="vlsl and embedded system ";
      }
      return ch;
      }
      case 6:
      {
	 switch(sch[6])
	 {
	 case 1:
	 ch="thermal engg";
	 break;
	 case 2:
	 ch="maintenance engg";
	 break;
	 case 3:
	 ch="industrial design";
	 break;
	 case 4:
	 ch="engg materials";
	 break;
	 case 5:
	 ch="stress and vibrational";}
	 return ch;

	 }
    case 7:
    {
    ch="chemical process";
    return ch;

    }
    case 8:
    {
    switch(sch[6])
    {
    case 1: ch="green technology";
    break;
    case 2:
    ch="renewable energy";
    }
    return ch;

    }
    case 9:
    {
    ch="material science and technology";
    return ch;
    }
    }}
    else if(sch[4]==2)
    {
    switch(sch[5])
    {
    case 4:
    ch="biotechnology";
    break;
    case 5:
    ch="geoinformatics";
    break;
    case 6:
    ch="nanotechnology";
    }
    return ch;
    }
    else
    { ch="bioinformatics";
    return ch;}
     }}
       }

    int getyear()
    { int k,j,a;
  a=curt_yr[2]*10+curt_yr[3];
 k=sch[0]*10+sch[1];
 if(a>6 && a<=12 )            //all odd semester have same first 2 digit as current year
    j = yr-k+1;
 else
 j=yr-k;                     // even semester have 1 less than current year
 return j;


    }

    char *getSemester()                // for getting string semester
    { int a,b;
    char * ch;
    a=getyear();
    b= curt_yr[2]*10 + curt_yr[3];
     if(b>6)
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

  int getintsems( )                     // for converting string into integer
  {
  char *ch;
  ch=getSemester();
  if(!strcmp(ch,"i"))
  return 1;
  else if(!strcmp(ch,"ii"))
  return 2;
  else if(!strcmp(ch,"iii"))
  return 3;
  else if(!strcmp(ch,"iv"))
  return 4;
  else if(!strcmp(ch,"v"))
  return 5;
  else if(!strcmp(ch,"vi"))
  return 6;
  else if(!strcmp(ch,"vii"))
  return 7;
  else
  return 8;
  }





 class branch
{
public:                                          // branch wise subjects
char * name;                                    // for name of branch
int sems;                                      //for semester
int ns;                                       //for no. of subjects
char *sub[15];                                // array of string for subjects
void read(int i);                             // for storing subjects
void getsub(char *ch, int k)  ;                //for geting subjects
char * print(int i)                          // for returning particular subject of semester
 {
    return  sub[i] ;
    }


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
     ns=8;
     break;
     }
    case 2:
    {
    sub[0]="basic electronic and electrical engg(EE124)";
    sub[1]="basic mechanical engg(ME125)";
    sub[2]="chemistry lab(CHEM129)";
    sub[3]="electronics and electrical lab(EE128)";
    sub[4]="engineering chemistry(CHEM122)";
    sub[5]="environment science(CE123)";
    sub[6]="mathematics(MTH121)";
    sub[7]="solid mechanics(CE126)";
    sub[8]="workshop practice(ME127)";
    ns=9;
    break;
    }
    case 3:
    {
    sub[5]="mathematics(MTH211)";
    sub[1]="surveying1(CE212)";
    sub[2]="structural analysis1(CE213)";
    sub[3]="fluid mechanics 1(CE214)"  ;
    sub[1]="engineering geology(CE215)";
    sub[0]="building planning and drawing(ce216)";
    sub[6]="surveying laboratory 1(ce217)";
    sub[4]="fluid mechanics labortatory 1(ce218)";
    sub[2]="engineering geology laboratory(ce219)";
    ns=9;
    break;
    }
    case 4:
    {
    sub[3]="geotechnical engineering 1(ce221)";
    sub[0]="engineering hydrology(ce222)";
    sub[1]=" fluid mechanics 2 (ce223)";
    sub[5]=" project costing and contract management(ce224)";
    sub[6]="structural design & drawing 1(ce225)";
    sub[7]="surveying 2 (ce226)";
    sub[8]="surveying laboratory 2(ce227)";
    sub[4]="geotechnical engineering laboratory1(ce228)";
    sub[2]="fluid mechanics laboratory2(ce229)";
    ns=9;
    break;
    }
    case 5:
    {
    sub[2]="structural design & drawing 2(ce311)";
    sub[0]="geotecnical engg 2(ce312)";
    sub[3]="transportation engineering1(ce313 )";
    sub[1]="geotecnical engg. lab 2(ce314)";
    sub[4]="transportation engg.lab(ce315)";
    ns=5;
    break;
    }
    case 6:
    {
    sub[1]="irrigation engg(ce321)";
    sub[3]="project costing and contract mangement(ce322)";
    sub[5]="water supply engg(ce323)";
    sub[4]="structural analysis lab(ce324)";
    sub[0]="CAD lab(ce325)";
    sub[2]="minor project(ce326)";
    ns=6;
    break;
    }
    case 7:
    {
    sub[3]="wastewater engg(ce411)";
    sub[2]="water and wastewater analysis lab(ce413)";
    sub[1]="major project(ce413)";
    sub[0]="educational tour & training(ce414)";
    ns=4;
    break;
    }
    case 8:
    {
    sub[2]="transportation engg (ce421)";
    sub[1]="major project(ce422)";
    sub[0]="general proficiency(ce423)";
    ns=3;
    }  }

    break;
 }
 case 2 :
 {
	switch(sems)
    {
     case 2:
    {
    sub[5]="mathematics 1(MTH 111)" ;
    sub[0]="basic civil engineering(CE112)";
    sub[1]="communication skills(HUM114)";
    sub[2]="computer programing(CS115)";
    sub[3]="computer program lab(CS117)";
    sub[4]="engineering graphics(ME116)";
     sub[6]="physics(PHY113)";
     sub[7]="physics(PHY118)";
     ns=8;
     break;
     }
    case 1:
    {
    sub[0]="basic electronic and electrical engg(EE124)";
    sub[1]="basic mechanical engg(ME125)";
    sub[2]="chemistry lab(CHEM129)";
    sub[3]="electronics and electrical lab(EE128)";
    sub[4]="engineering chemistry(CHEM122)";
    sub[5]="environment science(CE123)";
    sub[6]="mathematics(MTH121)";
    sub[7]="solid mechanics(CE126)";
    sub[8]="workshop practice(ME127)";
    ns=9;
    break;
    }
    case 3:
 {
 sub[6]="discrete structure(cse 211)";
 sub[2]="data structure(cse212)";
 sub[4]="digital electronics(cse 213)";
 sub[3]="digital communication(cse 214)";
 sub[0]="computer graphics(cse215)";
 sub[9]="linear algebra & numerical methods(cse216)";
 sub[7]="ds lab(cse 217)";
 sub[5]="digital electronics lab(cse218)";
 sub[1]="cg lab(cse 219)";
 sub[8]="lab-1(python/vhdl)";
 ns=10;
 break;
 }
 case 4:
 {
 sub[6]="probability and queuing theory(cse 221)";
 sub[2]="computer architecture(cse 222)";
 sub[9]="theory of computation(cse 223)";
 sub[3]="database management system(cse224)";
 sub[1]="analysis and design of algorithm(cse225)";
 sub[8]="software engg(cse 226)";
 sub[4]="dbms lab(cse 227)";
 sub[0]="ada lab(cse 228)";
 sub[7]="se lab(cse 229)";
 sub[5]="lab-2(cse 230)";
 ns=10;
 break;
 }
 case 5:
 {
 sub[0]="compiler design(cse 311)";
 sub[6]="operating system(cse 312)";
 sub[3]="microprocessor(cse 313)";
 sub[1]="cd lab(cse 315)";
 sub[5]="mp lab(cse 316)";
 sub[7]="os lab(cse 317)";
 sub[2]="lab-3(cse 318)";
 sub[4]="minor project(cse 319)";
 ns=8;
 break;
 }
 case 6:
 {
 sub[0]="computer networks(cse321)";
 sub[1]="data ware housing and mining(cse322)";
 sub[2]="artificial intelligence(cse 323)";
 sub[3]="network lab(cse 325)";
 sub[4]="data ware housing and mining lab(cse 326)";
 sub[5]="lab-4(cse 328)";
 sub[6]="minor project(cse 329)";
 ns=7;
 break;
 }
 case 7:
 {
 sub[0]="tcp/ip&web technology(cse411)";
 sub[1]="lab tcp/ip & web technology(cse412)";
 sub[2]="major project(cse 413)";
 sub[3]="intership/industrial training(cse 414)";
 sub[4]="seminar(cse 415)";
 ns=5;
 break;
 }
 case 8:
 {
 sub[0]="network security(cse 421)";
 sub[1]="major project(cse 422)";
 sub[2]="general proficiency(cas423)";
  sub[3]="seminar(cse424)";
  ns=4;
  }}
  break;
  }
 case 3:
 {
       switch(sems)
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
     ns=8;
     break;
     }
    case 2:
    {
    sub[0]="basic electronic and electrical engg(EE124)";
    sub[1]="basic mechanical engg(ME125)";
    sub[2]="chemistry lab(CHEM129)";
    sub[3]="electronics and electrical lab(EE128)";
    sub[4]="engineering chemistry(CHEM122)";
    sub[5]="environment science(CE123)";
    sub[6]="mathematics(MTH121)";
    sub[7]="solid mechanics(CE126)";
    sub[8]="workshop practice(ME127)";
    ns=9;
    break;
    }
    case 3:
    {
    sub[0]="mathematics3(mth211)";
    sub[1]="electrical materials & electromagnetic(ee212)";
    sub[2]="measurement(ee213)";
    sub[3]="networks(ee214)";
    sub[4]="electrical machines 1(ee215)";
    sub[5]="electronics 1(ee216)";
    sub[6]="networks lab(ee217)";
    sub[7]="electrical machines lab1(ee218)";
    sub[8]="electronics lab 1(ee219)";
    sub[9]="electrical measurement lab(ee210)";
    ns=10;
    break;
    }
    case 4:
    {
    sub[0]="utilization of electrical energy(ee221)";
    sub[1]="power system 1(ee222)";
    sub[2]="generation of electrical power(ee223)";
    sub[3]="electrical machines 2(ee224)";
    sub[4]="instrumentation(ee225)";
    sub[5]="electronics 2(ee226)";
    sub[6]="instrumentation lab(ee227)";
    sub[7]="electrical machines lab-2(ee228)";
    sub[8]="electronics lab - 2(ee229)";
    ns=9;
    break;
    }
    case 5:
    {
    sub[0]="electrical machines 3(ee311)";
    sub[1]="power electronics(ee312)";
    sub[2]="power system 2(ee313)";
    sub[3]="electrical machine lab 3(ee316)";
    sub[4]="power electronics lab(ee317)";
    sub[5]="power system lab 2(ee318)";
    ns=6;
    break;
    }
    case 6:
    {
    sub[0]="linear control system (ee321)";
    sub[1]="electrical drives (ee322)";
    sub[2]="microprocessor(ee323)";
    sub[3]="linear control system lab(ee324)";
    sub[4]="microprocessors lab(ee325)";
    sub[5]="minor project(ee326)";
    ns=6;
    break;
    }
    case 7:
    {
    sub[0]="modern control system(ee411)";
    sub[1]="modern control system lab(ee412)";
    sub[2]="major project(ee413)";
    sub[3]="educational tour(ee414)";
    ns=4;
    break;
    }
    case 8:
    {
    sub[0]="power system stability & control(ee421)";
    sub[1]="major project & seminar (ee428)";
    sub[2]="general proficiency(ee429)";
    ns=3;
    break;
    }}
    break;
    }

   case 4:
   {

	 switch(sems)
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
     ns=8;
     break;
     }
    case 2:
    {
    sub[0]="basic electronic and electrical engg(EE124)";
    sub[1]="basic mechanical engg(ME125)";
    sub[2]="chemistry lab(CHEM129)";
    sub[3]="electronics and electrical lab(EE128)";
    sub[4]="engineering chemistry(CHEM122)";
    sub[5]="environment science(CE123)";
    sub[6]="mathematics(MTH121)";
    sub[7]="solid mechanics(CE126)";
    sub[8]="workshop practice(ME127)";
    ns=9;
    break;
    }
    case 3:
    {
    sub[0]="computational techniques (mth212)";
    sub[1]="electronic devices(ec211)";
    sub[2]="digital circuits(ec212)";
    sub[3]="network analysis and synthesis(ec213)";
    sub[4]="signals and systems(ec214)";
    sub[5]="instrumentation and control(ec215)";
    sub[6]="electronic circuit and digital circuits (ec 216)";
    sub[7]="network and instrumentation & control(ec 217)";
    ns=8;
    break;
    }
    case 4:
    {
    sub[0]="linear integrated circuits(ec221)";
    sub[1]="microprocessors and microcontrollers(ec222)";
    sub[2]="analog communication(ec223)";
    sub[3]="comm.networks & transmission lines(ec224)";
    sub[4]="em fields(ec 225)";
    sub[5]="data structures (ec 226)";
    sub[6]="linear integrated circuits &microprocessors and microcontroller";
    sub[7]="analog communication & data structure (ec 228)";
    ns=8;
    break;
    }
    case 5:
    {
    sub[0]="digital communication (ec 311)";
    sub[1]="digital signal processing(ec312)";
    sub[2]="vlsl design(ec313)";
    sub[3]="digital comm.& dsp(ec314)";
    sub[4]="cntl & vlsl design(ec 315)";
    ns=5;
    break;
    }
    case 6:
    {
    sub[0]="digital image processing(ec321)";
    sub[1]="optical communication (ec322)";
    sub[2]="microwave engg(ec323)";
    sub[3]="digital image processing(ec324)";
    sub[4]="optical & microwave(ec325)";
    sub[5]="minor project(ec326)";
    ns=6;
    break;
    }
    case 7:
    {
    sub[0]="antenna and wave propagation (ec411)";
    sub[1]="antenna and wireless comm.(ec412)";
    sub[2]="major project(ec413)";
    sub[3]="educational tour & training(ec414)";
    ns=4;
    break;
    }
    case 8:
    {
    sub[0]="wireless communiaction (ec421)";
    sub[1]="major project(ec 422)";
    sub[2]="general proficiency(ec 423)";
    ns=3;

    }}
    break;
    }
    case 5:
    {
	 switch(sems)
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
     ns=8;
     break;
     }
    case 2:
    {
    sub[0]="basic electronic and electrical engg(EE124)";
    sub[1]="basic mechanical engg(ME125)";
    sub[2]="chemistry lab(CHEM129)";
    sub[3]="electronics and electrical lab(EE128)";
    sub[4]="engineering chemistry(CHEM122)";
    sub[5]="environment science(CE123)";
    sub[6]="mathematics(MTH121)";
    sub[7]="solid mechanics(CE126)";
    sub[8]="workshop practice(ME127)";
    ns=9;
    break;
    }
    case 3:
    {
    sub[0]="engg. thermodynamics(me211)";
    sub[1]="mechanical drawing(me212)";
    sub[2]="materials science(me213)";
    sub[3]="kinematics of machines(me214)";
    sub[4]="intro. to manufacturing processes(me215)";
    sub[5]="strenth of materials(me216)";
    sub[6]="thermal engg lab(me217)";
    sub[8]="computer aided graphics lab(me218)";
    sub[9]="strength of materials lab(me219)";
    sub[10]="manufacturing lab(me 220)";
    ns=11;
    break;
    }
    case 4:
    {
    sub[0]="mathematics 3(mth221)";
    sub[1]="machine tool engg(me222)";
    sub[2]="dynamics of machines (me223)";
    sub[3]="fluid mechanics & hydraulic machines (ce224)";
    sub[4]="machine design-1(me225)";
    sub[5]="electrical machines & electronics(ee226)";
    sub[6]="dynamics of machine lab(me227)";
    sub[7]="fluid mechanics lab (ce228)";
    sub[8]="electrical machines & elctronics lab (ee229)";
    ns=9;
    break;
    }
    case 5:
    {
    sub[0]="mathematics 4(mth311)";
    sub[1]="ic engine(me 312)";
    sub[2]="measurement and control(me313)";
    sub[3]="ic engine lab (me 314)";
    sub[4]="measurement and metrology lab(me315)";
    sub[5]="thermal engg lab 2(me316)";
    ns=6;
    break;
    }
    case 6:
    {
    sub[0]="heat transfer (me321)";
    sub[1]="machine design 2(me322)";
    sub[2]="industrial engg(me 323)";
    sub[3]="heat transfer lab(me324)";
    sub[4]="manufacturing lab(me325)";
    sub[5]="minor project(me 326)";
    ns=6;
    break;
    }
    case 7:
    {
    sub[0]="refrigeration & air conditioning(me411)";
    sub[1]=" refrigeration & air conditioning  lab(me412)";
    sub[2]="major project(me413)";
    sub[3]="educational tour & trg.(me414)";
    ns=4;
    break;
    }
    case 8:
    {
    sub[0]="industrial management (hum421)";
    sub[1]="major project & seminar (me 428)";
    sub[2]="general proficiency(me 429)";
    ns=3;
    } }
    break;
     }
    case 6:
    {

	switch(sems)
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
     ns=8;
     break;
     }
    case 2:
    {
    sub[0]="basic electronic and electrical engg(EE124)";
    sub[1]="basic mechanical engg(ME125)";
    sub[2]="chemistry lab(CHEM129)";
    sub[3]="electronics and electrical lab(EE128)";
    sub[4]="engineering chemistry(CHEM122)";
    sub[5]="environment science(CE123)";
    sub[6]="mathematics(MTH121)";
    sub[7]="solid mechanics(CE126)";
    sub[8]="workshop practice(ME127)";
    ns=9;
    break;
    }
    case 3:
    {
    sub[0]="mathematics -3 (mth211)";
    sub[1]="intro.to chemical engg.(che 212)";
    sub[2]="chemical process calculations(che213)";
    sub[3]="fluid mechanics (che 214)";
    sub[4]="chemical process technology 1(che215)";
    sub[5]="chemical engg thermodynamics(che 216)";
    sub[6]="chemical technology lab(che 217)";
    sub[7]="fluid mechanics lab(che 218)";
    ns=8;
    break;
    }
    case 4:
    {
    sub[0]="chemical reaction engg-1(che 221)";
    sub[1]="mechanical operations(che222)";
    sub[2]="heat trasfer -1(CHE223)";
    sub[3]="chemical process technology(che 224)";
    sub[4]="mass transfer-1(che 225)";
    sub[5]="instrumentation & process dynamics control(che 226)";
    sub[6]="heat transfer lab(che 227)";
    sub[7]="mechanical operations lab(che 228)";
    ns=8;
    break;
    }
    case 5:
    {
    sub[0]="heat trasfer -2(che 311)";
    sub[1]="mass trasfer -2(che 312)";
    sub[2]="chemical reaction engg.(che 313)";
    sub[3]="mass trasfer lab(che 314)";
    sub[4]="process control lab(che 315)";
    ns=5;
    break;
    }
    case 6:
    {
    sub[0]="process modeling & simulation(che 321)";
    sub[1]="trasport phenomena (che 322)";
    sub[2]="process equipments drawing -1 (che 323)";
    sub[3]="chemical reaction engg.lab(che 324)";
    sub[4]="modeling and simulation lab(che 325)";
    sub[5]="minor project & seminar(che 326)";
    ns=6;
    break;
    }
    case 7:
    {
    sub[0]="process equip.design-2(che411)";
    sub[1]="process equip design(che 412)";
    sub[2]="major project (che 413)";
    sub[3]="educational tour & training(che 414)";
    ns=4;
    break;
    }
    case 8:
    {
    sub[0]="process engg.& costing(che 421)";
    sub[1]="major project(che 422)";
    sub[2]="general proficiency(che 423)";
    ns=3;
    }
    }
    break;
    }
    case 7:
    {
	switch(sems)
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
     ns=8;
     break;
     }
    case 2:
    {
    sub[0]="basic electronic and electrical engg(EE124)";
    sub[1]="basic mechanical engg(ME125)";
    sub[2]="chemistry lab(CHEM129)";
    sub[3]="electronics and electrical lab(EE128)";
    sub[4]="engineering chemistry(CHEM122)";
    sub[5]="environment science(CE123)";
    sub[6]="mathematics(MTH121)";
    sub[7]="solid mechanics(CE126)";
    sub[8]="workshop practice(ME127)";
    ns=9;
    break;
    }
    }
    break;
    }
  case 8:
  {
  switch(sems)
  {
  case 1:
  {   sub[0]="basics of mapping & cartography(gi511)";
       sub[1]="basic concepts of photogrammetry(gi512)";
       sub[2]="principles of remote sensing technology(gi513)";
       sub[3]="lab practice 1(gi514)";
       sub[4]="seminar 1(gi515)";
       ns=5;
       break;
       }
   case 2:
   {
   sub[0]="space geodesy and gnss based mapping(gi521)";
   sub[1]="basic concepts of gis(gi522)";
   sub[2]="digital processing remotely sensed data(gi523)";
   sub[3]="lab practice 2(gi524)";
   sub[4]="seminar(gi525)";
   ns=5;
   }}
   break;
   }
   case 9:
   {
   switch(sems)
   {
   case 1:
   {
   sub[0]="structure & properties of solids (nt511)";
   sub[1]="properties of nano materials (nt 512)";
   sub[2]="processing and fabrication of nanostructures (nt513)";
   sub[3]="lab-practice(nt514)";
   sub[4]="seminar(nt515)";
   ns=5;
   break;
   }
   case 2:
   {
   sub[0]="nanostructure characterization techniques(nt521)";
   sub[1]="properties of low dimensional system(nt522)";
   sub[2]="instumentation(nt523)";
   sub[3]="lab-practice 2(nt524)";
   sub[4]="seminar(nt525)";
   ns=5;
   }
   }
   break;
   }
   case 10:
   {
   switch(sems)
   {
   case 1:
   {
   sub[0]="advance mathematics(re511)";
   sub[1]="renewable energy sources( re512)";
   sub[2]="energy audit &conservation (re513)";
   sub[3]="measurements lab(re514)";
   sub[4]="seminar -1 & mini project";
   ns=5;
   break;
   }
   case 2:
   {
   sub[0]="wind energy(re521)";
   sub[1]="solar energy(re522)";
   sub[2]="power plant engg(re523)";
   sub[3]="performance analysis lab(re524)";
   sub[4]="seminar -11 & mini project(re525)";
   ns=5;
   }
   }
   break;
   }
   case 11:
   {
   switch(sems)
   {
   case 1:
   {
   sub[0]="mathematical foundations of cs(ac511)";
   sub[1]="advanced data structures (ac512)";
   sub[2]="advanced computer architecture(ac513)";
   sub[3]="lab 1(ac514)";
   sub[4]="lab 2(ac515)";
   sub[5]="seminar-1(ac516)";
   ns=6;
   break;
   }
   case 2:
   {
   sub[0]="high performance computing(ac521)";
   sub[1]="graph theory and algorithms(ac522)";
   sub[2]="soft computing(ac523)";
   sub[3]="lab-3(ac524)";
   sub[4]="lab-4(ac525)";
   sub[5]="seminar 2(ac526)";
   ns=6;
   }
   }
   break;
   }
   case 12:
   {
   switch(sems)
   {
   case 1:
   {
   sub[0]="bioinformatics computing (bi501)";
   sub[1]="biological database(bi502)";
   sub[2]="biomathematics(bi503)";
   sub[3]="lab practice(bi504)";
   sub[4]="seminar-1(bi505)";
   ns=5;
   break;
   }
   case 2:
   {
   sub[0]="data mining and warehousing(bi551)";
   sub[1]="bio modelling (bi552)";
   sub[2]="optimization technique& graph theory(bi553)";
   sub[3]="lab practice -2(bi554)";
   sub[4]="seminar-2(bi555)";
   ns=5;
   }
   }
   break;
   }
   case 13:
   {
   switch(sems)
   {
   case 1:
   {
   sub[0]="instrumentaion in biotechnology(bio-501)";
   sub[1]="genetic engg.& population genetics(bio-502)";
   sub[2]="cell & tissue culture engg(bio-503)";
   sub[3]="biotechnology lab 1(bio-514)";
   sub[4]="seminar-1(bio-515)";
   ns=5;
   break;
   }
   case 2:
   {
   sub[0]="cheminformatics & drug designing(bio-551)";
   sub[1]="molecular biotyping(bio-552)";
   sub[2]="bionanotechnology(bio-553)";
   sub[3]="biotechnology lab2(bio-524)";
   sub[4]="seminar -2(bio-525)";
   ns=5;
   }
   }
   break;
   }
  case 14 :
  {
  switch(sems)
  {
  case 1:
  {
  sub[0]="optimization techniques(mth511)";
  sub[1]="advance transport (ch512)";
  sub[2]="hetrogeneous catalysis(ch513)";
  sub[3]="advance chemical engg. lab(ch 514)";
  sub[4]="seminar -1 & mini project(ch 515)";
  ns=5;
  break;
  }
  case 2:
  {
  sub[0]="advanced process dynamics & control (ch 521)";
  sub[1]="advance heat & mass transfer(ch 522)";
  sub[2]="advanced thermodynamics in chemical engg.(ch 523)";
  sub[3]="software lab(ch 524)";
  sub[4]="seminar -2 & mini project(ch 525)";
  ns=5;
  }
  }
  break;
  }
  case 15:
  {
  switch(sems)
  {
  case 1:
  {
  sub[0]="stochastic process & queuing theory(cn511)";
  sub[1]="tcp/ip(cn512)";
  sub[2]="wireless network(cn 513)";
  sub[3]="lab-1 (cn 514)";
  sub[4]="lab -2(cn 515)";
  sub[5]="seminar -1(cn 516)";
  ns=6;
  break;
  }
  case 2:
  {
  sub[0]="network devices(cn521)";
  sub[1]="network analysis & design(cn 522)";
  sub[2]="graph theory & algorithm(cn 523)";
  sub[3]="lab-3(cn524)";
  sub[4]="lab -4(cn525)";
  sub[5]="seminar -2(cn526)";
  ns=6;
  }
  }
  break;
  }
  case 16:
  {
  switch(sems)
  {
  case 1:
  {
    sub[0]="signal theory (dc-511)";
    sub[1]="advanced digital communication(dc-512)";
    sub[2]="optical communication(dc-513)";
    sub[3]="advanced communication lab(dc-514)";
    sub[4]="seminar 1(dc-515)";
    ns=5;
    break;
    }
  case 2:
  {
  sub[0]="d.s.p (dc-521)";
  sub[1]="detection & estimation theory (dc -522)";
  sub[2]="digital image processing(dc-523)";
  sub[3]="system design lab(dc-524)";
  sub[4]="seminar(dc-525)";
  ns=5;
  }
  }
  break;
  }
  case 17:
  {
  switch(sems)
  {
  case 1:
  {
  sub[0]="power controller (ed 511)";
  sub[1]="electrical drives(ed 512)";
  sub[2]="modelling &analysis of electrical machines(ed513)";
  sub[3]="digital control lab( ed 514)";
  sub[4]="seminar 1(ed 515)";
  ns=5;
  break;
  }
  case 2:
  {
  sub[0]="advanced power electronics(ed 521)";
  sub[1]="advanced control system(ed 522)";
  sub[2]="dsp(ed 523)";
  sub[3]="machine & drives lab(ed 524)";
  sub[4]="seminar 2(ed 525)";
  ns=5;
  }
  }
  break;
  }
  case 18:
  {
  switch(sems)
  {
  case 1:
  {
  sub[0]="advanced engg. maths & optimization techniques(mth511d)";
  sub[1]="material science(em512)";
  sub[2]="behavior of materials(em513)";
  sub[3]=" behavior of materials lab(em514)";
  sub[4]="seminar -1 & mini project(em515)";
  ns=5;
  break;
  }
  case 2:
  {
  sub[0]="materials processing(em521)";
  sub[1]="materials management (em522)";
  sub[2]="tribology(em523)";
  sub[3]="advanced materials lab(em524)";
  sub[4]="seminar 2 & mini project(em525)";
  ns=5;
  }
  }
  break;
  }
  case 19:
  {
  sub[0]="pending";
  break;
  }
  case 20:
  {
  switch(sems)
  {
  case 1:
  {
  sub[0]="advanced geotech engg.(geo511)";
  sub[1]="shallow foundation(foundation engg.1)(geo512)";
  sub[2]="machine foundation analysis (geo513)";
  sub[3]="lab.practice 1(geo514)";
  sub[4]="seminar(geo515)";
  ns=5;
  break;
  }
  case 2:
  {
  sub[0]="soil dynamics (geo521)";
  sub[1]="design and construction of machine foundation(geo522)";
  sub[2]="foundation engg.2(deep foundation)(geo523)";
  sub[3]="lab practice 2(geo 524)";
  sub[4]="seminar2(geo 525)";
  ns=5;
  }
  }
  break;
  }
  case 21:
  {
  switch(sems)
  {
  case 1:
  {
  sub[0]="advance maths(gt511)";
  sub[1]="small hydro power development (gt512)";
  sub[2]="energy from waste (gt513)";
  sub[3]="environment lab(gt514)";
  sub[4]="seminar -1 & mini project(gt515)";
  ns=5;
  break;
  }
  case 2:
  {
  sub[0]="enviroment policy & planning(gt521)";
  sub[1]="green building(gt522)";
  sub[2]="carbon sequestration & sustainable development(gt523)";
  sub[3]="bio-energy lab(gt524)";
  sub[4]="seminar -2 & mini project(gt525)";
  ns=5;
  }
  }
  break;
  }
  case 22:
  {
  switch(sems)
  {
  case 1:
  {
  sub[0]="advanced fluid mechanics(hyd511)";
  sub[1]="instrumentation & measurement(hyd512)";
  sub[2]="hydrology & hydro power plants(hyd 513)";
  sub[3]="lab practice 1(hyd 514)";
  sub[4]="seminar 1(hyd 515)";
  ns=5;
  break;
  }
  case 2:
  {
  sub[0]="fundamentals of hydraulic machines(hyd521)";
  sub[1]="design of hydraulic turbinses(hyd522)";
  sub[2]="design of hydraulic pumps(hyd 523)";
  sub[3]="lab practice 2(hyd 524)";
  sub[4]="seminar 2(hyd 525)";
  ns=5;
  }
  }
  break;
  }
  case 23:
  {
  switch(sems)
  {
  case 1:
  {
  sub[0]="computational methods (id 511)";
  sub[1]="mechanism & synthesis(id 512)";
  sub[2]="reliability engg.(id 513)";
  sub[3]="dynamics of machines lab(id 514)";
  sub[4]="seminar 1 & mini project(id 515)";
  ns=5;
  break;
  }
  case 2:
  {
  sub[0]="advanced computer aided graphics (id 521)";
  sub[1]="stress & vibrational analysis(id 522)";
  sub[2]="advanced product design(id 523)";
  sub[3]="cad lab(id524)";
  sub[4]="seminar 2 and mini project(id 525)";
  ns=5;
  }
  }
  break;
  }
  case 24:
  {
  switch(sems)
  {
  case 1:
  {
  sub[0]="mathematical foundations of information security(is511)";
  sub[1]="computer and network security (is 512)";
  sub[2]="cyber crime & information warfare(is 513)";
  sub[3]="lab 1(is514)";
  sub [4]="lab 2(is515)";
  sub[5]="seminar 1(is516)";
  ns=6;
  break;
  }
  case 2:
  {
  sub[0]="cryptography(is 521)";
  sub[1]="database security & access control(is 522)";
  sub[2]="digital forensics(is 523)";
  sub[3]="lab 3(is 524)";
  sub[4]="lab 4(is 525)";
  sub[5]="seminar 2(is 516)";
  ns=6;
  }
  }
  break;
  }
  case 25:
  {
  switch(sems)
  {
  case 1:
  {
  sub[0]="statistics & probability (mth511c)";
  sub[1]="maintenance mangement (mt512)";
  sub[2]="lubrication management(mt513)";
  sub[3]="mainteanace engg. lab-1(mt514)";
  sub[4]="seminar & mini project(mt515)";
  ns=5;
  break;
  }
  case 2:
  {
  sub[0]="maintainability engg.(mt521)";
  sub[1]="failure analysis & prevention(mt522)";
  sub[2]="tpm ,cbm and rcm(mt523)";
  sub[3]="maintenance engg. lab 2(mt524)";
  sub[4]="seminar & mini project(mt 525)";
  ns=5;
  }
  }
  break;
  }
  case 26:
  {
  switch(sems)
  {
  case 1:
  {
  sub[0]="power system analysis(ps511)";
  sub[1]="advanced power system protection(ps 512)";
  sub[2]="evolutionary techniques(ps 513)";
  sub[3]="power system lab(ps 514)";
  sub[4]="seminar(ps 515)";
  ns=5;
  break;
  }
  case 2:
  {
  sub[0]="modern trends in power system(ps521)";
  sub[1]="advanced control system(ps 522)";
  sub[2]="power system stability(ps 523)";
  sub[3]="computer applications in ps lab(ps 524)";
  sub[4]="seminar 2(ps525)";
  ns=5;
  }
  }
  break;
  }
  case 27:
  {
  switch(sems)
  {
  case 1:
  {
  sub[0]="advanced engg. maths & optimization techniques (mth 511e)";
  sub[1]="theory of elasticity(sv512)";
  sub[2]="theory of vibrations 1(sv513)";
  sub[3]="vibration analysis lab(sv514)";
  sub[4]="seminar 1 & mini project(sv515)";
  ns=5;
  break;
  }
  case 2:
  {
  sub[0]="experimental stress analysis(sv521)";
  sub[1]="theory of plates(sv522)";
  sub[2]="theory of vibrations 2(sv523)";
  sub[3]="experimental stress analysis(sv524)";
  sub[4]="seminar 2 & mini project(sv 525)";
  ns=5;
  }
  }
  break;
  }
  case 28:
  {
  switch(sems)
  {
  case 1:
  {
  sub[0]="theory of elasticity(str511)";
  sub[1]="advanced structural analysis(str512)";
  sub[2]="advanced design of structures(str513)";
  sub[3]="lab practice 1(str514)";
  sub[4]="seminar 1(str515)";
  ns=5;
  break;
  }
  case 2:
  {
  sub[0]="prestressed concrete (str521)";
  sub[1]="structural dynamics (str522)";
  sub[2]="theory of plates & shells(str523)";
  sub[3]="lab practice 2(str524)";
  sub[4]="seminar 2(str525)";
  ns=5;
  }
  }
  break;
  }
  case 29:
  {
  switch(sems)
  {
  case 1:
  {
  sub[0]="advanced maths (mth 511b)";
  sub[1]="advanced thermodynamics(th512)";
  sub[2]="advanced heat & mass transfer(th513)";
  sub[3]="thermal engg. lab 1(th 514)";
  sub[4]="seminar 1 & mini project(th 515)";
  ns=5;
  break;
  }
  case 2:
  {
  sub[0]="instrumentation & control(th521)";
  sub[1]="thermal environment engg.(th522)";
  sub[2]="theory& design of heat exchangers(th523)";
  sub[3]="thermal engg. lab 2(th 524)";
  sub[4]="seminar 2 & mini project(th 525)";
  ns=5;
  }
  }
  break;
  }
  case 30:
  {
  switch(sems)
  {
  case 1:
  {
  sub[0]="analysis & design of pavement structures(tre511)";
  sub[1]="traffic engg & management(tre512)";
  sub[2]="transport planning(tre513)";
  sub[3]="lab practice 1(tre 514)";
  sub[4]="seminar 1(tre 515)";
  ns=5;
  break;
  }
  case 2:
  {
  sub[0]="highway construction and maintenance (tre521)";
  sub[1]="public transport system(tre 522)";
  sub[2]="highway geometrical design(tre 523)";
  sub[3]="lab practice 2(tre 524)";
  sub[4]="seminar 2(tre 525)";
  ns=5;
  }
  }
  break;
  }
  case 31:
  {
  switch(sems)
  {
  case 1:
  {
  sub[0]="vlsl technology(ved511)";
  sub[1]="vlsi design(ved 512)";
  sub[2]="embedded systems(ved 513)";
  sub[3]="vlsi lab (ved 514)";
  sub[4]="seminar 1(ved 515)";
  ns=5;
  break;
  }
  case 2:
  {
  sub[0]="low power vlsl design(ved 521)";
  sub[1]="physical design automation(ved 522)";
  sub[2]="testing of vlsi circuits(ved 523)";
  sub[3]="system design lab(ved 524)";
  sub[4]="seminar 2(ved 525)";
  ns=5;
  }
  }
  break;
  }
  case 32:
  {
  switch(sems)
  {
  case 1:
  {
  sub[0]="engg.fluid mechanics (wre511)";
  sub[1]="engg.hydrology(wre 512)";
  sub[2]="irrigation & drainage engg.(wre 513)";
  sub[3]="lab practice 1(wre 514)";
  sub[4]="seminar 1(wre 515)";
  ns=5;
  break;
  }
  case 2:
  {
  sub[0]="hydraulic structures (wre 521)";
  sub[1]="water resources systems (wre 522)";
  sub[2]="open channel hydraulics(wre 523)";
  sub[3]="lab practice 2(wre 524)";
  sub[4]="seminar 2(wre 525)";
  ns=5;
  }
  }
  break;
  }
  case 33:
  {
  sub[0]="pending";                             // data not available
  }
  } }















void branch :: getsub(char * nam,int sem)
{
 name=nam;
	  sems = sem ;
	  if(!strcmp(name,"civil"))
  read(1);                                    // giving integer so that switch can be used
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
   else if(!strcmp(name,"geoinformatics"))
   read(8);
   else if(!strcmp(name,"nano technology"))
   read(9);
   else if(!strcmp(name,"renewable energy"))
   read(10);
   else if(!strcmp(name,"advanced computing"))
   read(11);
   else if(!strcmp(name,"bio informatics"))
   read(12);
   else if(!strcmp(name,"bio technology"))
   read(13);
   else if(!strcmp(name,"chemical process"))
   read(14);
   else if(!strcmp(name,"computer networking"))
   read(15);
   else if(!strcmp(name,"digital communication"))
   read(16);
   else if(!strcmp(name,"electrical drives"))
   read(17);
   else if(!strcmp(name,"engg materials"))
   read(18);
   else if(!strcmp(name,"environment engg"))
   read(19);
   else if(!strcmp(name,"geotecnical engg"))
   read(20);
     else if(!strcmp(name,"green technology"))
    read(21);
    else if(!strcmp(name,"hydropower engg"))
    read(22);
    else if(!strcmp(name,"industrial design"))
    read(23);
    else if(!strcmp(name,"information security"))
    read(24);
    else if(!strcmp(name,"maintenace engg"))
    read(25);
    else if(!strcmp(name,"power system"))
    read(26);
    else if(!strcmp(name,"stress and vibrational analysis"))
    read(27);
    else if(!strcmp(name,"structural engg"))
      read(28);
      else if(!strcmp(name,"thermal engg"))
      read(29);
      else if(!strcmp(name,"transportation engg"))
      read(30);
      else if(!strcmp(name,"vlsl and embedded system"))
      read(31);
      else if(!strcmp(name,"water resource engg"))
      read(32);
      else if(!strcmp(name,"material science and technology"))
      read(33);
      }

     void main()
     {                // performance of different functions can be checked
     clrscr();
     int  a,b;
     char c='y'  ;
     char *nam;
     int k;
     branch s;
    cout<<"welcome to manit help desk\n";
     cout<<"enter current date in format(ddmmyy)(press enter or space bar after each entry)\n";
     for(int j=0;j<6;j++)
     {cin>>curt_yr[j];}
     yr=curt_yr[4]*10+curt_yr[5];
	    while(c=='y')
	    {
     cout<<"enter 1 to checking scholar number\n";
     cout<<"enter 2 to know your semester\n";
     cout<<"enter 3 to know your year\n";
     cout<<"enter 4 to know your branch\n";
     cout<<"enter 5 to know your subjects by your scholar number\n";
     cout<<"enter 6 to know your subjects by branch and semester \n";
     cout<<"enter your choice\n";
     cin>>k  ;
     if(k !=6)
  {   a=valid_sch();
     if(a==1)
 {    switch(k)
     {
     case 1:
     {
      cout<<"valid\n";
      break;
      }
      case 2:
      {
	 nam=getSemester();
	 cout<<nam;
	 break;
	 }
      case 3:
      {
	 b=getyear();
	 cout<<b;
	 break;
	 }
      case 4:
      {
      nam=getbranch();
      cout<<nam;
      break;
      }
      case 5:
      {
      nam=getbranch();
      b=getintsems();
      s.getsub(nam,b);
      for(k=0;k<s.ns;k++)
   {   cout<<s.print(k);
   cout <<"\n";}
      }

      }
      }
      else
      {
      cout<<"please  enter valid scholar number";
      } }
      else
      {
      cout<<"enter branch\n";
      gets(nam);
      cout<<"enter semester \n"  ;
      cin>> b;
      s.getsub(nam,b);
      for(k=0;k<s.ns;k++)
      cout<<s.print(k);


    }
    cout<<"do you want to continue(press y or n) \n";
    cin>>c;
    }



     getch();
     }


