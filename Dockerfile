FROM gcc:16 AS builder
WORKDIR /app
COPY main.c .
RUN gcc main.c -static -Os -o main

FROM scratch
COPY --from=builder /app/main ./main
CMD ["./main"]
