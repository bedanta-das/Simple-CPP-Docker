# Use official GCC image
FROM gcc:13

# Set working directory inside container
WORKDIR /app

# Copy source code
COPY src/index.cpp .

# Compile the C++ program
RUN g++ -std=c++17 index.cpp -o app

# Run the executable
CMD ["./app"]
