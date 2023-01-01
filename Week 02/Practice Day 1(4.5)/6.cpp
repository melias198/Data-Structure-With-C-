#include <bits/stdc++.h>

using namespace std;

class Cuboid
{
private:
       int lenght;
       int width;
       int height;
public:
      Cuboid()
      {
        lenght=0;
        width=0;
        height=0;
      }
      Cuboid(int l,int w,int h)
      {
        lenght=l;
        width=w;
        height=h;
      }
      int getVolume()
      {
        return height*width*lenght;
      }
      int getSurfaceArea()
      {
        int area=(2*lenght*width)+(2*lenght*height)+(2*height*width);
        return area;
      }
      void printfunc()
      {
        cout<<"Volume = "<<getVolume()<<", Area = "<<" "<<getSurfaceArea()<<"\n";
      }

};

bool compV(Cuboid a,Cuboid b)
{
 return a.getVolume()<b.getVolume();
}

bool compA(Cuboid c,Cuboid d)
{
 return c.getSurfaceArea()<d.getSurfaceArea();
}

int main()
{
    vector<Cuboid>cube(5);
    cube[1]={2,4,5};
    cube[2]={5,3,4};
    cube[3]={4,8,2};
    cube[4]={6,3,1};
    cube[5]={2,5,7};
    for(int i=1;i<=5;i++)
    {
        cube[i].printfunc();
    }
    cout<<"Increasing Order Of Volume:"<<"\n";
    sort(cube.begin(),cube.end(),compV);
    for(int i=1;i<=5;i++)
    {
        cube[i].printfunc();
    }
    cout<<"Increasing Order Of Surface Area:"<<"\n";
    sort(cube.begin(),cube.end(),compA);
    for(int i=1;i<=5;i++)
    {
        cube[i].printfunc();
    }
    return 0;
}

