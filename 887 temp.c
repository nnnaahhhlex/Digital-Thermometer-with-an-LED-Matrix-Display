#include "H:\Winter 2016\PROJECT 2\Code\Temp\Temp_887\Temp 5\887 temp.h"
#include "H:\Winter 2016\PROJECT 2\Code\Include\Functions.c"

int whole_num,lower_num, data_lost, one, tens;
int count, flag;
int16 new_temp, old_temp, whole_num_16;

void data_finder(int data_lost);
void read_lm75(void);
void temp_merge(void);

#int_TIMER1
void TIMER1_isr(void) 
{
   flag = 1;
   
}

//ANODE = COLUME
//Cathode = ROW

void main(void)
{

   setup_adc_ports(NO_ANALOGS|VSS_VDD);
   setup_adc(ADC_OFF);
   setup_timer_0(RTCC_INTERNAL|RTCC_DIV_1);
   setup_timer_1(T1_INTERNAL|T1_DIV_BY_8);
   setup_timer_2(T2_DISABLED,0,1);
   setup_comparator(NC_NC_NC_NC);// This device COMP currently not supported by the PICWizard
   enable_interrupts(INT_TIMER1);
   enable_interrupts(GLOBAL);
   setup_oscillator(False);

   TRISC = 0x00;
   TRISB = 0x00;
   
   count = 0;
   clear_red();
   clear_blue();
   clear_anode();
   
   while(1)
   {
    if(flag == 1)
    {
    count++;
    flag = 0;
    }
    if(count == 50)
    {
    old_temp = new_temp;
    read_lm75();
    data_finder(whole_num);
    temp_merge();
    count = 0;
    }

x = 0;

for(y=0;y<=7;y++)
{
     clear_anode();
     clear_blue();
     clear_red();
    
    if(old_temp > new_temp)
    {
    switch(one)
    {
    case 0:
    fill_0_red();
      break;
      
    case 1:
    fill_1_red();
      break;
      
    case 2:
    fill_2_red();
      break;
      
    case 3:
    fill_3_red();
      break;
      
    case 4:
    fill_4_red();
      break;
      
    case 5:
    fill_5_red();
      break;
      
    case 6:
    fill_6_red();
      break;
      
    case 7:
    fill_7_red();
      break;
      
    case 8:
    fill_8_red();
      break;
      
    case 9:
    fill_9_red();
      break;
    
    default:
    fill_error_red();
      break;
    
    }

switch(tens)
    {
    case 0:
    fill_0_red();
      break;
      
    case 1:
    fill_1_red();
      break;
      
    case 2:
    fill_2_red();
      break;
      
    case 3:
    fill_3_red();
      break;
      
    case 4:
    fill_4_red();
      break;
      
    case 5:
    fill_5_red();
      break;
      
    case 6:
    fill_6_red();
      break;
      
    case 7:
    fill_7_red();
      break;
      
    case 8:
    fill_8_red();
      break;
      
    case 9:
    fill_9_red();
      break;
    
    default:
    fill_error_red();
      break;
    
    }
    }
    if(old_temp < new_temp)
    {
    switch(one)
    {
    case 0:
    fill_0_blue();
      break;
      
    case 1:
    fill_1_blue();
      break;
      
    case 2:
    fill_2_blue();
      break;
      
    case 3:
    fill_3_blue();
      break;
      
    case 4:
    fill_4_blue();
      break;
      
    case 5:
    fill_5_blue();
      break;
      
    case 6:
    fill_6_blue();
      break;
      
    case 7:
    fill_7_blue();
      break;
      
    case 8:
    fill_8_blue();
      break;
      
    case 9:
    fill_9_blue();
      break;
    
    default:
    fill_error_red();
      break;
    
    }

switch(tens)
    {
    case 0:
    fill_0_blue();
      break;
      
    case 1:
    fill_1_blue();
      break;
      
    case 2:
    fill_2_blue();
      break;
      
    case 3:
    fill_3_blue();
      break;
      
    case 4:
    fill_4_blue();
      break;
      
    case 5:
    fill_5_blue();
      break;
      
    case 6:
    fill_6_blue();
      break;
      
    case 7:
    fill_7_blue();
      break;
      
    case 8:
    fill_8_blue();
      break;
      
    case 9:
    fill_9_blue();
      break;
    
    default:
    fill_error_red();
      break;
    
    }
    }
    
    if(old_temp == new_temp)
    {
    switch(one)
    {
    case 0:
    fill_0_blue();
    fill_0_red();
      break;
      
    case 1:
    fill_1_blue();
    fill_1_red();
      break;
      
    case 2:
    fill_2_blue();
    fill_2_red();
      break;
      
    case 3:
    fill_3_blue();
    fill_3_red();
      break;
      
    case 4:
    fill_4_blue();
    fill_4_red();
      break;
      
    case 5:
    fill_5_blue();
    fill_5_red();
      break;
      
    case 6:
    fill_6_blue();
    fill_6_red();
      break;
      
    case 7:
    fill_7_blue();
    fill_7_red();
      break;
      
    case 8:
    fill_8_blue();
    fill_8_red();
      break;
      
    case 9:
    fill_9_blue();
    fill_9_red();
      break;
    
    default:
    fill_error_red();
      break;
    
    }

switch(tens)
    {
    case 0:
    fill_0_blue();
    fill_0_red();
      break;
      
    case 1:
    fill_1_blue();
    fill_1_red();
      break;
      
    case 2:
    fill_2_blue();
    fill_2_red();
      break;
      
    case 3:
    fill_3_blue();
    fill_3_red();
      break;
      
    case 4:
    fill_4_blue();
    fill_4_red();
      break;
      
    case 5:
    fill_5_blue();
    fill_5_red();
      break;
      
    case 6:
    fill_6_blue();
    fill_6_red();
      break;
      
    case 7:
    fill_7_blue();
    fill_7_red();
      break;
      
    case 8:
    fill_8_blue();
    fill_8_red();
      break;
      
    case 9:
    fill_9_blue();
    fill_9_red();
      break;
    
    default:
    fill_error_red();
      break;
    
    }
    }
    latch_pulse_anode();
    latch_pulse_red();
    latch_pulse_blue();
    x++;
}   
  
   }

}

void data_finder(int data_lost) 
{
   one = data_lost % 10;
   tens = (data_lost/10) % 10;
}

void read_lm75(void)
{
i2c_start();
i2c_write(0x90);
i2c_write(0x00);
i2c_start();
i2c_write(0x91);
whole_num = i2c_read(); 
lower_num = i2c_read(0); 
i2c_stop();
}

void temp_merge(void)
{
   whole_num_16 = whole_num;
   new_temp = whole_num_16 << 8;
   new_temp = lower_num << 8;
}  
