function [J,h,dif,new_dif,s,m] = Jcompute(X,y,theta)
  h = X*theta;
  dif = h-y;
  new_dif = dif.^2;
  s = sum(new_dif);
  m = size(X,1);
  J = 1/(2*m)*s;
  