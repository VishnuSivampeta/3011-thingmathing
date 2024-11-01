#define S0 8
#define S1 10
#define S2 11
#define S3 2

void initMUX() {
  pinMode (S0, OUTPUT);
  pinMode (S1, OUTPUT);
  pinMode (S2, OUTPUT);
  pinMode (S3, OUTPUT);
}
void out0()
{
  digitalWrite (S0, LOW);
  digitalWrite (S1, LOW);
  digitalWrite (S2, LOW);
  digitalWrite (S3, LOW);
}
void out1()
{
  digitalWrite (S0, HIGH);
  digitalWrite (S1, LOW);
  digitalWrite (S2, LOW);
  digitalWrite (S3, LOW);
}
void out2()
{
  digitalWrite (S0, LOW);
  digitalWrite (S1, HIGH);
  digitalWrite (S2, LOW);
  digitalWrite (S3, LOW);
}
void out3()
{
  digitalWrite (S0, HIGH);
  digitalWrite (S1, HIGH);
  digitalWrite (S2, LOW);
  digitalWrite (S3, LOW);
}
void out4()
{
  digitalWrite (S0, LOW);
  digitalWrite (S1, LOW);
  digitalWrite (S2, HIGH);
  digitalWrite (S3, LOW);
}
void out5()
{
  digitalWrite (S0, HIGH);
  digitalWrite (S1, LOW);
  digitalWrite (S2, HIGH);
  digitalWrite (S3, LOW);
}
void out6()
{
  digitalWrite (S0, LOW);
  digitalWrite (S1, HIGH);
  digitalWrite (S2, HIGH);
  digitalWrite (S3, LOW);
}
void out7()
{
  digitalWrite (S0, HIGH);
  digitalWrite (S1, HIGH);
  digitalWrite (S2, HIGH);
  digitalWrite (S3, LOW);
}
void out8()
{
  digitalWrite (S0, LOW);
  digitalWrite (S1, LOW);
  digitalWrite (S2, LOW);
  digitalWrite (S3, HIGH);
}
void out9()
{
  digitalWrite (S0, HIGH);
  digitalWrite (S1, LOW);
  digitalWrite (S2, LOW);
  digitalWrite (S3, HIGH);
}
void out10()
{
  digitalWrite (S0, LOW);
  digitalWrite (S1, HIGH);
  digitalWrite (S2, LOW);
  digitalWrite (S3, HIGH);
}
void out11()
{
  digitalWrite (S0, HIGH);
  digitalWrite (S1, HIGH);
  digitalWrite (S2, LOW);
  digitalWrite (S3, HIGH);
}
void out12()
{
  digitalWrite (S0, LOW);
  digitalWrite (S1, LOW);
  digitalWrite (S2, HIGH);
  digitalWrite (S3, HIGH);
}
void out13()
{
  digitalWrite (S0, HIGH);
  digitalWrite (S1, LOW);
  digitalWrite (S2, HIGH);
  digitalWrite (S3, HIGH);
}
void out14()
{
  digitalWrite (S0, LOW);
  digitalWrite (S1, HIGH);
  digitalWrite (S2, HIGH);
  digitalWrite (S3, HIGH);
}
void out15()
{
  digitalWrite (S0, HIGH);
  digitalWrite (S1, HIGH);
  digitalWrite (S2, HIGH);
  digitalWrite (S3, HIGH);
} 