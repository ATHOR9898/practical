# R Programming Lab Notes
**Department of Computer Science and Information Technology**

---

## List of Experiments

| No. | Experiment |
|-----|------------|
| 1 | Download and install R-Programming environment and install basic packages |
| 2 | Learn all the basics of R-Programming (Data types, Variables, Operators etc.) |
| 3 | Implement R-Loops with different examples |
| 4 | Learn the basics of functions in R and implement with examples |
| 5 | Implement data frames in R — join columns and rows using `cbind()` and `rbind()` |
| 6 | Implement different String Manipulation functions in R |
| 7 | Implement different data structures in R (Vectors, Lists, Data Frames) |
| 8 | Write a program to read a CSV file and analyze the data |
| 9 | Create pie charts and bar charts using R |
| 10 | Create a dataset and do statistical analysis using R |

---

## Experiment 1 — Install R and Basic Packages

### What This Program Does
- Downloads and installs the R environment from CRAN
- Installs essential data science packages: `dplyr`, `ggplot2`, `tidyr`
- Loads those packages into an R session using `library()`

### Key Commands

```r
# Install packages from CRAN
install.packages("dplyr")    # Data manipulation
install.packages("ggplot2")  # Data visualization
install.packages("tidyr")    # Data tidying

# Load packages into session
library(dplyr)
library(ggplot2)
library(tidyr)
```

### Steps to Install R
1. Go to [CRAN](https://cran.r-project.org) and choose a mirror near you
2. Download the installer for your OS (Windows / macOS / Linux)
3. Run the installer and follow the on-screen instructions
4. Open **RGui** (default) or **RStudio** and run the commands above

---

## Experiment 2 — Basics of R Programming

### What This Program Does
- Demonstrates the core building blocks of R: data types, variables, operators, vectors, matrices, lists, and data frames

### Data Types

```r
num_var     <- 42                               # Numeric
char_var    <- "Hello, R!"                      # Character
logical_var <- TRUE                             # Logical
factor_var  <- factor(c("High","Medium","Low")) # Factor
```

### Variables

```r
age        <- 25
name       <- "Alice"
is_student <- TRUE
```

### Operators

```r
# Arithmetic
sum_result   <- 5 + 3
diff_result  <- 7 - 2
prod_result  <- 4 * 6
div_result   <- 8 / 2

# Comparison
is_equal        <- (5 == 5)
not_equal       <- (3 != 7)
greater_than    <- (10 > 5)
less_than_equal <- (8 <= 10)

# Logical
logical_and <- TRUE & FALSE
logical_or  <- TRUE | FALSE
logical_not <- !TRUE
```

### Collections

```r
# Vectors
numeric_vector <- c(1, 2, 3, 4, 5)
char_vector    <- c("apple", "banana", "orange")
logical_vector <- c(TRUE, FALSE, TRUE)

# Matrix
matrix_data <- matrix(c(1,2,3,4,5,6), nrow=2, ncol=3)

# List
my_list <- list(name="John", age=30, is_student=FALSE)

# Data Frame
data_frame <- data.frame(name=c("Alice","Bob","Charlie"), age=c(25,30,22))
```

---

## Experiment 3 — R Loops

### What This Program Does
- Shows three loop types in R: `for`, `while`, and `repeat`
- Each loop prints iteration numbers 1 through 5

### for Loop

```r
for (i in 1:5) {
  print(paste("Iteration:", i))
}
```
Iterates over a fixed sequence (1 to 5) and prints each value.

### while Loop

```r
j <- 1
while (j <= 5) {
  print(paste("Iteration:", j))
  j <- j + 1
}
```
Runs as long as the condition `j <= 5` is TRUE; increments `j` manually.

### repeat Loop with break

```r
k <- 1
repeat {
  print(paste("Iteration:", k))
  k <- k + 1
  if (k > 5) {
    break  # Exit the loop when k exceeds 5
  }
}
```
Runs indefinitely until a `break` statement exits the loop.

---

## Experiment 4 — Functions in R

### What This Program Does
- Shows how to define and call functions in R
- Demonstrates a function with no arguments and one with arguments and a return value

### Function Without Arguments

```r
hello_world <- function() {
  print("Hello, World!")
}

hello_world()   # Output: "Hello, World!"
```

### Function With Arguments and Return Value

```r
add_numbers <- function(a, b) {
  result <- a + b
  return(result)
}

sum_result <- add_numbers(3, 7)
print(sum_result)   # Output: 10
```

---

## Experiment 5 — Data Frames with cbind() and rbind()

### What This Program Does
- Creates two separate data frames
- Uses `cbind()` to add a new column (Salary) to a data frame
- Uses `rbind()` to stack two data frames vertically (combine rows)

### Code

```r
# Create two data frames
df1 <- data.frame(ID=c(1,2,3), Name=c("Alice","Bob","Charlie"), Age=c(25,30,22))
df2 <- data.frame(ID=c(4,5,6), Name=c("David","Eve","Frank"),   Age=c(28,35,29))

# cbind() — add a new Salary column to df1
cbind_result <- cbind(df1, Salary=c(50000, 60000, 45000))
print(cbind_result)

# rbind() — stack df1 and df2 rows together
rbind_result <- rbind(df1, df2)
print(rbind_result)
```

### Key Difference

| Function | Direction | Use Case |
|----------|-----------|----------|
| `cbind()` | Horizontal (adds columns) | Attach new variables to existing data |
| `rbind()` | Vertical (adds rows) | Combine records from two datasets |

---

## Experiment 6 — String Manipulation

### What This Program Does
- Demonstrates the most common string operations available in R's base package

### Operations and Code

```r
# 1. Concatenation
result <- paste("Hello", "World")
# Output: "Hello World"

# 2. Substring Extraction
substring <- substr("DataScience", start=5, stop=9)
# Output: "Scien"

# 3. String Length
nchar("Programming")
# Output: 11

# 4. Uppercase / Lowercase
toupper("programming")   # "PROGRAMMING"
tolower("PROGRAMMING")   # "programming"

# 5. Replace a substring
gsub("R", "Python", "I love programming in R")
# Output: "I love programming in Python"

# 6. Split a string
strsplit("apple,orange,banana", ",")
# Output: list → "apple" "orange" "banana"
```

---

## Experiment 7 — Data Structures in R

### What This Program Does
- Demonstrates the three primary data structures: Vectors, Lists, and Data Frames
- Shows how to create each and access their elements

### Vectors (1D, same data type)

```r
numeric_vector   <- c(1, 2, 3, 4, 5)
character_vector <- c("apple", "orange", "banana")

print(numeric_vector[3])   # Access 3rd element → 3
```

### Lists (multi-type collection)

```r
my_list <- list(numeric_vector, character_vector, TRUE, "Hello")

print(my_list[[1]])   # 1st element → numeric vector
print(my_list[[2]])   # 2nd element → character vector
```

### Data Frames (2D table)

```r
my_data <- data.frame(
  Name  = c("Alice", "Bob", "Charlie"),
  Age   = c(25, 30, 22),
  Grade = c("A", "B", "C")
)

print(my_data$Name)     # Access Name column
print(my_data[2, 3])    # Row 2, Col 3 → "B"
```

---

## Experiment 8 — Reading and Analyzing a CSV File

### What This Program Does
- Reads a CSV file (`data.csv`) into R using `read.csv()`
- Displays the data and computes summary statistics, mean, max, and min for the Age column

### Sample CSV (`data.csv`)

```
Name, Age, Grade
Alice, 25, A
Bob, 30, B
Charlie, 22, C
```

### Code

```r
# Read the CSV file
data <- read.csv("data.csv", header=TRUE)

# Display data
print(data)

# Summary statistics for Age column
print(summary(data$Age))

# Individual statistics
mean_age <- mean(data$Age)
max_age  <- max(data$Age)
min_age  <- min(data$Age)

print(paste("Mean Age:", mean_age))
print(paste("Maximum Age:", max_age))
print(paste("Minimum Age:", min_age))
```

### Key Functions Used

| Function | Purpose |
|----------|---------|
| `read.csv()` | Reads a CSV file into a data frame |
| `summary()` | Returns descriptive statistics |
| `mean()` | Calculates the average |
| `max()` / `min()` | Finds the highest / lowest value |

---

## Experiment 9 — Pie Charts and Bar Charts

### What This Program Does
- Creates a **pie chart** to show proportional data across categories
- Creates a **bar chart** to visually compare values across categories

### Pie Chart

```r
pie_data <- c(30, 40, 20, 10)
labels   <- c("Category A", "Category B", "Category C", "Category D")

pie(pie_data, labels=labels, main="Pie Chart Example")
```
Each slice shows a category's proportion of the total (30%, 40%, 20%, 10%).

### Bar Chart

```r
bar_data   <- c(25, 40, 15, 30)
categories <- c("Category A", "Category B", "Category C", "Category D")

barplot(bar_data,
        names.arg = categories,
        col       = "skyblue",
        main      = "Bar Chart Example",
        xlab      = "Categories",
        ylab      = "Values")
```
Each bar's height represents the numeric value for that category.

---

## Experiment 10 — Statistical Analysis on a Dataset

### What This Program Does
- Creates a synthetic dataset of 50 Height and Weight values using `rnorm()`
- Computes descriptive statistics using `summary()`
- Performs an independent samples **t-test** to compare means of two groups

### Code

```r
set.seed(123)   # For reproducibility

height <- rnorm(50, mean=170, sd=10)
weight <- rnorm(50, mean=70,  sd=5)

my_data <- data.frame(Height=height, Weight=weight)

# Preview data
print(head(my_data))

# Descriptive statistics
print(summary(my_data))

# T-test: compare mean height of first 25 vs last 25
group1 <- my_data$Height[1:25]
group2 <- my_data$Height[26:50]

t_test_result <- t.test(group1, group2)
print(t_test_result)
```

### Key Concepts

| Concept | Description |
|---------|-------------|
| `set.seed()` | Makes random results reproducible |
| `rnorm(n, mean, sd)` | Generates `n` normally distributed random numbers |
| `summary()` | Returns Min, Max, Mean, Median, Quartiles |
| `t.test()` | Tests if two group means are statistically different |

### Interpreting the t-test Output
- **p-value < 0.05** → Statistically significant difference between the two groups
- **p-value ≥ 0.05** → No significant difference between the groups

---

