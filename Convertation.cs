using System;
using System.Globalization;

namespace C_1
{
class MainClass
{
public static void Main (string[] args)
{
Work.Output ();
}

class Work {
public static void Output(){
Console.WriteLine("Chouse 16 or 10 system" +
"\n 1 - 16 system" +
"\n 2 - 10 system");
int counter = int.Parse(Console.ReadLine ());
if (counter == 1) {
Console.WriteLine ("Input first number");
string six = Inputfirstsix ();
double i = double.Parse (six);

Console.WriteLine ("Input second number");
string six1 = Inputsecondsix ();
double j = double.Parse (six1);

Console.WriteLine ("What you whant ?" +
"\n 1 - Plus" +
"\n 2 - Minus");
int counter1 = int.Parse(Console.ReadLine ());

if (counter1 == 1) {
string answ = Convert.ToString(Plus (i, j));
Console.WriteLine("Answer: in 16" +" \n"+ answ);
Console.WriteLine ("Answer: in 10" + " \n"+ sixTeenToTen (answ));
}
if (counter1 == 2) {
string answ = Convert.ToString(Minus (i, j));
Console.WriteLine("Answer: in 16" +" \n"+ answ);
Console.WriteLine ("Answer: in 10" + " \n"+ sixTeenToTen (answ));
}
}

if (counter == 2){
Console.WriteLine ("Input first number");
string six = Inputfirstten ();
double i = double.Parse (six);
Console.WriteLine ("Input second number");
string six1 = Inputsecondten ();
double j = double.Parse (six1);
Console.WriteLine ("What you whant ?" +
"\n 1 - Plus" +
"\n 2 - Minus");
int counter1 = int.Parse(Console.ReadLine ());

if (counter1 == 1) {
string answ = Convert.ToString(Plus (i, j));
Console.WriteLine("Answer: in 10" +" \n"+ answ);
Console.WriteLine ("Answer: in 16");
Console.WriteLine (tenToSixteen (answ));
}
if (counter1 == 2) {
string answ = Convert.ToString(Minus (i, j));
Console.WriteLine("Answer: in 10" +" \n"+ answ);
Console.WriteLine ("Answer: in 16");
Console.WriteLine (tenToSixteen (answ));
}
}

}
}

private static string Inputfirstsix(){
string i = Console.ReadLine ();
return i;
}

private static string Inputsecondsix(){
string i = Console.ReadLine ();
return i;
}

private static string Inputfirstten(){
string i = Console.ReadLine ();
return i;
}

private static string Inputsecondten(){
string i = Console.ReadLine ();
return i;
}

private static double Plus(double a, double b){
return a + b;
}

private static double Minus(double a, double b){
return a - b;
}

private static double tenToSixteen(string text){

double text1;
text1 = Convert.ToDouble(text);
double text2;
text2 = text1 - Math.Truncate(text1);
text1 -= text2;
int input;
if (text1 < 0) {
text1 *= -1;
}
input = Convert.ToInt32 (text1);
string zel = (Convert.ToInt32(input.ToString("X")).ToString());
double[] asd = new double[10];
asd[0] = text2; 
string drob = null;

for (int i = 1; i < 10; i++){
asd[i] = (16 * asd[i - 1]) - Math.Truncate(asd[i - 1] * 16);
string hex;
hex = Convert.ToString(Math.Truncate(asd[i - 1] * 16));
drob += hex;
}
Console.Write (zel +"."+ drob);
return 0;
}


private static double sixTeenToTen(string s){
double doubleNumb = Convert.ToDouble (s);
Double intNumb = Math.Truncate (doubleNumb);
doubleNumb -= intNumb;
int counterInt = Convert.ToInt32(intNumb);

string time = Convert.ToString (doubleNumb);
time = time.Remove(1, 1);
time = time.Remove (0, 1);
doubleNumb = Convert.ToDouble (time);

string counterDouble = Convert.ToString (doubleNumb);
int length = counterDouble.Length;

int resultInt = 0;
int resultDouble = 0;
while (counterInt != 0) {
counterInt /= 10;
resultInt++;
}
while (length != 0) {
length -= 1;
resultDouble++;
}
resultDouble *= -1;

int timeInt = Convert.ToInt32(intNumb);
double w =
0;
int sumInt = 0;
for (int i = 0; i < resultInt; i++) {
w = timeInt % 10;
timeInt /= 10;
sumInt += (int)(w * System.Math.Pow(16.0,i));
}

long timeDouble = Convert.ToInt64(doubleNumb);

double z = 0;
double sumDouble = 0;
for (int i = resultDouble; i < 0 ; i++) {
z = timeDouble % 10;
timeDouble /= 10;
sumDouble += (z * Math.Pow(16, i));
}
return sumInt + sumDouble;
}

}
}
