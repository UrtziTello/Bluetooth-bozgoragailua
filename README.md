# BLUETOOTH-BOZGORAGAILUA
Proiektu honetan bozgorailu bat kontrolatuko dugu bluetooth-aren bidez eta audio seinalearen(db-ak) bidez voometer bat kontrolatuko dugu. Db gehiago eukitzen badugu led gehiago piztuko dira eta berdina alderantziz.

Horrela egin dugu guk:
[TDA7297](https://github.com/UrtziTello/Bluetooth-bozgoragailua/wiki/Anplifikadorea#tda7297) txip-a erabiliz egindako estereo bluetooth bozgoragailua.

Proiektua honako hiru atal nagusietan banatuko dugu:


# Anplifikagailua

![](https://i.imgur.com/3A1oUfT.png)


[Anplifikagailua](https://github.com/UrtziTello/Bluetooth-bozgoragailua/wiki/Anplifikadorea) [bluetooth](https://github.com/UrtziTello/Bluetooth-bozgoragailua/wiki/Bluetooth-moduloa) moduloatik etortzen diren audioaren seinaleak indartzeko erabiliko dugun gailua da, bolumen handiagoa eta soinuaren kalitate hobea lortuz. [Anplifikagailua](https://github.com/UrtziTello/Bluetooth-bozgoragailua/wiki/Anplifikadorea) seinale eta soinu distortsio baxua mantentzenko gai da soinu garbia eta fidagarria bermatuz, baita bolumen altuetan ere. [Anplifikagailu](https://github.com/UrtziTello/Bluetooth-bozgoragailua/wiki/Anplifikadorea) honek eraginkortasun energetikoa eskaintzen du eta hau bero gutxi sortuz, gailuaren iraunkortasuna eta egonkortasuna hobetuz. Gainera, oso aipagarria da hau dena egin dezakegula diseinu trinkoa duen [anplifikagailu](https://github.com/UrtziTello/Bluetooth-bozgoragailua/wiki/Anplifikadorea) batekin eta honek integrazio eta erabilera oso erraza eskaintzen digu, horri esker edozein audio-sisteman esperientzia bikaina eskaini diezakegu.


# Bumeter


![AR0133-Matriz-8X8-Diagrama-Arduino-1](https://github.com/user-attachments/assets/274a1d2e-b4c1-4f07-bb0b-82d274cc437e)


Bumeter bat sortzeko, guk [1088AS](https://github.com/UrtziTello/Bluetooth-bozgoragailua/wiki/Bumetroa#1088as) LED matrizea erabiltzea aukeratu dugu [arduino uno](https://github.com/UrtziTello/Bluetooth-bozgoragailua/wiki/Bumetroa#arduino-uno) baten bidez kontrolatzeko. Horren bidez, balio analogikoaren arabera, zenbat eta balio gehiago izan, orduan eta errenkada gehiago piztu. Balio gehien edo gutxien lortzen dugun bolumenaren arabera. Errenkada bat beti eukiko dugu piztuta bolumena izan ala ez. Bumeterra funtzionatzeko arduino kodigo bat sortu dugu seinalea irakurri ahal izateko eta led matriz-ak piztu eta itzali ahal izateko.


# Bluetooth moduloa


![](https://img.alicdn.com/imgextra/i3/2787228717/O1CN01XB5aFy2EGRNKl4bgX_!!2787228717.jpg)


[Bluetooh moduluaren](https://github.com/UrtziTello/Bluetooth-bozgoragailua/wiki/Bluetooth-moduloa) bidez konektatuko eta kontrolatuko dugu gure bozgorailua eta bumeterra. Konektatzerakoan seinale analogiko bat bidaliko du arduinora eta amplifikagailura musika entzun ahal izateko. 
