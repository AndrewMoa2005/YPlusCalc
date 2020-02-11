#ifndef YP_H
#define YP_H

double reynolds_number(double den, double vel, double len, double vis);
double wall_spacing(double yplus, double vis, double den, double vel, double len);
double y_plus(double wallspacing, double vis, double den, double vel, double len);

#endif // YP_H
