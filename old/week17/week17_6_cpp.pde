//抽籤程式
void setup(){
  size(400,400);
}
int result=0;
void draw(){
  background(#FFFFF2);
  if(dist(mouseX,mouseY,300,300)<50) fill(0,255,0);
  else fill(255,255,0);//填在裡面的顏色
  ellipse(300,300,100,100);//畫圓
  fill(0);//字要黑色的
  textSize(30);//字的大小
  text("Press Me",300-50,300);//畫出字
  if(mousePressed) result = int(random(10));
  text(result,100,200);
}
