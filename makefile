final: UtPodDriver.o UtPod.o song.o
	g++ -o test UtPodDriver.o UtPod.o song.o
driver: UtPodDriver.cpp UtPod.h Song.h
	g++ UtPodDriver.cpp
UtPod.o: UtPod.cpp UtPod.h Song.h
	g++ UtPod.cpp
song.o: Song.cpp Song.h
	g++ Song.cpp
