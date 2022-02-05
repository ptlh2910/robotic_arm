#include<Servo.h>
Servo servo3;
Servo servo5;
Servo servo6;
Servo servo7;
int resistorX = A4 ; 
int resistorY = A5 ; 
int resistorX1 = A2 ; 
int resistorY1 = A3 ;
//int button =2;
//int button1 =3;
float up = 1 ;
float back = -1;
int a[4];

//-----------------------------------------------------------------    
void setup ()
{
      for(int i=0 ; i<4 ; i++)
      {
          a[i]=90; 
      }
      servo3.attach(3);
      pinMode(resistorX,INPUT);
      servo7.attach(7);
      pinMode(resistorY,INPUT);
      servo5.attach(5);
      pinMode(resistorX1,INPUT);
      servo6.attach(6);
      pinMode(resistorY1,INPUT);
//      pinMode(button,INPUT);
//      pinMode(button1,OUTPUT);
      Serial.begin(9600);
//      servo3.write(90);
//      servo5.write(90);
//      servo6.write(90);
//      servo7.write(90);

}
//-------------------------------------------------------------------

void loop ()
{
              int x = analogRead(resistorX);  // doc gia tri cua truc X
              int y = analogRead(resistorY);  // doc gia tri cua truc Y

// ------------------------------------------------------------------
//@len-xuong
//------------------------------------------------------------             
              
              if( x>700 && x<=1023)
              {
                a[0]=a[0]+back;
                if(a[0] < 0)
                {
                  a[0]=0;
                }
                servo3.write(a[0]);
              }
              else if(x<300 && x >=0)
              {
                  a[0]=a[0]+up;
                  if(a[0]>180)
                  {
                    a[0]=180;
                  }
                  servo3.write(a[0]);
              }
              else
              {
                  delay(10);
              }
                            
//-----------------------------------------------------       
//@lai gan - ra xa
//------------------------------------------------------       
              
              if( y>700 && y<=1023)
              {
                a[1]=a[1]+back;
                if(a[1] < 0)
                {
                  a[1]=0;
                }
                servo7.write(a[1]);
              }
              else if(y<300 && y >=0)
              {
                  a[1]=a[1]+up;
                  if(a[1]>180)
                  {
                    a[1]=180;
                  }
                  servo7.write(a[1]);
              }
              else
              {
                  delay(10);
              }
//---------------------------------------------------------------
              
              int x1 = analogRead(resistorX1);  // doc gia tri cua truc X
              int y1= analogRead(resistorY1);  // doc gia tri cua truc Y
//            int KEY = digitalRead(button);  // doc gia tri cua nut nhan
//----------------------------------------------------------------
//-----------------------------------------------------       
//@kep-gap
//------------------------------------------------------       
              if( x1>700 && x1<=1023)
              {
                a[2]=a[2]-2;
                if(a[2]>180)
                  {
                    a[2]=180;
                  }
                servo5.write(a[2]);
                
              }
              else if(x1<300 && x1 >=0)
              {
                  a[2]=a[2]+2;
                  if(a[2] < 0)
                {
                  a[2]=0;
                }
                  servo5.write(a[2]);
                  
              }
              else
              {
                 delay(10);
              }            
//------------------------------------------------------------         
               Serial.println(x);
//-----------------------------------------------------       
//@sang phai- sang trai
//------------------------------------------------------       
              if( y1>700 && y1<=1023)
              {
                a[3]=a[3]+back;
                if(a[3] < 0)
                {
                  a[3]=0;
                }
                servo6.write(a[3]);
                
              }
              else if(y1<300 && y1 >=0)
              {
                  a[3]=a[3] + up;
                  if(a[3]>180)
                  {
                    a[3]=180;
                  }
                  servo6.write(a[3]);
                  
              }
              else 
              {
                  delay(10);
              }
  }
