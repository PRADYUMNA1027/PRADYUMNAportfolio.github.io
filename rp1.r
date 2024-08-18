vector <- seq(5, 60, by = 5)

# Displaying the values vector 
cat("Value of vector:", vector, "\n")

# Logical indexing to find elements greater than 15 and less than 45
filtered_vector <- vector[vector > 15 & vector < 45]

# Displaying the filtered vector
cat("Elements greater than 15 and less than 45:", filtered_vector, "\n")
