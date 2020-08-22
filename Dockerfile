From ubuntu:18.04

WORKDIR "/app"

RUN apt-get update \
    && apt-get dist-upgrade -y \
    && apt-get clean \
    && echo 'Finished installing dependencies'

Run apt-get install -y \
    cmake \
    g++ \
    git

COPY . /app

WORKDIR /app/build

RUN cmake .. \
    && make \
    && make test
