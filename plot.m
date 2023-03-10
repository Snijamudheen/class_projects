/*A MATLAB program that explores the concept of subplots. When you create an array of plots in the same figure, each of these plots is called a subplot. The subplot command is used for creating subplots.*/

x = [0:0.01:5];
y = exp(-1.5*x).*sin(10*x);
subplot(3,2,1)
plot(x,y), xlabel('x'),ylabel('exp(–1.5x)*sin(10x)'),axis([0 5 -1 1])
y = exp(-2*x).*sin(10*x);
subplot(1,2,2)
plot(x,y),xlabel('x'),ylabel('exp(–2x)*sin(10x)'),axis([0 5 -1 1])
