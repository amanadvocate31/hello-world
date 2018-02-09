#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
int curt_yr[6];  //  for current date
int yr;          //for  current year
int sch[9];    // for array for scholar no
int getyear();
char *getbranch();

int class_str()   // for class strenght
{    int a=0,c,b;
char *ch;
if(sch[6]==0 )
b=sch[7]*10+sch[8];
else
b= sch[6]*100+sch[7]*10+sch[8];

c=getyear();

  if(sch[2]==1)
  { switch(sch[5])
  {
   case 1:
   {      switch(c)
   {
   case 1:
   { if(b<=103)
      a=1;
      else
   {   a=0;
   return 0;}
      break;
      }
   case 2:
   {
   if(b<=102)
   a=1;
   else
{   a=0;
return a;}
   break;
   }
   case 3:
   {
   if(b<=126)
   a=1;
   else
 {  a=0;
 return a;
 }
   break;
   }
   case 4:
   {
   if(b<=139)
   a=1;
   else
{   a=0;
return a;}
   break;
   }
   }
   return a;
   break;
   }
  case 2:
  {   if(sch[6]==2 || sch[6]==3)
   {
   switch(c)
  {case 1 :
  {
  if(b<=301)
  a=1;
  else
{  a=0;
return a;}
  break;
  }
  case 2:
  {
  if(b<=300)
  a=1;
  else
{  a=0;
return a;}
  break;
  }
  case 3:
  {
  if(b<=310)
  a=1;
  else
{  a=0;
return a;}
  break;
  }
  case 4:
  {
  if(b<=307)
  a=1;
  else
 { a=0;
 return a;}
  break;
  }
    }}
 else
 {  switch(c) {
 case 1:
 {
 if(b<=109)
 a=1;
 else
{ a=0;
return a;}
 break;
 }
 case 2:
 {
 if(b<=106)
 a=1;
 else
{ a=0 ;
return a;}
 break;
 }
 case 3:
 {
 if(b<=114)
 a=1;
 else
 {
 a=0;
 return a;}
 break;
 }
 case 4:
 {
 if(b<=110)
 a=1;
 else
 {a=0;
 return a;}
 break;
 }
 }}
 return a;
 break;
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
{ a=0 ;
 return a;}
 break;
 }
 case 2:
 {
 if(b<=125)
 a=1;
 else
 {a=0 ;
 return a;}
 break;
 }
 case 3:
 {
 if(b<=130)
 a=1;
 else
{ a=0 ;
return a;}
 break;
 }
 case 4:
 {
 if(b<=134)
 a=1;
 else
{ a=0;
return a;}
 break;
 } }
 return a;
 break;
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
{ a=0 ;
return a;}
break;
}
case 2:
{
if(b<=165)
a=1;
else
{ a=0 ;
return a;}
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
{ a=0 ;
return a;}
break;
}}
return a;
break;
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
{ a=0 ;
return a;}
   break;
   }
 case 2:
 {
 if(b<=294)
 a=1;
 else
{ a=0 ;
return a;}
 break;
 }
 case 3:
 {
 if(b<=301)
 a=1;
 else
{ a=0 ;
return a;}
 break;
 }
 case 4:
 {
 if(b<=296)
 a=1;
 else
{ a=0 ;
return a;}
 break;
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
{ a=0 ;
return a;}
 break;
 }
 case 2:
 {
 if(b<=100)
 a=1;
 else
{ a=0 ;
return a;}
 break;
 }
 case 3:
 {
 if(b<=110)
 a=1;
 else
{ a=0 ;
return a;}
 break;
 }
 case 4:
 {
 if(b<=101)
 a=1;
 else
{ a=0 ;
return a;}
 break;
 }
 }}
 return a;
 break;
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
{ a=0 ;
return a;}
break;
}
case 2:
{
if(b<=57)
a=1;
else
{ a=0 ;
return a;}
break;
}
case 3:
{
if(b<=73)
a=1;
else
{ a=0 ;
return a;}
break;
}
case 4:
{
if(b<=92)
a=1;
else
{ a=0 ;
return a;}
break;
}
}
return a;
break;
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
{ a=0 ;
return a;}
break;
}
case 2:
{
if(b<=51)
a=1;
else
{ a=0 ;
return a;}
break;
}
case 3:
{
if(b<=64)
a=1;
else
{ a=0 ;
return a;}
break;
}
case 4:
{
if(b<=69)
a=1;
else
{ a=0 ;
return a;}
break;
}}
return a;
}}}
else
{   b=sch[7]*10+sch[8];
  ch = getbranch();
  if(!strcmp(ch,"geoinformatics"))
  {  if(c==1 && b<=14)
      return 1;
      else if(c==2 && b<=15)
      return 1;
      else
      return 0;
      }
  else if(!strcmp(ch,"nanotechnology"))
   {
   if(c==1 && b<=13)
   return 1;
   else if(c==2 && b<=18)
   return 1;
   else
   return 0; }
   else if(!strcmp(ch,"renewable energy"))
   {
   if(c==1 && b<=15)
   return 1;
   else if(c==2 && b<=26)
   return 1;
   else
   return 0;
   }
   else if(!strcmp(ch,"advanced computing"))
   {
   if(c==1 && b<=18)
   return 1;
   else if(c==2 && b<=19)
   return 1;
   else
   return 0;
   }
   else if(!strcmp(ch,"bioinformatics"))
   {
   if(c==1 && b<=11)
   return 1;
   else if(c==2 && b<=10)
   return 1;
   else
   return 0;
   }
   else if(!strcmp(ch,"biotechnolog"))
   {
   if(c==1 && b<=16)
   return 1;
   else if(c==2 && b<=11)
   return 1;
   else
   return 0;
   }
   else if(!strcmp(ch,"chemical process"))
   {
   if(c==1 && b<=5)
   return 1;
   else if(c==2 && b<=9)
   return 1;
   else
   return 0;
   }
   else if(!strcmp(ch,"computer networking"))
   {
   if(c==1 && b<=12)
   return 1;
   else if(c==2 && b<=18)
   return 1;
   else
   return 0;
   }
   else if(!strcmp(ch,"digital"))
   {
   if(c==1 && b<=16)
   return 1;
   else if(c==2 && b<=18)
   return 1;
   else
   return 0;
   }
   else if(!strcmp(ch,"electrical drives"))
   {
   if(c==1 && b<=19)
   return 1;
   else if(c==2 && b<=18)
   return 1;
   else
   return 0;
   }
   else if(!strcmp(ch,"engg materials"))
   {
   if(c==1 && b<=19)
   return 1;
   else if(c==2 && b<=18)
   return 1;
   else
   return 0;
   }
   else if(!strcmp(ch,"environmental engg"))
   {
   if(c==1 && b<=21)
   return 1;
   else if(c==2 && b<=18)
   return 1;
   else
   return 0;
   }
   else if(!strcmp(ch,"geotecnical engg"))
   {
   if(c==1 && b<=21)
   return 1;
   else if(c==2 && b<=19)
   return 1;
   else
   return 0;
   }
   else if(! strcmp (ch,"green technoly"))
   {
   if(c==1 && b<=13)
   return 1;
   else if(c==2 && b<=19)
   return 1;
   else
   return 0;
   }
   else if (!strcmp(ch,"hydropower engg"))
   {
   if(c==1 && b<=17)
   return 1;
   else if(c==2 && b<=25)
   return 1;
   else
   return 0;
   }
   else if(!strcmp(ch,"industrial design"))
   {
   if(c==1 && b<=17)
   return 1;
   else if(c==2 && b<=18)
   return 1;
   else
   return 0;
   }
   else if(!strcmp(ch,"information security"))
   {
   if(c==1 && b<=16)
   return 1;
   else if(c==2 && b<=19)
   return 1;
   else
   return 0;
   }
   else if(!strcmp(ch,"maintenace engg"))
   {
   if(c==1 && b<=19)
   return 1;
   else if(c==2 && b<=22)
   return 1;
   else
   return 0;
   }
   else if(!strcmp(ch,"power system"))
   {
   if(c==1 && b<=16)
   return 1;
   else if(c==2 && b<=18)
   return 1;
   else
   return 0;
   }
  else if(!strcmp(ch,"stress and vibrational"))
  {
  if(c==1 && b<=21)
  return 1;
  else if(c==2 && b<=19)
  return 1;
  else
  return 0;
  }
  else if(!strcmp(ch,"structural engg"))
  {
  if(c==1 && b<=17)
  return 1;
  else if(c==2 && b<=18)
  return 1;
  else
  return 0;
  }
  else if(!strcmp(ch,"thermal engg"))
  {
  if(c==1 && b<=16)
  return 1;
  else if(c==2 && b<=19)
  return 1;
  else
  return 0;
  }
  else if(!strcmp(ch,"transportational engg"))
  {
  if(c==1 && b<=18)
  return 1;
  else if(c==2 && b<=14)
  return 1;
  else
  return 0;
  }
  else if(!strcmp(ch,"vlsl and embedded system"))
  {
  if(c==1 && b<=17)
  return 1;
  else if(c==2 && b<=21)
  return 1;
  else
  return 0;
  }
  else if(!strcmp(ch,"water resources engg"))
  {
  if(c==1 && b<=23)
  return 1;
  else if(c==2 && b<=21)
  return 1;
  else
  return 0;
  }
  else if(!strcmp(ch,"material science and tecnology"))
  {
  if(c==1 && b<=19)
  return 1;
  else if(c==2 && b<=19)
  return 1;
  else
  return 0;
  }
   }}




















int valid_sch()       //function for checking scholar number
{ int i,a=1,c,k;             // variables for random operational
  cout<<"enter scholar no(press space bar after each entry)\n";
  for(int j=0;j<9; j++)        // getting scholar number
  {cin>>sch[j];
  } c=sch[0]*10+sch[1];         // year of student
 if( c > (yr-5) )               // since after four year scholar become invalid
     {
      for(i=2;i<6;i++)
      {
       switch(i)                //for  checking each digit of scholar number
      {
      case 2:
      {
      if(sch[i]==1 || sch[i]==2)     // btech and mtech have 1 and 2 in this place
      {    if(sch[i]==2 )
      {      if(c>(yr-2))            // mtech is 2 year program
	 {   a=1;   }
	    else
	  {  a=0 ;
	  return a;
	     } }
	    else
	    a=1;
	  }
	  else
	{  a=0;
	return a; }
	  break;}
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
  if(sch[2]==2)
  {
  if(sch[i]<=5 || sch[i]==7)
  a=1;
  else
  return 0;
  }}
 }}
   k  = class_str();
   cout<<k;
   return k;
   }
   else
   return 0;

 }
   char *getbranch()
   {
     char *ch="branch"  ;
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
      case 1:  ch="geotechnical  engg";
      break;
      case 2:  ch="hydropower engg ";
      break;
      case 3:    ch="environmental engg";
      break;
      case 4:   ch="structural engg";
      break;
      case 5:   ch="transport engg"  ;
      break;
      case 7:  ch="water resource engg";
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
      case 1: ch="power system";
      break;
      case 2: ch="electrical drives";
      }
     return ch;
      break;}

      case 4:
      {
      switch(sch[6])
      {
      case 1: ch="digital communication";
      break ;
      case 2: ch="vlsl and embedded system ";
      }
      return ch;
      break ;}
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
    ch="renewable energy";
    }
    return ch;
    break;
    }
    case 9:
    {
    ch="material science and tecnology";
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
    ch="geoinformatics";
    break;
    case 6:
    ch="nano technoloy";
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
 if(a>6 && a<=12 )
    j = yr-k+1;
 else
 j=yr-k;
 return j;


    }

    char *getSemester()
    { int a,b; char * ch="sems";
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

  int getintsems( char *ch)
  {
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
public:
char * name;
int sems;
char *sub[15];
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
    break;
    }
    case 3:
    {
    sub[0]="mathematics(MTH211)";
    sub[1]="surveying1(CE212)";
    sub[2]="structural analysis1(CE213)";
    sub[3]="fluid mechanics 1(CE214)"  ;
    sub[4]="engineering geology(CE215)";
    sub[5]="building planning and drawing(ce216)";
    sub[6]="surveying laboratory 1(ce217)";
    sub[7]="fluid mechanics labortatory 1(ce218)";
    sub[8]="engineering geology laboratory(ce219)";
    break;
    }
    case 4:
    {
    sub[0]="geotechnical engineering 1(ce221)";
    sub[1]="engineering hydrology(ce222)";
    sub[2]=" fluid mechanics 2 (ce223)";
    sub[3]=" project costing and contract management(ce224)";
    sub[4]="structural design & drawing 1(ce225)";
    sub[5]="surveying 2 (ce226)";
    sub[6]="surveying laboratory 2(ce227)";
    sub[7]="geotechnical engineering laboratory1(ce228)";
    sub[8]="fluid mechanics laboratory2(ce229)";
    break;
    }
    case 5:
    {
    sub[0]="structural design & drawing 2(ce311)";
    sub[1]="geotecnical engg 2(ce312)";
    sub[2]="transportation engineering1(ce313 )";
    sub[3]="geotecnical engg. lab 2(ce314)";
    sub[4]="transportation engg.lab(ce315)";
    break;
    }
    case 6:
    {
    sub[0]="irrigation engg(ce321)";
    sub[1]="project costing and contract mangement(ce322)";
    sub[2]="water supply engg(ce323)";
    sub[3]="structural analysis lab(ce324)";
    sub[4]="CAD lab(ce325)";
    sub[5]="minor project(ce326)";
    break;
    }
    case 7:
    {
    sub[0]="wastewater engg(ce411)";
    sub[1]="water and wastewater analysis lab(ce413)";
    sub[2]="major project(ce413)";
    sub[3]="educational tour & training(ce414)";
    break;
    }
    case 8:
    {
    sub[0]="transportation engg (ce421)";
    sub[1]="major project(ce422)";
    sub[2]="general proficiency(ce423)";
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
    break;
    }
    case 3:
 {
 sub[0]="discrete structure(cse 211)";
 sub[1]="data structure(cse212)";
 sub[2]="digital electronics(cse 213)";
 sub[3]="digital communication(cse 214)";
 sub[4]="computer graphics(cse215)";
 sub[5]="linear algebra & numerical methods(cse216)";
 sub[6]="ds lab(cse 217)";
 sub[7]="digital electronics lab(cse218)";
 sub[8]="cg lab(cse 219)";
 sub[9]="lab-1(python/vhdl)";
 break;
 }
 case 4:
 {
 sub[0]="probability and queuing theory(cse 221)";
 sub[1]="computer architecture(cse 222)";
 sub[2]="theory of computation(cse 223)";
 sub[3]="database management system(cse224)";
 sub[4]="analysis and design of algorithm(cse225)";
 sub[5]="software engg(cse 226)";
 sub[6]="dbms lab(cse 227)";
 sub[7]="ada lab(cse 228)";
 sub[8]="se lab(cse 229)";
 sub[9]="lab-2(cse 230)";
 break;
 }
 case 5:
 {
 sub[0]="compiler design(cse 311)";
 sub[1]="operating system(cse 312)";
 sub[2]="microprocessor(cse 313)";
 sub[3]="cd lab(cse 315)";
 sub[4]="mp lab(cse 316)";
 sub[5]="os lab(cse 317)";
 sub[6]="lab-3(cse 318)";
 sub[7]="minor project(cse 319)";
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
 break;
 }
 case 7:
 {
 sub[0]="tcp/ip&web technology(cse411)";
 sub[1]="lab tcp/ip & web technology(cse412)";
 sub[2]="major project(cse 413)";
 sub[3]="intership/industrial training(cse 414)";
 sub[4]="seminar(cse 415)";
 break;
 }
 case 8:
 {
 sub[0]="network security(cse 421)";
 sub[1]="major project(cse 422)";
 sub[2]="general proficiency(cas423)";
  sub[3]="seminar(cse424)";
  }
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
    sub[8]="electronics lab -2(ee229)";
    break;
    }













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
     int  a;
     char *nam;
     int sem;
     branch s;

    cout<<"welcome to manit help desk\n";
     cout<<"enter current date in format(ddmmyy)(press enter or space bar after each entry)\n";
     for(int j=0;j<6;j++)
     {cin>>curt_yr[j];}
     yr=curt_yr[4]*10+curt_yr[5];
      a=valid_sch();
      if(a==1)
      cout<<"valid\n";
      else
      cout<<"not valid\n";
     getch();
     }


