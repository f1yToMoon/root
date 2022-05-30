[![Coverage Status](https://coveralls.io/repos/github/f1yToMoon/root/badge.svg?branch=main)](https://coveralls.io/github/f1yToMoon/root?branch=main)
# Run root
You can start a container by running the following command in your terminal which will start the latest stable release of ROOT:

> docker run -e DISPLAY=$DISPLAY -v /tmp/.X11-unix:/tmp/.X11-unix --rm -it --user $(id -u) rootproject/root root

### Parse macros in docker image:

* Find name of container_id;

  > docker container ls -a
  
* Push data and macros with commands:
 
  > docker cp /home/nikita/[FILE.RO0T] [CONTAINER_ID]:/opt/ 
 
  > docker cp /home/nikita/macros/[MACROS.C] [CONTAINER_ID]:/opt/root/macros
  
### Run macros:
   
  >.x [MACROS.C]("arguments")
   
### For more details
  https://root.cern/install/
### Examples
![](images/print.png)
