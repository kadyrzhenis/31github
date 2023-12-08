using System;
using System.Collections.Generic;
using System.Linq;
using System.Text.RegularExpressions;

namespace Rextester
{
    public class Program
    {
        
        public static void Main(string[] args)
        {
            Random rnd = new Random((int)DateTime.Now.Ticks);           
            int N=16;
            int s=0;
            int[,] D = new int[N,N];
            for(int i=1;i<N;i++){ 
            for(int j=1;j<N;j++){
            D[i,j]=rnd.Next()%2;
                Console.Write(D[i,j]+" ");
            }
                 Console.WriteLine();
            }
                 Console.WriteLine();
            
            for(int k=1;k<N;k++){
            for(int j=1;j<N;j++){
            for(int i=1;i<N;i++){ 
                if(D[k,j]==D[i,k]){s++;}
   }
  if(s>10) Console.WriteLine(k+"-я строк матрицы совпадает с "+k+"-м столбцом. "); break;
  }
 s=0;
 }
        }
    }
}