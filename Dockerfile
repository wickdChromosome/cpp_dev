FROM fedora:latest

RUN yum -y upgrade

RUN yum -y install python3-pip g++ perl make cmake vim 

RUN pip3 install conan

ADD ./src/conanfile.txt .

RUN conan install . --build=missing

ENTRYPOINT ["bash", "src/app.sh"]






