/***************************************************
Copyright (c) 2017 Luis Llamas
(www.luisllamas.es)

Licensed under the Apache License, Version 2.0 (the "License"); you may not use this file except in compliance with the License. You may obtain a copy of the License at http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software distributed under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the License for the specific language governing permissions and limitations under the License
 ****************************************************/


#include "AsyncServoLib.h"

AsyncServo asyncServo03;
AsyncServo asyncServo05;
AsyncServo asyncServo06;
AsyncServo asyncServo09;
AsyncServo asyncServo10;
AsyncServo asyncServo11;

const int Red_s = 4;
const int Green_s = 8;
const int Blue_s = 12;

// // ****Ruchira, Uvindu, Mihiruth//

// // Create an array of these objects
// AsyncServo servoArray[] = {asyncServo03, asyncServo05, asyncServo06, asyncServo09, asyncServo10, asyncServo11};
// //common lists
// float targetAngles[] = {0, 0, 0, 0, 0, 0, 0};
// float targetAngles_box[] = {0, 0, 0, 0, 0, 0, 0};
// float targetAngles_via[] = {0, 0, 0, 0, 0, 0, 0};
// float dropTargetAngles[] = {0, 0, 0, 0, 0, 0, 0};
// float targetPWM[] = {900, 900, 900, 900, 900, 900};
// int status = -1; //holding box means 1

// //Red -> 22.5 -22.5 to 17.5 22.5
// float targetAngles_box_red[] = {-39.5, -36.96, -16.64, -9.32, 0, 1}; //-38, -36.96, -16.64, -9.32, 0, 1
// float targetAngles_via_red[] = {-30, 54.65, 17.99, 46.65, 0, 1};
// float dropTargetAngles_red[] = {57.63, -19.95, 7.57, -16.53, 0, 1};

// //Green -> 17.5 -17.5 to 22.5 17.5
// float targetAngles_box_green[] = {-39.5, -9.09, 35.87, -33.96, 0, 1}; //-39.5, -12.25, 31.87, -33.13, 0, 1
// float targetAngles_via_green[] = {-30, 54.65, 17.99, 46.65, 0, 1};
// float dropTargetAngles_green[] = {43.38, -19.95, 7.57, -16.53, 0, 1}; //43.38, -19.95, 7.57, -16.53, 0, 1

// //blue -> 17.5 -22.5 to 7.5 17.5
// float targetAngles_box_blue[] = {-46.63, -19.95, 7.57, -16.53, 0, 1}; //-38, -36.96, -16.64, -9.32, 0, 1
// float targetAngles_via_blue[] = {-30, 54.65, 17.99, 46.65, 0, 1};
// float dropTargetAngles_blue[] = {72.30, 34.91, 60.64, -14.73, 0, 1};



//*//
// Jula,puli,achi

//27.5 -12.5 to 22.5 12.5
// Create an array of these objects
// AsyncServo servoArray[] = {asyncServo03, asyncServo05, asyncServo06, asyncServo09, asyncServo10, asyncServo11};
// float targetAngles[] = {0, 0, 0, 0, 0, 0, 0};
// float targetAngles_box[] = {-18.44, -28.41, -4.11, -6.30, 0, 1}; //-38, -36.96, -16.64, -9.32, 0, 1
// float targetAngles_via[] = {-30, 54.65, 17.99, 46.65, 0, 1};
// float targetPWM[] = {900, 900, 900, 900, 900, 900};
// float dropTargetAngles[] = {35.05, -6.42, 24.50, -12.92, 0, 1};
// int status = -1; //holding box means 1

//27.5 -17.5 to 27.5 12.5
// Create an array of these objects
// AsyncServo servoArray[] = {asyncServo03, asyncServo05, asyncServo06, asyncServo09, asyncServo10, asyncServo11};
// float targetAngles[] = {0, 0, 0, 0, 0, 0, 0};
// float targetAngles_box[] = {-26.47, -41.44, -23.45, 0.01, 0, 1}; //-38, -36.96, -16.64, -9.32, 0, 1
// float targetAngles_via[] = {-30, 54.65, 17.99, 46.65, 0, 1};
// float targetPWM[] = {900, 900, 900, 900, 900, 900};
// float dropTargetAngles[] = {30.44, -28.41, -4.11, -6.30, 0, 1};
// int status = -1; //holding box means 1

//22.5 -17.5 to 17.5 22.5
// Create an array of these objects
// AsyncServo servoArray[] = {asyncServo03, asyncServo05, asyncServo06, asyncServo09, asyncServo10, asyncServo11};
// float targetAngles[] = {0, 0, 0, 0, 0, 0, 0};
// float targetAngles_box[] ={-31.88, -19.95, 7.57, -9.53, 0, 1}; //-38, -36.96, -16.64, -9.32, 0, 1
// float targetAngles_via[] = {-30, 54.65, 17.99, 46.65, 0, 1};
// float targetPWM[] = {900, 900, 900, 900, 900, 900};
// float dropTargetAngles[] = {58.13, -20.95, 7.8, -9.58, 0, 1};
// int status = -1; //holding box means 1
 


//Sandaru Sasindu Gavin// 1st coordinate

// Create an array of these objects
AsyncServo servoArray[] = {asyncServo03, asyncServo05, asyncServo06, asyncServo09, asyncServo10, asyncServo11};
//common lists
float targetAngles[] = {0, 0, 0, 0, 0, 0, 0};
float targetAngles_box[] = {0, 0, 0, 0, 0, 0, 0};
float targetAngles_via[] = {0, 0, 0, 0, 0, 0, 0};
float dropTargetAngles[] = {0, 0, 0, 0, 0, 0, 0};
float targetPWM[] = {900, 900, 900, 900, 900, 900};
int status = -1; //holding box means 1

//Red -> 22.5 -12.5 to 17.5 17.5
float targetAngles_box_red[] = {-22.05, -6.42, 27.50, -19.92, 0, 1}; //-38, -36.96, -16.64, -9.32, 0, 1
float targetAngles_via_red[] = {-30, 54.65, 17.99, 46.65, 0, 1};
float dropTargetAngles_red[] = {52, -1.40, 33.15, -20.56, 0, 1};

//Green -> 12.5 -22.5 to 12.5 17.5
float targetAngles_box_green[] = {-53.95, -6.42, 27.50, -19.92, 0, 1}; //-39.5, -12.25, 31.87, -33.13, 0, 1
float targetAngles_via_green[] = {-30, 54.65, 17.99, 46.65, 0, 1};
float dropTargetAngles_green[] = {61.46, 16.9, 50.74, -19.84, 0, 1}; //43.38, -19.95, 7.57, -16.53, 0, 1

//blue -> 7.5 -27.5 to 22.5 2.5
float targetAngles_box_blue[] = {-67.74, -19.95, 10.57, -16.53, 0, 1}; //-38, -36.96, -16.64, -9.32, 0, 1
float targetAngles_via_blue[] = {-30, 54.65, 17.99, 46.65, 0, 1};
float dropTargetAngles_blue[] = {13.34, 10.05, 44.72, -20.67, 0, 1};

// AsyncServo servoArray[] = {asyncServo03, asyncServo05, asyncServo06, asyncServo09, asyncServo10, asyncServo11};
// float targetAngles[] = {0, 0, 0, 0, 0, 0, 0};
// float targetAngles_box[] ={-22.05, -6.42, 27.50, -19.92, 0, 1}; //-38, -36.96, -16.64, -9.32, 0, 1
// float targetAngles_via[] = {-30, 54.65, 17.99, 46.65, 0, 1};
// float targetPWM[] = {900, 900, 900, 900, 900, 900};
// float dropTargetAngles[] = {52, -1.40, 33.15, -20.56, 0, 1}; // first coordinate eken 0.5 adu karanna
// int status = -1; //holding box means 1



//Sandaru Sasindu Gavin// 2nd coordinate
// 12.5 -22.5 to 12.5 17.5
// Create an array of these objects
// AsyncServo servoArray[] = {asyncServo03, asyncServo05, asyncServo06, asyncServo09, asyncServo10, asyncServo11};
// float targetAngles[] = {0, 0, 0, 0, 0, 0, 0};
// float targetAngles_box[] ={-53.95, -6.42, 27.50, -19.92, 0, 1}; //-38, -36.96, -16.64, -9.32, 0, 1
// float targetAngles_via[] = {-30, 54.65, 17.99, 46.65, 0, 1};
// float targetPWM[] = {900, 900, 900, 900, 900, 900};
// float dropTargetAngles[] = {61.46, 16.9, 50.74, -19.84, 0, 1};
// int status = -1; //holding box means 1


//Sandaru Sasindu Gavin// 3nd coordinate
// 7.5 -27.5 to 22.5 2.5
// Create an array of these objects
// AsyncServo servoArray[] = {asyncServo03, asyncServo05, asyncServo06, asyncServo09, asyncServo10, asyncServo11};
// float targetAngles[] = {0, 0, 0, 0, 0, 0, 0};
// float targetAngles_box[] ={-67.74, -19.95, 10.57, -16.53, 0, 1}; //-38, -36.96, -16.64, -9.32, 0, 1
// float targetAngles_via[] = {-59.80, 35.77, 16.33, 33.44, 0, 1};
// float targetPWM[] = {900, 900, 900, 900, 900, 900};
// float dropTargetAngles[] = {13.34, 10.05, 44.72, -20.67, 0, 1}; // third coordinate eken 0.5 adu karanna
// int status = -1; //holding box means 1




void setup()
{
	Serial.begin(115200);
  pinMode(Red_s, INPUT); // set pin to input
  digitalWrite(Red_s, LOW); // turn on pullup resistors

  pinMode(Green_s, INPUT); // set pin to input
  digitalWrite(Green_s, LOW); // turn on pullup resistors

  pinMode(Blue_s, INPUT); // set pin to input
  digitalWrite(Blue_s, LOW); // turn on pullup resistors
  
  servoArray[0].Attach(3);
  servoArray[1].Attach(5);
  servoArray[2].Attach(6);
  servoArray[3].Attach(9);
  servoArray[4].Attach(10);
  servoArray[5].Attach(11);
  delay(2000);
  while(true){
    Serial.println("Inside While");
    if(digitalRead(Red_s)){
      Serial.println("InsidecRed");
      for(int i=0; i<5; i++){
        targetAngles_box[i] = targetAngles_box_red[i];
        targetAngles_via[i] = targetAngles_via_red[i];
        dropTargetAngles[i] = dropTargetAngles_red[i];
        targetAngles[i] = targetAngles_via[i];
      }
      break;
    }
    else if (digitalRead(Blue_s)){
      Serial.println("InsidecBlue");
      for(int i=0; i<5; i++){
        targetAngles_box[i] = targetAngles_box_blue[i];
        targetAngles_via[i] = targetAngles_via_blue[i];
        dropTargetAngles[i] = dropTargetAngles_blue[i];
        targetAngles[i] = targetAngles_via[i];
      }
      break;
    }
    else if(digitalRead(Green_s)){
      Serial.println("InsidecGreen");
      for(int i=0; i<5; i++){
        targetAngles_box[i] = targetAngles_box_green[i];
        targetAngles_via[i] = targetAngles_via_green[i];
        dropTargetAngles[i] = dropTargetAngles_green[i];
        targetAngles[i] = targetAngles_via[i];
      }
      break;
    }
  }
  maptoPWM();
  step0();
  step1();
  step2();
  step3();
  step4();
  step5();

}

void maptoPWM(){
  for(int i=0; i<6; i++){
    targetPWM[i] = map(targetAngles[i], -90, 90, 0, 1800);
  }
}

void step0()
{	servoArray[0].Move(targetPWM[0], 4000);}

void step1()
{	servoArray[1].Move(targetPWM[1], 4000);}

void step2()
{	servoArray[2].Move(targetPWM[2], 4000);}

void step3()
{	servoArray[3].Move(targetPWM[3], 4000);}

void step4()
{	servoArray[4].Move(targetPWM[4], 4000);}

void step5()
{	servoArray[5].Move(targetPWM[5], 4000);} //increase the PWM to grab (900 is maximum extraction and 1800 is maxumum grab)



void loop()
{
	delay(10);
  for(int i=0; i<6; i++){
    servoArray[i].Update();
  }
  if ((servoArray[0].GetCurrentPosition() == targetPWM[0]) && (servoArray[1].GetCurrentPosition() == targetPWM[1]) && (servoArray[2].GetCurrentPosition() == targetPWM[2])&& (servoArray[3].GetCurrentPosition() == targetPWM[3])&& (servoArray[4].GetCurrentPosition() == targetPWM[4])) {
      if(status==-1){
        Serial.println("Box coordinates updated");
        for(int i=0; i<5; i++){
          targetAngles[i] = targetAngles_box[i];
        }
        maptoPWM();
        step0();step1();step2();step3();step4();
        status = 0; //Holding the box and new coordiates updated
      }
      
      else if(status==1){
        for(int i=0; i<5; i++){
          targetAngles[i] = dropTargetAngles[i];
        }
        maptoPWM();
        step0();step1();step2();step3();step4();
        status = 2; //Holding the box and new coordiates updated
      }
      else if(status==2){
        //release the box
        for (int pos = 1300; pos >= 900; pos -= 10) { // goes from 180 degrees to 0 degrees
          servoArray[5].write(pos);              // tell servo to go to position in variable 'pos'
          delay(15);                       // waits 15 ms for the servo to reach the position
         }
        status = 3; //idol state
      }
      else if(status==0){
        //Grab the box
        Serial.print("Enwa");
        for (int pos = 950; pos <= 1300; pos += 10) { // goes from 0 degrees to 180 degrees
          // in steps of 1 degree
          servoArray[5].write(pos);              // tell servo to go to position in variable 'pos'
          delay(15);                       // waits 15 ms for the servo to reach the position
        }
      
        status = 1;
        for(int i=1; i<5; i++){
          targetAngles[i] = targetAngles_via[i];
        }
        maptoPWM();
        step0();step1();step2();step3();step4();
      }
    } 
}