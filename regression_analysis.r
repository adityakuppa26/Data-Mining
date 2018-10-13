# data points

w <- c(23,56,57,60,67,68,70)
h <- c(156,158,161,165,169,175,180)

# plot the curve

plot(h,w,col="blue",main="h vs w",abline(lm(h~w)),xlab="weight",ylab="height")

# exit

dev.off()
