/*Three-dimensional plots basically depict a surface defined by a function defined in two variables, g = f (x,y). Using the meshgrid command, we first create a set of (x,y) points over the domain of the function. We then assign the function to those points. A surface plot is then created with the surf command.*/

[x,y] = meshgrid(-2:.2:2);
g = x .* exp(-x.^2 - y.^2);
surf(x, y, g)
print -deps graph.eps
