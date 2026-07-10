FROM gcc:16
WORKDIR /app
COPY main.c .
RUN gcc main.c -o main
CMD ["./main"]
