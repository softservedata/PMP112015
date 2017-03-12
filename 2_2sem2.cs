using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Matrix
{
	class Program
	{
		static void Main(string[] args)
		{
			int n, m;

			Console.Write("Please, input n = ");
			n = int.Parse (Console.ReadLine());

			Console.Write("Please, input m = ");
			m = int.Parse (Console.ReadLine());

			double[,] Matrix = new double[n, m];

			for( int i = 0;i < n;i++ )
			{
				for( int j = 0;j < m;j++ )
				{
					Console.Write("Matrix[" + (i + 1) + "][" + (j + 1) + "] = ");
					Matrix[i, j] = double.Parse (Console.ReadLine());
				}
			}

			Console.WriteLine("Our Matrix:");
			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < m; j++)
				{
					Console.Write(Matrix[i, j]+" ");
				}
				Console.Write("\n");
			}

			for (int i = 0; i < n; i++)
			{
				for(int j = 0; j < m; j++)
				{
					int k = 0;
					for(int z = 0; z < m; z++)
					{
						if (Matrix[i, j] > Matrix[i, z])
						{
							k = 1;
							z = m;
						}
					}

					if (k == 0)
					{
						int l = 0;
						for(int z = 0; z < n; z++)
						{
							if(Matrix[i, j] < Matrix[z, j] && i != z)
							{
								l = 1;
								z = n;
							}
						}
						if(l == 0)
						{
							Console.WriteLine("Position element(first): [" + (i + 1)+"][" + (j + 1)+ "]");
						}
					}
				}
			}

			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < m; j++)
				{
					int k = 0;
					for (int z = 0; z < m; z++)
					{
						if (Matrix[i, j] < Matrix[i, z])
						{
							k = 1;
							z = m;
						}
					}

					if (k == 0)
					{
						int l = 0;
						for (int z = 0; z < n; z++)
						{
							if (Matrix[i, j] > Matrix[z, j] && i != z)
							{
								l = 1;
								z = n;
							}
						}
						if (l == 0)
						{
							Console.WriteLine("Position element(second): [" + (i + 1) + "][" + (j + 1) + "]");
						}
					}
				}
			}

			Console.ReadKey();
		}
	}
}
