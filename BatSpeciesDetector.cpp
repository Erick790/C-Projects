#include <iostream>
using namespace std;


int main() {
  char selection;
  float totallength, tail, ear, forearm, hindfoot, weight;
  
  cout << "" << endl;
  cout << "\t       FAMILIES\n" << endl;
  cout << "\t[1] Pteropodidae" << endl;
  cout << "\t[2] Megadermatidae" << endl;
  cout << "\t[3] Rhinolophidae" << endl;
  cout << "\t[4] Emballonuridae" << endl;
  cout << "\t[5] Mollossidae" << endl;
  cout << "\t[6] Vespertilionidae\n" << endl;
  cout << "Select Family: ";
  cin >> selection;

  switch (selection) {
  case '1':
    cout << "Forearm: ";
    cin >> forearm;
    cout << "Tail: ";
    cin >> tail;
    cout << "Ear: ";
    cin >> ear;
    cout << "Total Length: ";
    cin >> totallength;
    cout << "Weight: ";
    cin >> weight;
    if (forearm >= 165 && forearm <= 215 && tail == 0 && ear >= 31 && ear <= 41 && totallength >= 255 && totallength <= 310 && weight >= 900 && weight <= 1250) {
      cout << "Species: Acerodon jubatus\n";
    } else if (forearm >= 132 && forearm <= 165 && tail == 0 && ear >= 29 && ear <= 32 && totallength >= 220 && totallength <= 250 && weight == 0) {
      cout << "Species: Acerodon leucotis\n";
    } else if (forearm >= 167 && forearm <= 170 && tail == 0 && ear == 0 && totallength == 0 && weight == 0) {
      cout << "Species: Acerodon lucifer\n";
    } else if (forearm >= 45 && forearm <= 50 && tail == 0 && ear >= 11 && ear <= 12 && totallength >= 64 && totallength <= 70 && weight >= 14 && weight <= 18) {
      cout << "Species: Alionycteris paucidentata\n";
    } else if (forearm >= 58 && forearm <= 68 && tail >= 3 && tail <= 15 && ear >= 14 && ear <= 20 && totallength >= 88 && totallength <= 110 && weight >= 26 && weight <= 41) {
      cout << "Species: Cynopterus brachyotis\n";
    } else if (forearm >= 123 && forearm <= 131 && tail >= 23 && tail <= 26 && ear >= 25 && ear <= 27 && totallength >= 218 && totallength <= 221 && weight == 0) {
      cout << "Species: Dobsonia chapmani\n";
    } else if (forearm == 92 && tail == 29 && ear == 22 && totallength == 171 && weight == 0) {
      cout << "Species: Dyacopterus spadiceus\n";
    } else if (forearm >= 67 && forearm <= 82 && tail >= 20 && tail <= 28 && ear >= 19 && ear <= 23 && totallength >= 127 && totallength <= 155 && weight >= 75 && weight <= 80) {
      cout << "Species: Eoncyteris robusta\n";
    } else if (forearm >= 67 && forearm <= 80 && tail >= 12 && tail <= 20 && ear >= 18 && ear <= 23 && totallength >= 121 && totallength <= 145 && weight >= 48 && weight <= 90) {
      cout << "Species: Eoncyteris spelaea\n";
    } else if (forearm >= 46 && forearm <= 53 && tail == 0 && ear >= 11 && ear <= 16 && totallength >= 65 && totallength <= 80 && weight >= 16 && weight <= 21) {
      cout << "Species: Haploncyteris fischeri\n";
    } else if (forearm >= 80 && forearm <= 91 && tail == 0 && ear >= 19 && ear <= 25 && totallength >= 130 && totallength <= 156 && weight >= 99 && weight <= 122) {
      cout << "Species: Harpyioncyteris whiteheadi\n";
    } else if (forearm >= 41 && forearm <= 45 && tail == 0 && ear >= 12 && ear <= 18 && totallength >= 65 && totallength <= 81 && weight >= 15 && weight <= 20) {
      cout << "Species: Macroglossus minimus\n";
    } else if (forearm >= 45 && forearm <= 52 && tail >= 0 && tail <= 6 && ear >= 12 && ear <= 15 && totallength >= 70 && totallength <= 76 && weight >= 17 && weight <= 20) {
      cout << "Species: Megaerops wetmorei\n";
    } else if (forearm >= 71 && forearm <= 79 && tail >= 20 && tail <= 30 && ear >= 17 && ear <= 24 && totallength >= 131 && totallength <= 149 && weight >= 61 && weight <= 74) {
      cout << "Species: Nyctimene rabori\n";
    } else if (forearm >= 43 && forearm <= 50 && tail == 0 && ear >= 12 && ear <= 14 && totallength >= 70 && totallength <= 76 && weight >= 15 && weight <= 17) {
      cout << "Species: Otopteropus cartilagonodus\n";
    } else if (forearm >= 76 && forearm <= 90 && tail >= 6 && tail <= 18 && ear >= 18 && ear <= 25 && totallength >= 120 && totallength <= 145 && weight >= 62 && weight <= 97) {
      cout << "Species: Ptenochirus jagori\n";
    } else if (forearm >= 60 && forearm <= 78 && tail >= 4 && tail <= 12 && ear >= 13 && ear <= 22 && totallength >= 98 && totallength <= 125 && weight >= 31 && weight <= 62) {
      cout << "Species: Ptenochirus minor\n";
    } else if (forearm >= 133 && forearm <= 152 && tail == 0 && ear == 25 && totallength >= 220 && totallength <= 230 && weight >= 380 && weight <= 490) {
      cout << "Species: Pteropus dasymallus\n";
    } else if (forearm >= 136 && forearm <= 149 && tail == 0 && ear >= 28 && ear <= 32 && totallength >= 210 && totallength <= 240 && weight >= 425 && weight <= 450) {
      cout << "Species: Pteropus hypomelanus\n";
    } else if (forearm >= 135 && forearm <= 141 && tail == 0 && ear >= 26 && ear <= 28 && totallength >= 205 && totallength <= 240 && weight == 340) {
      cout << "Species: Pteropus leucopterus\n";
    } else if (forearm >= 94 && forearm <= 113 && tail == 0 && ear >= 20 && ear <= 28 && totallength >= 155 && totallength <= 180 && weight >= 145 && weight <= 200) {
      cout << "Species: Pteropus pumilus\n";
    } else if (forearm >= 118 && forearm <= 133 && tail == 0 && ear >= 24 && ear <= 30 && totallength >= 190 && totallength <= 215 && weight == 0) {
      cout << "Species: Pteropus speciosus\n";
    } else if (forearm >= 179 && forearm <= 204 && tail == 0 && ear >= 35 && ear <= 45 && totallength >= 270 && totallength <= 320 && weight >= 725 && weight <= 810) {
      cout << "Species: Pteropus vampyrus\n";
    } else if (forearm >= 80 && forearm <= 92 && tail >= 13 && tail <= 24 && ear >= 18 && ear <= 24 && totallength >= 128 && totallength <= 154 && weight >= 64 && weight <= 106) {
      cout << "Species: Rousettus amplexicaudatus\n";
    } else {
      cout << "Incorrect Measurements\n";
    }
    break;
  case '2':
    cout << "Forearm: ";
    cin >> forearm;
    cout << "Hind Foot: ";
    cin >> hindfoot;
    cout << "Tail: ";
    cin >> tail;
    cout << "Ear: ";
    cin >> ear;
    cout << "Total Length: ";
    cin >> totallength;
    cout << "Weight: ";
    cin >> weight;
    if (forearm >= 44 && forearm <= 49 && hindfoot >= 7 && hindfoot <= 10 && tail >= 9 && tail <= 12 && ear >= 12 && ear <= 16 && totallength >= 56 && totallength <= 69 && weight >= 4 && weight <= 6.5) {
      cout << "Species: Emballonura alecto\n";
    } else if (forearm >= 66 && forearm <= 71 && hindfoot >= 15 && hindfoot <= 19 && tail >= 20 && tail <= 28 && ear >= 16 && ear <= 20 && totallength >= 103 && totallength <= 117 && weight >= 28 && weight <= 36) {
      cout << "Species: Saccolaimus saccolaimus\n";
    } else if (forearm >= 61 && forearm <= 65 && hindfoot >= 11 && hindfoot <= 15 && tail >= 20 && tail <= 25 && ear >= 20 && ear <= 24 && totallength >= 100 && totallength <= 111 && weight >= 20 && weight <= 29) {
      cout << "Species: Taphozous melanopogon\n";
    } else if (forearm >= 57 && forearm <= 63 && hindfoot >= 18 && hindfoot <= 22 && tail == 0 && ear >= 36 && ear <= 43 && totallength >= 70 && totallength <= 89 && weight >= 21 && weight <= 27) {
      cout << "Species: Megaderma spasma\n";
    } else {
      cout << "Incorrect Measurements\n";
    }
   break;
  case '3':
    cout << "Forearm: ";
    cin >> forearm;
    cout << "Hind Foot: ";
    cin >> hindfoot;
    cout << "Tail: ";
    cin >> tail;
    cout << "Ear: ";
    cin >> ear;
    cout << "Total Length: ";
    cin >> totallength;
    cout << "Weight: ";
    cin >> weight;
    if (forearm == 34 && hindfoot == 65 && tail == 7 && ear == 0 && totallength == 40 && weight == 0) {
      cout << "Coelops hirsuta\n";  
    } else if (forearm >= 38 && forearm <= 43 && hindfoot >= 7 && hindfoot <= 10 && tail >= 27 && tail <= 36 && ear >= 17 && ear <= 20 && totallength >= 71 && totallength <= 81 && weight >= 5 && weight <= 7) {
      cout << "Hipposideros ater\n";
    } else if (forearm == 42 && hindfoot == 8 && tail == 31 && ear == 20 && totallength == 0 && weight == 0) {
      cout << "Hipposideros bicolor\n";
    } else if (forearm == 0 && hindfoot == 0 && tail == 0 && ear == 0 && totallength == 0 && weight == 0) {
      cout << "Hipposideros cervinus\n";
    } else if (forearm >= 44 && forearm <= 50 && hindfoot >= 8 && hindfoot <= 9 && tail >= 24 && tail <= 32 && ear >= 11 && ear <= 16 && totallength >= 77 && totallength <= 81 && weight == 7.5) {
      cout << "Hipposideros cervinust\n";
    } else if (forearm == 47 && hindfoot == 10 && tail == 34 && ear == 15 && totallength == 100 && weight == 0) {
      cout << "Hipposideros coronatus\n";
    } else if (forearm >= 79 && forearm <= 89 && hindfoot >= 16 && hindfoot <= 21 && tail >= 44 && tail <= 50 && ear >= 30 && ear <= 35 && totallength >= 140 && totallength <= 151 && weight >= 34 && weight <= 84) {
      cout << "Hipposideros diadema (males)\n";
    } else if (forearm >= 77 && forearm <= 86 && hindfoot >= 17 && hindfoot <= 21 && tail >= 39 && tail <= 51 && ear >= 28 && ear <= 32 && totallength >= 135 && totallength <= 147 && weight >= 33 && weight <= 66) {
      cout << "Hipposideros diadma (females)\n";
    } else if (forearm >= 42 && forearm <= 48 && hindfoot >= 10 && hindfoot <= 12 && tail >= 18 && tail <= 24 && ear >= 18 && ear <= 22 && totallength >= 71 && totallength <= 79 && weight >= 7 && weight <= 12) {
      cout << "Hipposideros obscurus\n";
    } else if (forearm >= 37 && forearm <= 40 && hindfoot >= 6 && hindfoot <= 8 && tail >= 21 && tail <= 27 && ear >= 11 && ear <= 15 && totallength >= 60 && totallength <= 73 && weight >= 3 && weight <= 4) {
      cout << "Hipposideros pygmaeus\n";
    } else if (forearm >= 47 && forearm <= 49 && hindfoot >= 11 && hindfoot <= 13 && tail == 25 && ear >= 16 && ear <= 20 && totallength == 85 && weight >= 10 && weight <= 14) {
      cout << "Rhinolophus acuminatus\n";
    } else if (forearm >= 43 && forearm <= 45.5 && hindfoot >= 9 && hindfoot <= 12 && tail >= 16 && tail <= 23 && ear >= 19 && ear <= 22 && totallength >= 68 && totallength <= 73 && weight >= 7 && weight <= 9.5) {
      cout << "Rhinolophus arcuatus-s\n";
    } else if (forearm >= 47 && forearm <= 50 && hindfoot >= 11 && hindfoot <= 12 && tail >= 18 && tail <= 26 && ear >= 22 && ear <= 25 && totallength >= 73 && totallength <= 81 && weight >= 8.5 && weight <= 10) {
      cout << "Rhinolophus arcuatus-l\n";
    } else if (forearm >= 49 && forearm <= 55 && hindfoot >= 12 && hindfoot <= 15 && tail >= 20 && tail <= 27 && ear >= 22 && ear <= 28 && totallength >= 78 && totallength <= 90 && weight >= 11 && weight <= 16) {
      cout << "Rhinolophus inops\n";
    } else if (forearm >= 43 && forearm <= 44 && hindfoot >= 8 && hindfoot <= 9 && tail >= 23 && tail <= 25 && ear >= 25 && ear <= 26 && totallength >= 71 && totallength <= 72 && weight == 6) {
      cout << "Rhinolophus macrotis\n";
    } else if (forearm >= 51 && forearm <= 57 && hindfoot >= 10 && hindfoot <= 12 && tail >= 29 && tail <= 33 && ear >= 28 && ear <= 36 && totallength >= 89 && totallength <= 94 && weight == 11) {
      cout << "Rhinolophus philippinensis\n";
    } else if (forearm >= 68 && forearm <= 73 && hindfoot >= 17 && hindfoot <= 21 && tail >= 30 && tail <= 33 && ear >= 33 && ear <= 37 && totallength >= 110 && totallength <= 130 && weight >= 26 && weight <= 34) {
      cout << "Rhinolophus rufus\n";
    } else if (forearm >= 51 && forearm <= 56 && hindfoot >= 12 && hindfoot <= 15 && tail >= 20 && tail <= 23 && ear >= 24 && ear <= 27 && totallength >= 80 && totallength <= 90 && weight == 0) {
      cout << "Rhinolophus subrufus\n";
    } else if (forearm >= 38 && forearm <= 44 && hindfoot >= 7 && hindfoot <= 10 && tail >= 18 && tail <= 26 && ear >= 17 && ear <= 21 && totallength >= 62 && totallength <= 73 && weight >= 5 && weight <= 7) {
      cout << "Rhinolophus virgo\n";
    } else {
      cout << "Incorrect Measurements\n";
    }
   break;
  case '4':
    cout << "Forearm: ";
    cin >> forearm;
    cout << "Hind Foot: ";
    cin >> hindfoot;
    cout << "Tail: ";
    cin >> tail;
    cout << "Ear: ";
    cin >> ear;
    cout << "Total Length: ";
    cin >> totallength;
    cout << "Weight: ";
    cin >> weight;
    if (forearm >= 44 && forearm <= 49 && hindfoot >= 7 && hindfoot <= 10 && tail >= 9 && tail <= 12 && ear >= 12 && ear <= 16 && totallength >= 56 && totallength <= 69 && weight >= 4 && weight <= 6.5) {
      cout << "Species: Emballonura alecto\n";
    } else if (forearm >= 66 && forearm <= 71 && hindfoot >= 15 && hindfoot <= 19 && tail >= 20 && tail <= 28 && ear >= 16 && ear <= 20 && totallength >= 103 && totallength <= 117 && weight >= 28 && weight <= 36) {
      cout << "Species: Saccolaimus saccolaimus\n";
    } else if (forearm >= 61 && forearm <= 65 && hindfoot >= 11 && hindfoot <= 15 && tail >= 20 && tail <= 25 && ear >= 20 && ear <= 24 && totallength >= 100 && totallength <= 111 && weight >= 20 && weight <= 29) {
      cout << "Species: Taphozous melanopogon\n";
    } else if (forearm >= 57 && forearm <= 63 && hindfoot >= 18 && hindfoot <= 22 && tail == 0 && ear >= 36 && ear <= 43 && totallength >= 70 && totallength <= 89 && weight >= 21 && weight <= 27) {
      cout << "Species: Megaderma spasma\n";
    } else {
      cout << "Incorrect Measurements\n";
    }
   break;
   case '5':
    cout << "Forearm: ";
    cin >> forearm;
    cout << "Hind Foot: ";
    cin >> hindfoot;
    cout << "Tail: ";
    cin >> tail;
    cout << "Ear: ";
    cin >> ear;
    cout << "Total Length: ";
    cin >> totallength;
    cout << "Weight: ";
    cin >> weight;
    if (forearm >= 40 && forearm <= 43 && hindfoot >= 10 && hindfoot <= 12 && tail >= 28 && tail <= 34 && ear >= 16 && ear <= 20 && totallength >= 95 && totallength <= 101 && weight == 0) {
      cout << "Chaerephon plicata\n";
    } else if (forearm >= 73 && forearm <= 78 && hindfoot == 0 && tail >= 54 && tail <= 58 && ear >= 19 && ear <= 20 && totallength >= 170 && totallength <= 185 && weight == 0) {
      cout << "Cheiromeles parvidens\n";
    } else if (forearm >= 80 && forearm <= 90 && hindfoot == 26 && tail == 59 && ear == 29 && totallength == 261 && weight == 0) {
      cout << "Cheiromeles torquatus\n";
    } else if (forearm >= 39 && forearm <= 45 && hindfoot >= 11 && hindfoot <= 13 && tail >= 30 && tail <= 36 && ear >= 18 && ear <= 22 && totallength >= 90 && totallength <= 109 && weight == 0) {
      cout << "Mops sarasinorum\n";
    } else {
      cout << "Incorrect Measurements\n";
    }
   break;
   case '6':
    cout << "Forearm: ";
    cin >> forearm;
    cout << "Hind Foot: ";
    cin >> hindfoot;
    cout << "Tail: ";
    cin >> tail;
    cout << "Ear: ";
    cin >> ear;
    cout << "Total Length: ";
    cin >> totallength;
    cout << "Weight: ";
    cin >> weight;
    if (forearm >= 26 && forearm <= 30 && hindfoot == 6 && tail >= 33 && tail <= 40 && ear >= 10 && ear <= 11 && totallength >= 70 && totallength <= 90 && weight == 0) {
      cout << "Glischropus tylopus\n";
    } else if (forearm == 51 && hindfoot >= 13 && hindfoot <= 14 && tail >= 46 && tail <= 51 && ear >= 18 && ear <= 19 && totallength >= 121 && totallength <= 125 && weight == 19) {
      cout << "Harpiocephalus harpia\n";
    } else if (forearm >= 34 && forearm <= 35 && hindfoot >= 8 && hindfoot <= 10 && tail >= 38 && tail <= 47 && ear >= 14 && ear <= 15 && totallength >= 77 && totallength <= 88 && weight >= 4 && weight <= 5) {
      cout << "Kerivoula hardwickii\n";
    } else if (forearm == 35 && hindfoot == 9 && tail == 40 && ear == 15 && totallength == 90 && weight == 0) {
      cout << "Kerivoula pellucida\n";
    } else if (forearm == 30 && hindfoot >= 7 && hindfoot <= 8 && tail >= 31 && tail <= 37 && ear >= 12 && ear <= 14 && totallength >= 66 && totallength <= 72 && weight == 0) {
      cout << "Kerivoula whiteheadi\n";
    } else if (forearm >= 34 && forearm <= 39 && hindfoot >= 7 && hindfoot <= 9 && tail >= 34 && tail <= 43 && ear >= 9 && ear <= 11 && totallength >= 81 && totallength <= 91 && weight >= 5 && weight <= 7) {
      cout << "Miniopterus australis\n";
    } else if (forearm >= 42 && forearm <= 46 && hindfoot >= 8 && hindfoot <= 10 && tail >= 46 && tail <= 57 && ear >= 11 && ear <= 13 && totallength >= 101 && totallength <= 112 && weight >= 8 && weight <= 14) {
      cout << "Miniopterus schreibersi\n";
    } else if (forearm >= 51 && forearm <= 55 && hindfoot >= 10 && hindfoot <= 12 && tail >= 50 && tail <= 61 && ear >= 15 && ear <= 17 && totallength >= 115 && totallength <= 134 && weight >= 16 && weight <= 22) {
      cout << "Miniopterus tristis\n";
    } else if (forearm >= 36 && forearm <= 39 && hindfoot >= 9 && hindfoot <= 12 && tail >= 38 && tail <= 42 && ear >= 14 && ear <= 17 && totallength >= 90 && totallength <= 101 && weight >= 9 && weight <= 11) {
      cout << "Murina cyclotis\n";
    } else if (forearm >= 35 && forearm <= 38 && hindfoot >= 10 && hindfoot <= 12 && tail >= 30 && tail <= 41 && ear >= 12 && ear <= 16 && totallength >= 83 && totallength <= 95 && weight >= 5 && weight <= 6.5) {
      cout << "Myotis horsfieldii\n";
    } else if (forearm >= 44 && forearm <= 49 && hindfoot >= 15 && hindfoot <= 17 && tail >= 39 && tail <= 49 && ear >= 16 && ear <= 19 && totallength >= 98 && totallength <= 114 && weight >= 10 && weight <= 15) {
      cout << "Myotis macrotarsus\n";
    } else if (forearm >= 30 && forearm <= 34 && hindfoot >= 6 && hindfoot <= 8 && tail >= 30 && tail <= 38 && ear >= 11 && ear <= 14 && totallength >= 69 && totallength <= 79 && weight >= 3 && weight <= 4) {
      cout << "Myotis muricola\n";
    } else if (forearm >= 52 && forearm <= 53 && hindfoot == 14 && tail == 48 && ear == 20 && totallength == 115 && weight == 17) {
      cout << "Myotis rufopictus\n";
    } else if (forearm >= 34 && forearm <= 39 && hindfoot >= 9 && hindfoot <= 11 && tail >= 31 && tail <= 39 && ear >= 13 && ear <= 15 && totallength >= 90 && totallength <= 99 && weight >= 11 && weight <= 13) {
      cout << "Philetor brachypterus\n";
    } else if (forearm == 39 && hindfoot >= 8 && hindfoot <= 9 && tail >= 40 && tail <= 42 && ear == 17 && totallength >= 89 && totallength <= 94 && weight == 0) {
      cout << "Phoniscus jagorii\n";
    } else if (forearm >= 32 && forearm <= 36 && hindfoot >= 7 && hindfoot <= 10 && tail >= 29 && tail <= 37 && ear >= 10 && ear <= 13 && totallength >= 75 && totallength <= 90 && weight >= 4 && weight <= 6) {
      cout << "Pipistrellus javanicus\n";
    } else if (forearm == 38 && hindfoot == 0 && tail == 0 && ear == 0 && totallength == 0 && weight == 0) {
      cout << "Pipistrellus petersi\n";
    } else if (forearm >= 38 && forearm <= 40 && hindfoot == 11 && tail == 36 && ear == 13 && totallength == 92 && weight >= 12 && weight <= 16) {
      cout << "Pipistrellus stenopterus\n";
    } else if (forearm >= 30 && forearm <= 32 && hindfoot >= 6 && hindfoot <= 7 && tail >= 26 && tail <= 31 && ear >= 11 && ear <= 12 && totallength >= 68 && totallength <= 76 && weight >= 3 && weight <= 4) {
      cout << "Pipistrellus tenuis\n";
    } else if (forearm >= 47 && forearm <= 53 && hindfoot >= 10 && hindfoot <= 13 && tail >= 40 && tail <= 52 && ear >= 12 && ear <= 16 && totallength >= 110 && totallength <= 131 && weight >= 17 && weight <= 22) {
      cout << "Scotophilus kuhlii\n";
    } else if (forearm >= 22 && forearm <= 25 && hindfoot == 0 && tail >= 24 && tail <= 25 && ear >= 7 && ear <= 8 && totallength >= 60 && totallength <= 62 && weight >= 1 && weight <= 2) {
      cout << "Tylonycteris pachypus\n";
    } else if (forearm >= 24 && forearm <= 27 && hindfoot == 0 && tail == 27 && ear >= 8 && ear <= 9 && totallength >= 71 && totallength <= 75 && weight == 0) {
      cout << "Tylonycteris robustula\n";
    } else {
      cout << "Incorrect Measurements\n";
    }
   break;
  default:
    cout << "Incorrect, select from 1-6 then try again\n";
    break;
  }
  system("pause");
  system("start BatSpeciesDetector.exe");
}