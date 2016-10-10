import cc.arduino.*;
import org.firmata.*;
import processing.serial.*;

Arduino Bitch;

int previousX = width/2;
int previousY = height/2;

int red = 255;
int green = 0;
int blue = 0;

int center;

void setup(){
  
  size(1024, 1024);
  background(0);
  Bitch = new Arduino(this,"COM3", 57600);
  Bitch.pinMode(2,Arduino.INPUT);
  
  frameRate(250);
  
}

void draw(){

  fill(0,2);
  noStroke();
  rect(0,0,width,height);
  
  
  int x = Bitch.analogRead(0);
  int y = Bitch.analogRead(1);
  
  //if(red==255&&green<255&&blue==0){
  //  green++;
  //}else if(green==255&&red>0&&blue==0){
  //  red--;
  //}else if(green==255&&blue<255&&red==0){
  //  blue++;
  //}else if(blue==255&&green>0&&red==0){
  //  green--;
  //}else if(blue==255&red<255&&green==0){
  //  red++;
  //}else if(blue>0&&red==255&green==0){
  //  blue--;
  //}
  
  center = (int)dist(x,y,width/2,height/2);
  red = (int)map(center,0,400,0,255);
  green = (int)map(x,0,1024,0,255);
  blue = (int)map(y,0,1024,0,255);
  
  fill(red, green, blue);
  noStroke();
  ellipse(x,y, 10,10);
  
  stroke(red, green, blue);
  strokeWeight(10);
  line(previousX,previousY,x,y);
  previousX=x;
  previousY=y;
  
  
  println(x);
  println(y);
  
  
}