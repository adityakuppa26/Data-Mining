library(rpart)


iris_data <- datasets::iris

fit <- rpart(Species~.,data=iris_data)


plot(fit,uniform=TRUE,main="tree")


text(fit,use.n=TRUE,all=TRUE,cex=.8)
