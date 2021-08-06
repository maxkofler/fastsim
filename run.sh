cmake -Bbuild -Stest -GNinja
ninja -C build
echo "Start of program:"
echo "------------------------------"
build/FastSIM_Core_Test