# FastSIM
FastSIM is a library built in C++ to simulate boolean parts. As its name suggests it is aimed to deliver performance and be fast at simulating. Other goals include expandibility by loading in new parts by DLL loading.

## Is it ready to use?
NO! This project is ongoing and is not usable at this point, but as soon as it is I will work on a GUI to make it usable for the average user.

## Can I test it?
YES! You will need ```cmake```, ```git``` and a compiler (such as ```gcc```). Next you will need to clone this repository using ```git clone --recursive https://github.com/maxkofler/fastsim```, than change into its folder, create a build folder
using ```mkdir build```, change into this folder using ```cd build``` and then CMake the project: ```cmake ..```. The next step is to build it using make: ```make -j <number of cores>```.
Now you can run the tests using ```ctest -V .```

## How can I help?
You can help by first of all try to build this project and run the tests, if you want to help me developing this library, contact me: [Max Kofler](mailto:kofler.max.dev@gmail.com?subject=[FastSIM])
