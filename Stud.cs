using System;
using System.IO;
using System.Collections.Generic;

namespace С_03
{
 class MainClass
 {
  public static void Main (string[] args){
   String text = Console.ReadLine ();
   char[] chars = new char[text.Length];
   for(int i = 0; i < text.Length; i++){
    chars[i] = text [i];
    if (chars[i] == 'h' && chars[i-1] == 'a') {
     chars[i] = '*';
     chars [i - 1] = 'f';
    }
   }
   String s = "";
   for (int i = 0; i < chars.Length; i++) {
    if(chars[i]!='*'){
    s += chars [i];
    }
   }
   Console.Write (s);
  }
 }
}
