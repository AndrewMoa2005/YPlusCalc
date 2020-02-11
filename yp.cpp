#include <math.h>

double reynolds_number(double den, double vel, double len, double vis)
{
    return den*vel*len/vis;
}
double wall_spacing(double yplus, double vis, double den, double vel, double len)
{
    double re,cf,twall,vfric;
    re=reynolds_number(den, vel, len, vis);
    cf=0.026/pow(re,1.0/7.0);
    twall=cf*den*pow(vel,2.0)/2.0;
    vfric=sqrt(twall/den);
    return yplus*vis/den/vfric;
}
double y_plus(double wallspacing, double vis, double den, double vel, double len)
{
    double re,cf,twall,vfric;
    re=reynolds_number(den, vel, len, vis);
    cf=0.026/pow(re,1.0/7.0);
    twall=cf*den*pow(vel,2.0)/2.0;
    vfric=sqrt(twall/den);
    return wallspacing*den*vfric/vis;
}
