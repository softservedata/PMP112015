class Way
 {
private:
char Mass[6];
public:
void solution()
 {
for (int j = 0; j < 5; j++)
 {
Mass[j] = 'v';
}
}
void add(char n)
{
for (int i = 0; i < 5; i++)
 if (Mass[i] == 'v')
 {
Mass[i] = n; break;
}
}
int GetWay(char k)
 {
int z = 0;
for (int i = 0; i < 5; i++)
{
if (Mass[i] == k)
 {
z++;
}
}
return z;
}
}; 
