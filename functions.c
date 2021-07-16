#include "E:\Winter 2016\PROJECT 2\Code\Include\PIC16F690_Pins.c"

void clock_pulse_blue (void);
void latch_pulse_blue (void);
void latch_pulse_red (void);
void clock_pulse_red (void);
void latch_pulse_green (void);
void clock_pulse_green (void);
void clock_pulse_anode (void);
void latch_pulse_anode (void);
void clear_blue (void);
void clear_red (void);
void clear_anode(void);

int data_cath, data_level,x,y, time, one;

int num_0 [8]=       {0b00000000,
                      0b01111100,
                      0b01000100,
                      0b01000100,
                      0b01000100,
                      0b01000100,
                      0b01000100,
                      0b01111100};
                      
int num_1 [8]=       {0b00000000,
                      0b00001000,
                      0b00001100,
                      0b00001000,
                      0b00001000,
                      0b00001000,
                      0b00001000,
                      0b00011100};
                   
int num_2 [8]=       {0b00000000,
                      0b00111110,
                      0b00100000,
                      0b00100000,
                      0b00111110,
                      0b00000010,
                      0b00000010,
                      0b00111110};
                      
 int num_3 [8]=      {0b00000000,
                      0b00111110,
                      0b00100000,
                      0b00100000,
                      0b00111110,
                      0b00100000,
                      0b00100000,
                      0b00111110};
                      
int num_4 [8]=       {0b00000000,
                      0b00100010,
                      0b00100010,
                      0b00100010,
                      0b00111110,
                      0b00100000,
                      0b00100000,
                      0b00100000};
                      
 int num_5 [8]=      {0b00000000,
                      0b00111110,
                      0b00000010,
                      0b00000010,
                      0b00111110,
                      0b00100000,
                      0b00100000,
                      0b00111110};

 int num_6 [8]=      {0b00000000,
                      0b00111110,
                      0b00000010,
                      0b00000010,
                      0b00111110,
                      0b00100010,
                      0b00100010,
                      0b00111110};
                      
 int num_7 [8]=      {0b00000000,
                      0b00111110,
                      0b00100000,
                      0b00100000,
                      0b00010000,
                      0b00001000,
                      0b00001000,
                      0b00001000};
                      
 int num_8 [8]=      {0b00000000,
                      0b00111110,
                      0b00100010,
                      0b00100010,
                      0b00111110,
                      0b00100010,
                      0b00100010,
                      0b00111110};
                      
 int num_9 [8]=      {0b00000000,
                      0b00111110,
                      0b00100010,
                      0b00100010,
                      0b00111110,
                      0b00100000,
                      0b00100000,
                      0b00111110};
                      
 int space [8]=      {0b00000000,
                      0b00000000,
                      0b00000000,
                      0b00000000,
                      0b00000000,
                      0b00000000,
                      0b00000000,
                      0b00000000};
                      
 int anode_array [8]=  {0b00000001,
                        0b00000010,
                        0b00000100,
                        0b00001000,
                        0b00010000,
                        0b00100000,
                        0b01000000,
                        0b10000000};                     
//ANODE = COLUME
//Cathode = ROW

void clear_anode (void)
{
   DATA_anode= 0;
   clock_pulse_anode();
   DATA_anode= 0;
   clock_pulse_anode();
   DATA_anode= 0;
   clock_pulse_anode();
   DATA_anode= 0;
   clock_pulse_anode();
   DATA_anode= 0;
   clock_pulse_anode();
   DATA_anode= 0;
   clock_pulse_anode();
   DATA_anode= 0;
   clock_pulse_anode();
   DATA_anode= 0;
   clock_pulse_anode();
   DATA_anode= 0;
   clock_pulse_anode();
   DATA_anode= 0;
   clock_pulse_anode();
   DATA_anode= 0;
   clock_pulse_anode();
   DATA_anode= 0;
   clock_pulse_anode();
   DATA_anode= 0;
   clock_pulse_anode();
   DATA_anode= 0;
   clock_pulse_anode();
   DATA_anode= 0;
   clock_pulse_anode();
   DATA_anode= 0;
   clock_pulse_anode();
   latch_pulse_anode();
}

void clear_blue (void)
{
   DATA_blue= 0;
   clock_pulse_blue();
   DATA_blue= 0;
   clock_pulse_blue();
   DATA_blue= 0;
   clock_pulse_blue();
   DATA_blue= 0;
   clock_pulse_blue();
   DATA_blue= 0;
   clock_pulse_blue();
   DATA_blue= 0;
   clock_pulse_blue();
   DATA_blue= 0;
   clock_pulse_blue();
   DATA_blue= 0;
   clock_pulse_blue();
   DATA_blue= 0;
   clock_pulse_blue();
   DATA_blue= 0;
   clock_pulse_blue();
   DATA_blue= 0;
   clock_pulse_blue();
   DATA_blue= 0;
   clock_pulse_blue();
   DATA_blue= 0;
   clock_pulse_blue();
   DATA_blue= 0;
   clock_pulse_blue();
   DATA_blue= 0;
   clock_pulse_blue();
   DATA_blue= 0;
   clock_pulse_blue();
   latch_pulse_blue();
}

void clear_red (void)
{
   DATA_red= 0;
   clock_pulse_red();
   DATA_red= 0;
   clock_pulse_red();
   DATA_red= 0;
   clock_pulse_red();
   DATA_red= 0;
   clock_pulse_red();
   DATA_red= 0;
   clock_pulse_red();
   DATA_red= 0;
   clock_pulse_red();
   DATA_red= 0;
   clock_pulse_red();
   DATA_red= 0;
   clock_pulse_red();
   DATA_red= 0;
   clock_pulse_red();
   DATA_red= 0;
   clock_pulse_red();
   DATA_red= 0;
   clock_pulse_red();
   DATA_red= 0;
   clock_pulse_red();
   DATA_red= 0;
   clock_pulse_red();
   DATA_red= 0;
   clock_pulse_red();
   DATA_red= 0;
   clock_pulse_red();
   DATA_red= 0;
   clock_pulse_red();
   latch_pulse_red();
}

void clock_pulse_blue (void)
{
CLOCK_COL_BLUE = 0;
//delay_us(1);
CLOCK_COL_BLUE = 1;
//delay_us(1);
CLOCK_COL_BLUE = 0;
//delay_us(1);
}

void latch_pulse_blue (void)
{
LATCHCLOCK_COL_BLUE = 0;
//delay_us(1);
LATCHCLOCK_COL_BLUE = 1;
//delay_us(1);
LATCHCLOCK_COL_BLUE = 0;
//delay_us(1);

}

void clock_pulse_anode (void)
{
CLOCK_ANODE = 0;
delay_us(1);
CLOCK_ANODE = 1;
delay_us(1);
CLOCK_ANODE = 0;
delay_us(1);
}

void latch_pulse_anode (void)
{
LATCHCLOCK_ANODE = 0;
delay_us(1);
LATCHCLOCK_ANODE = 1;
delay_us(1);
LATCHCLOCK_ANODE = 0;
delay_us(1);
}

void clock_pulse_red (void)
{
CLOCK_COL_RED = 0;
delay_us(1);
CLOCK_COL_RED  = 1;
delay_us(1);
CLOCK_COL_RED = 0;
delay_us(1);
}

void latch_pulse_red (void)
{
LATCHCLOCK_COL_RED = 0;
delay_us(1);
LATCHCLOCK_COL_RED = 1;
delay_us(1);
LATCHCLOCK_COL_RED = 0;
delay_us(1);
}

void fill_0_red(void)
{
if (one == 0) 
   { 

   x=0;

  for(y=0;y <=7; y++)
  {    
     clear_anode();
     clear_blue();
     clear_red();
     data_cath = num_0 [x];
     
if((data_cath & 0x80) == 0x80) //1000 0000
   {
   DATA_blue= 1;
   clock_pulse_blue();
   }
   else
   {
   DATA_blue= 0;
   clock_pulse_blue();
   }
      if((data_cath & 0x40) == 0x40) //0100 0000
      {
      DATA_blue= 1;
      clock_pulse_blue();
      }
      else
      {
      DATA_blue= 0;
      clock_pulse_blue();
      }
         if((data_cath & 0x20) == 0x20) //0010 0000
         {
         DATA_blue= 1;
         clock_pulse_blue();
         }
         else
         {
         DATA_blue= 0;
         clock_pulse_blue();
         }
            if((data_cath & 0x10) == 0x10) //0001 0000
            {
            DATA_blue= 1;
            clock_pulse_blue();
            }
            else
            {
            DATA_blue= 0;
            clock_pulse_blue();
            }
               if((data_cath & 0x08 ) == 0x08) //0000 1000
               {
               DATA_blue= 1;
               clock_pulse_blue();
               }
               else
               {
               DATA_blue= 0;
               clock_pulse_blue();
               }
                  if((data_cath & 0x04) == 0x04) //0000 0100
                  {
                  DATA_blue= 1;
                  clock_pulse_blue();
                  }
                  else
                  {
                  DATA_blue= 0;
                  clock_pulse_blue();
                  }
                     if((data_cath & 0x02) == 0x02) //0000 0010
                     {
                     DATA_blue= 1;
                     clock_pulse_blue();
                     }
                     else
                     {
                     DATA_blue= 0;
                     clock_pulse_blue();
                     }
                        if((data_cath & 0x01) == 0x01) //0000 0001
                        {
                        DATA_blue= 1;
                        clock_pulse_blue();
                        }
                        else
                        {
                        DATA_blue= 0;
                        clock_pulse_blue();
                        }      

data_level = anode_array [y];

if((data_level & 0x80) == 0x80) //1000 0000
   {
   DATA_anode= 1;
   clock_pulse_anode();
   }
   else
   {
   DATA_anode= 0;
   clock_pulse_anode();
   }
      if((data_level & 0x40) == 0x40) //0100 0000
      {
      DATA_anode= 1;
      clock_pulse_anode();
      }
      else
      {
      DATA_anode= 0;
      clock_pulse_anode();
      }
         if((data_level & 0x20) == 0x20) //0010 0000
         {
         DATA_anode= 1;
         clock_pulse_anode();
         }
         else
         {
         DATA_anode= 0;
         clock_pulse_anode();
         }
            if((data_level & 0x10) == 0x10) //0001 0000
            {
            DATA_anode= 1;
            clock_pulse_anode();
            }
            else
            {
            DATA_anode= 0;
            clock_pulse_anode();
            }
               if((data_level & 0x08 ) == 0x08) //0000 1000
               {
               DATA_anode= 1;
               clock_pulse_anode();
               }
               else
               {
               DATA_anode= 0;
               clock_pulse_anode();
               }
                  if((data_level & 0x04) == 0x04) //0000 0100
                  {
                  DATA_anode= 1;
                  clock_pulse_anode();
                  }
                  else
                  {
                  DATA_anode= 0;
                  clock_pulse_anode();
                  }
                     if((data_level & 0x02) == 0x02) //0000 0010
                     {
                     DATA_anode= 1;
                     clock_pulse_anode();
                     }
                     else
                     {
                     DATA_anode= 0;
                     clock_pulse_anode();
                     }
                        if((data_level & 0x01) == 0x01) //0000 0001
                        {
                        DATA_anode= 1;
                        clock_pulse_anode();
                        }
                        else
                        {
                        DATA_anode= 0;
                        clock_pulse_anode();
                        } 
    latch_pulse_anode();
    latch_pulse_blue(); 
    
    x++;
                        
  }
 }
}
