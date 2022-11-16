#include <DynamixelWorkbench.h>


#if defined(__OPENCM904__)
#define DEVICE_NAME "1" //Dynamixel on Serial3(USART3) <-OpenCM 485EXP
#elif defined(__OPENCR__)
#define DEVICE_NAME ""
#endif 



#define BAUDRATE 1000000
#define DXL_ID0 7
#define DXL_ID1 8
#define DXL_ID2 9
#define DXL_ID3 10
#define DXL_ID4 11
#define DXL_ID5 12
#define DXL_ID6 13
#define DXL_ID7 14
#define DXL_ID8 15
#define DXL_ID9 16
#define DXL_ID10 1
#define DXL_ID11 2
#define DXL_ID12 3
#define DXL_ID13 4
#define DXL_ID14 5
#define DXL_ID15 6

DynamixelWorkbench dxl_wb;

void setup() {
 Serial.begin(57600);
 // while(!Serial); // Wait for Opening Serial Monitor
 const char *log;
 bool result = false;
 uint8_t dxl_id0 = DXL_ID0;
 uint16_t model_number0 = 0;
 uint8_t dxl_id1 = DXL_ID1;
 uint16_t model_number1 = 1;
 uint8_t dxl_id2 = DXL_ID2;
 uint16_t model_number2 = 2;
 uint8_t dxl_id3 = DXL_ID3;
 uint16_t model_number3 = 3;
 uint8_t dxl_id4 = DXL_ID4;
 uint16_t model_number4 = 4;
 uint8_t dxl_id5 = DXL_ID5;
 uint16_t model_number5 = 5;
 uint8_t dxl_id6 = DXL_ID6;
 uint16_t model_number6 = 6;
 uint8_t dxl_id7 = DXL_ID7;
 uint16_t model_number7 = 7;
 uint8_t dxl_id8 = DXL_ID8;
 uint16_t model_number8 = 8;
 uint8_t dxl_id9 = DXL_ID9;
 uint16_t model_number9 = 9;
 uint8_t dxl_id10 = DXL_ID10;
 uint16_t model_number10 = 10;
 uint8_t dxl_id11 = DXL_ID11;
 uint16_t model_number11 = 11;
 uint8_t dxl_id12 = DXL_ID12;
 uint16_t model_number12 = 12;
 uint8_t dxl_id13 = DXL_ID13;
 uint16_t model_number13 = 13;
 uint8_t dxl_id14 = DXL_ID14;
 uint16_t model_number14 = 14;
 uint8_t dxl_id15 = DXL_ID15;
 uint16_t model_number15 = 15;
 result = dxl_wb.init(DEVICE_NAME, BAUDRATE, &log);
 if (result == false) {
  Serial.println(log);
  Serial.println("Failed to init");
 }
 else {
   Serial.print("Succeeded to init : ");
   Serial.println(BAUDRATE); 
  }
 result = dxl_wb.ping(dxl_id0, &model_number0, &log);
 result = dxl_wb.ping(dxl_id1, &model_number1, &log);
 result = dxl_wb.ping(dxl_id2, &model_number2, &log);
 result = dxl_wb.ping(dxl_id3, &model_number3, &log);
 result = dxl_wb.ping(dxl_id4, &model_number4, &log);
 result = dxl_wb.ping(dxl_id5, &model_number5, &log);
 result = dxl_wb.ping(dxl_id6, &model_number6, &log);
 result = dxl_wb.ping(dxl_id7, &model_number7, &log);
 result = dxl_wb.ping(dxl_id8, &model_number8, &log);
 result = dxl_wb.ping(dxl_id9, &model_number9, &log);
 result = dxl_wb.ping(dxl_id10, &model_number10, &log);
 result = dxl_wb.ping(dxl_id11, &model_number11, &log);
 result = dxl_wb.ping(dxl_id12, &model_number12, &log);
 result = dxl_wb.ping(dxl_id13, &model_number13, &log);
 result = dxl_wb.ping(dxl_id14, &model_number14, &log);
 result = dxl_wb.ping(dxl_id15, &model_number15, &log);
 if (result == false) {
  Serial.println(log);
  Serial.println("Failed to ping");
 }
 else {
  Serial.println("Succeeded to ping");
  Serial.print("id : ");
  Serial.print(dxl_id0);
  Serial.print(dxl_id1);
  Serial.print(dxl_id2);
  Serial.print(dxl_id3);
  Serial.print(dxl_id4);
  Serial.print(dxl_id5);
  Serial.print(dxl_id6);
  Serial.print(dxl_id7);
  Serial.print(dxl_id8);
  Serial.print(dxl_id9);
  Serial.print(dxl_id10);
  Serial.print(dxl_id11);
  Serial.print(dxl_id12);
  Serial.print(dxl_id13);
  Serial.print(dxl_id14);
  Serial.print(dxl_id15);
  Serial.print(" model_number : ");
  Serial.println(model_number0);
  Serial.println(model_number1);
  Serial.println(model_number2);
  Serial.println(model_number3);
  Serial.println(model_number4);
  Serial.println(model_number5);
  Serial.println(model_number6);
  Serial.println(model_number7);
  Serial.println(model_number8);
  Serial.println(model_number9);
  Serial.println(model_number10);
  Serial.println(model_number11);
  Serial.println(model_number12);
  Serial.println(model_number13);
  Serial.println(model_number14);
  Serial.println(model_number15);
 }
 result = dxl_wb.jointMode(dxl_id0, 0, 0, &log);
 result = dxl_wb.jointMode(dxl_id1, 0, 0, &log);
 result = dxl_wb.jointMode(dxl_id2, 0, 0, &log);
 result = dxl_wb.jointMode(dxl_id3, 0, 0, &log);
 result = dxl_wb.jointMode(dxl_id4, 0, 0, &log);
 result = dxl_wb.jointMode(dxl_id5, 0, 0, &log);
 result = dxl_wb.jointMode(dxl_id6, 0, 0, &log);
 result = dxl_wb.jointMode(dxl_id7, 0, 0, &log);
 result = dxl_wb.jointMode(dxl_id8, 0, 0, &log);
 result = dxl_wb.jointMode(dxl_id9, 0, 0, &log);
 result = dxl_wb.jointMode(dxl_id10, 0, 0, &log);
 result = dxl_wb.jointMode(dxl_id11, 0, 0, &log);
 result = dxl_wb.jointMode(dxl_id12, 0, 0, &log);
 result = dxl_wb.jointMode(dxl_id13, 0, 0, &log);
 result = dxl_wb.jointMode(dxl_id14, 0, 0, &log);
 result = dxl_wb.jointMode(dxl_id15, 0, 0, &log);
 if (result == false) {
  Serial.println(log);
  Serial.println("Failed to change joint mode");
 }
 else {
  Serial.println("Succeed to change joint mode");
  Serial.println("Dynamixel is moving...");
  dxl_wb.goalPosition(dxl_id0,(int32_t)523);
  dxl_wb.goalPosition(dxl_id1,(int32_t)523);
  dxl_wb.goalPosition(dxl_id8,(int32_t)523);
  dxl_wb.goalPosition(dxl_id9,(int32_t)523);
  delay(1000);
  dxl_wb.goalPosition(dxl_id2,(int32_t)523);
  dxl_wb.goalPosition(dxl_id3,(int32_t)523);
  dxl_wb.goalPosition(dxl_id4,(int32_t)523);
  dxl_wb.goalPosition(dxl_id5,(int32_t)523);
  dxl_wb.goalPosition(dxl_id6,(int32_t)523);
  dxl_wb.goalPosition(dxl_id7,(int32_t)523);
  delay(1000);
 
  //Robot walking
   
  dxl_wb.goalPosition(dxl_id3,(int32_t)750);
  dxl_wb.goalPosition(dxl_id5,(int32_t)350);
  dxl_wb.goalPosition(dxl_id7,(int32_t)555);
  dxl_wb.goalPosition(dxl_id4,(int32_t)650);
  dxl_wb.goalPosition(dxl_id6,(int32_t)675);
  
  delay(1000);
   
  dxl_wb.goalPosition(dxl_id2,(int32_t)523);
  dxl_wb.goalPosition(dxl_id3,(int32_t)523);
  dxl_wb.goalPosition(dxl_id4,(int32_t)523);
  dxl_wb.goalPosition(dxl_id5,(int32_t)523);
  dxl_wb.goalPosition(dxl_id6,(int32_t)523);
  dxl_wb.goalPosition(dxl_id7,(int32_t)523);
  
  delay(1000);
 
  dxl_wb.goalPosition(dxl_id3,(int32_t)750);
  dxl_wb.goalPosition(dxl_id5,(int32_t)350);
  dxl_wb.goalPosition(dxl_id7,(int32_t)555);
  dxl_wb.goalPosition(dxl_id4,(int32_t)650);
  dxl_wb.goalPosition(dxl_id6,(int32_t)675);
  
  delay(1000);
  
  dxl_wb.goalPosition(dxl_id2,(int32_t)523);
  dxl_wb.goalPosition(dxl_id3,(int32_t)523);
  dxl_wb.goalPosition(dxl_id4,(int32_t)523);
  dxl_wb.goalPosition(dxl_id5,(int32_t)523);
  dxl_wb.goalPosition(dxl_id6,(int32_t)523);
  dxl_wb.goalPosition(dxl_id7,(int32_t)523);
  
  delay(1000);
   
  dxl_wb.goalPosition(dxl_id3,(int32_t)750);
  dxl_wb.goalPosition(dxl_id5,(int32_t)350);
  dxl_wb.goalPosition(dxl_id7,(int32_t)555);
  dxl_wb.goalPosition(dxl_id4,(int32_t)650);
  dxl_wb.goalPosition(dxl_id6,(int32_t)675);
  
  delay(1000);
  
  dxl_wb.goalPosition(dxl_id2,(int32_t)523);
  dxl_wb.goalPosition(dxl_id3,(int32_t)523);
  dxl_wb.goalPosition(dxl_id4,(int32_t)523);
  dxl_wb.goalPosition(dxl_id5,(int32_t)523);
  dxl_wb.goalPosition(dxl_id6,(int32_t)523);
  dxl_wb.goalPosition(dxl_id7,(int32_t)523);
 
  delay(1000);
  
  dxl_wb.goalPosition(dxl_id3,(int32_t)750);
  dxl_wb.goalPosition(dxl_id5,(int32_t)350);
  dxl_wb.goalPosition(dxl_id7,(int32_t)555);
  dxl_wb.goalPosition(dxl_id4,(int32_t)650);
  dxl_wb.goalPosition(dxl_id6,(int32_t)675);
  
  delay(1000);
  
  dxl_wb.goalPosition(dxl_id2,(int32_t)523);
  dxl_wb.goalPosition(dxl_id3,(int32_t)523);
  dxl_wb.goalPosition(dxl_id4,(int32_t)523);
  dxl_wb.goalPosition(dxl_id5,(int32_t)523);
  dxl_wb.goalPosition(dxl_id6,(int32_t)523);
  dxl_wb.goalPosition(dxl_id7,(int32_t)523);
  
  delay(1000);
  
  dxl_wb.goalPosition(dxl_id2,(int32_t)543);
  dxl_wb.goalPosition(dxl_id3,(int32_t)503);
  
  delay(1000); 
  
  //Robot sitting down
  
  dxl_wb.goalPosition(dxl_id0,(int32_t)445);
  dxl_wb.goalPosition(dxl_id1,(int32_t)555);
  dxl_wb.goalPosition(dxl_id8,(int32_t)445);
  dxl_wb.goalPosition(dxl_id9,(int32_t)555);
  
  delay(1000);
  
  dxl_wb.goalPosition(dxl_id6,(int32_t)735);
  dxl_wb.goalPosition(dxl_id7,(int32_t)265);
  dxl_wb.goalPosition(dxl_id4,(int32_t)950);
  dxl_wb.goalPosition(dxl_id5,(int32_t)50);
  dxl_wb.goalPosition(dxl_id2,(int32_t)300);
  dxl_wb.goalPosition(dxl_id3,(int32_t)700); 
  
  delay(2000);
   
  //Robot picking up object
  
  dxl_wb.goalPosition(dxl_id12,(int32_t)300);
  dxl_wb.goalPosition(dxl_id13,(int32_t)700);
  
  delay(1000);
   
  dxl_wb.goalPosition(dxl_id10,(int32_t)690);
  dxl_wb.goalPosition(dxl_id11,(int32_t)310);
  
  delay(1000);
   
  dxl_wb.goalPosition(dxl_id12,(int32_t)55);
  dxl_wb.goalPosition(dxl_id13,(int32_t)945);
  
  delay(1000);
  
  dxl_wb.goalPosition(dxl_id14,(int32_t)523);
  dxl_wb.goalPosition(dxl_id15,(int32_t)523);
  
  delay(1000);
   
  //Robot standing up
   
  dxl_wb.goalPosition(dxl_id6,(int32_t)650);
  dxl_wb.goalPosition(dxl_id7,(int32_t)350);
  dxl_wb.goalPosition(dxl_id4,(int32_t)750);
  dxl_wb.goalPosition(dxl_id5,(int32_t)250);
  dxl_wb.goalPosition(dxl_id2,(int32_t)400);
  dxl_wb.goalPosition(dxl_id3,(int32_t)600);
  
  delay(1000);
  
  dxl_wb.goalPosition(dxl_id2,(int32_t)350);
  dxl_wb.goalPosition(dxl_id3,(int32_t)650);
  
  delay(1000);
  
  dxl_wb.goalPosition(dxl_id6,(int32_t)523);
  dxl_wb.goalPosition(dxl_id7,(int32_t)523);
  dxl_wb.goalPosition(dxl_id4,(int32_t)523); 
  dxl_wb.goalPosition(dxl_id5,(int32_t)523);
  dxl_wb.goalPosition(dxl_id2,(int32_t)523);
  dxl_wb.goalPosition(dxl_id3,(int32_t)523);
  
  delay(1000);
   
  dxl_wb.goalPosition(dxl_id0,(int32_t)523);
  dxl_wb.goalPosition(dxl_id1,(int32_t)523);
  dxl_wb.goalPosition(dxl_id8,(int32_t)523);
  dxl_wb.goalPosition(dxl_id9,(int32_t)523);
  
  delay(1000);
  
  //Robot walking
  
  dxl_wb.goalPosition(dxl_id3,(int32_t)750); 
  dxl_wb.goalPosition(dxl_id5,(int32_t)350);
  dxl_wb.goalPosition(dxl_id7,(int32_t)555);
  dxl_wb.goalPosition(dxl_id4,(int32_t)650);
  dxl_wb.goalPosition(dxl_id6,(int32_t)675);
   
  delay(1000);
   
  dxl_wb.goalPosition(dxl_id2,(int32_t)523);
  dxl_wb.goalPosition(dxl_id3,(int32_t)523);
  dxl_wb.goalPosition(dxl_id4,(int32_t)523);
  dxl_wb.goalPosition(dxl_id5,(int32_t)523);
  dxl_wb.goalPosition(dxl_id6,(int32_t)523);
  dxl_wb.goalPosition(dxl_id7,(int32_t)523);
  
  delay(1000);
  
  dxl_wb.goalPosition(dxl_id3,(int32_t)750);
  dxl_wb.goalPosition(dxl_id5,(int32_t)350);
  dxl_wb.goalPosition(dxl_id7,(int32_t)555);
  dxl_wb.goalPosition(dxl_id4,(int32_t)650);
  dxl_wb.goalPosition(dxl_id6,(int32_t)675);
  
  delay(1000);
  
  dxl_wb.goalPosition(dxl_id2,(int32_t)523);
  dxl_wb.goalPosition(dxl_id3,(int32_t)523);
  dxl_wb.goalPosition(dxl_id4,(int32_t)523);
  dxl_wb.goalPosition(dxl_id5,(int32_t)523);
  dxl_wb.goalPosition(dxl_id6,(int32_t)523);
  dxl_wb.goalPosition(dxl_id7,(int32_t)523);
  
  delay(1000);
  
  dxl_wb.goalPosition(dxl_id3,(int32_t)750);  
  dxl_wb.goalPosition(dxl_id5,(int32_t)350);
  dxl_wb.goalPosition(dxl_id7,(int32_t)555)
  dxl_wb.goalPosition(dxl_id4,(int32_t)650)
  dxl_wb.goalPosition(dxl_id6,(int32_t)675)
     
  delay(1000);
  
  dxl_wb.goalPosition(dxl_id2,(int32_t)523);
  dxl_wb.goalPosition(dxl_id3,(int32_t)523);
  dxl_wb.goalPosition(dxl_id4,(int32_t)523);
  dxl_wb.goalPosition(dxl_id5,(int32_t)523);
  dxl_wb.goalPosition(dxl_id6,(int32_t)523);
  dxl_wb.goalPosition(dxl_id7,(int32_t)523);
   
  delay(1000);
   
  dxl_wb.goalPosition(dxl_id3,(int32_t)750);
  dxl_wb.goalPosition(dxl_id5,(int32_t)350);
  dxl_wb.goalPosition(dxl_id7,(int32_t)555);
  dxl_wb.goalPosition(dxl_id4,(int32_t)650);
  dxl_wb.goalPosition(dxl_id6,(int32_t)675);
   
  delay(1000);
   
  dxl_wb.goalPosition(dxl_id2,(int32_t)523);
  dxl_wb.goalPosition(dxl_id3,(int32_t)523);
  dxl_wb.goalPosition(dxl_id4,(int32_t)523);
  dxl_wb.goalPosition(dxl_id5,(int32_t)523);
  dxl_wb.goalPosition(dxl_id6,(int32_t)523);
  dxl_wb.goalPosition(dxl_id7,(int32_t)523);
    
  delay(1000);
   
  dxl_wb.goalPosition(dxl_id2,(int32_t)543);
  dxl_wb.goalPosition(dxl_id3,(int32_t)503);
  
  delay(1000);
  
  dxl_wb.goalPosition(dxl_id0,(int32_t)523);
  dxl_wb.goalPosition(dxl_id1,(int32_t)523);
  dxl_wb.goalPosition(dxl_id8,(int32_t)523);
  dxl_wb.goalPosition(dxl_id9,(int32_t)523);
  
  delay(1000);
  
  dxl_wb.goalPosition(dxl_id2,(int32_t)523);
  dxl_wb.goalPosition(dxl_id3,(int32_t)523);
  dxl_wb.goalPosition(dxl_id4,(int32_t)523);
  dxl_wb.goalPosition(dxl_id5,(int32_t)523);
  dxl_wb.goalPosition(dxl_id6,(int32_t)523);
  dxl_wb.goalPosition(dxl_id7,(int32_t)523);
  
  delay(1000);
  
  //Robot dropping object
  
  dxl_wb.goalPosition(dxl_id12,(int32_t)700);
  dxl_wb.goalPosition(dxl_id13,(int32_t)300);
  
  delay(1000);
 
 }
}
