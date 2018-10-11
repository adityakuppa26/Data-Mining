install.packages("e1071")
library("e1071")

iris_data <- datasets::iris
bayes <- naiveBayes(Species ~ . , data= iris_data )
print (bayes)





computer <- read.csv("computer.csv",sep = ",",header = TRUE)
naive <- naiveBayes(BUYS_COMPUTER ~ . , data = computer)
print (naive)
