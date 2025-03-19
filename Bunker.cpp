#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

void allthestuff() {
    vector<string> jobs = {"The Medic", "The Engineer", "The Leader", "The Saboteur", "The Diplomat", "The Spy", "The Trader", "The Soldier", "The Outsider", "The Con Artist", "The Survivor", "The Hacker", "The Watchman", "The Tactician", "The Rebel", "The Chemist", "The Architect", "The Bounty Hunter", "The Strategist", "The Cook", "The Captain", "The Collector", "The Cult Leader", "The Informant", "The Bodyguard", "The Scientist", "The Recruiter", "The Mechanic", "The Exile", "The Visionary", "The Politician", "The Forger", "The Pilot", "The Hunter", "The Jester", "The Negotiator", "The Deceiver", "The Titan", "The Agent", "The Mercenary", "The Entrepreneur", "The Philosopher", "The Messenger", "The Opportunist"};
    vector<string> tool1 = {"The Knife", "The Rations", "The Gun", "The Medical Kit", "The Radio", "The Water Supply", "The Map", "The Flashlight", "The Lockpick", "The Trap", "The First Aid Kit", "The Explosives", "The Generator", "The Bulletproof Vest", "The Fire Extinguisher", "The Duct Tape", "The Hammer", "The Rope", "The Grenade", "The Toolkit", "The Compass", "The Sleeping Bag", "The Machete", "The Binoculars", "The Scavenger's Kit"};
    vector<string> tool2 = {"The Emergency Blanket", "The Survival Manual", "The Shovel", "The Signal Flare", "The Gas Mask", "The Crowbar", "The Axe", "The Flashbang", "The Tarp", "The Canteen", "The Hazmat Suit", "The Medkit", "The Radio Receiver", "The Multi-Tool", "The Gasoline", "The Siphon", "The Battery", "The Bear Trap", "The Water Filter", "The Camouflage Net", "The Smoke Grenade", "The Night Vision Goggles", "The Barbed Wire", "The Taser", "The Dagger", "The Flashlight with Laser"};
    vector<string> hobby = {"The Fisherman", "The Gardener", "The Painter", "The Musician", "The Writer", "The Sculptor", "The Cook", "The Blacksmith", "The Carpenter", "The Baker", "The Mechanic", "The Inventor", "The Botanist", "The Photographer", "The Actor", "The Athlete", "The Traveler", "The Architect", "The Woodworker", "The Dancer", "The Brewer", "The Farmer", "The Librarian", "The Scientist", "The Philosopher", "The Engineer", "The Poet", "The Astronomer", "The Archaeologist", "The Beekeeper", "The Teacher", "The Designer", "The Seamstress", "The Pottery Maker", "The Birdwatcher", "The Calligrapher", "The Fashion Designer", "The Geologist", "The Baker", "The Jeweler", "The Historian", "The Sculptor", "The Plumber", "The Music Composer", "The Sailor", "The Entrepreneur"};
    vector<string> age = {"Age 18", "Age 19", "Age 20", "Age 21", "Age 22", "Age 23", "Age 24", "Age 25", "Age 26", "Age 27", "Age 28", "Age 29", "Age 30", "Age 31", "Age 32", "Age 33", "Age 34", "Age 35", "Age 36", "Age 37", "Age 38", "Age 39", "Age 40", "Age 41", "Age 42", "Age 43", "Age 44", "Age 45", "Age 46", "Age 47", "Age 48", "Age 49", "Age 50", "Age 51", "Age 52", "Age 53", "Age 54", "Age 55", "Age 56", "Age 57", "Age 58", "Age 59", "Age 60", "Age 61", "Age 62", "Age 63", "Age 64", "Age 65", "Age 66", "Age 67", "Age 68", "Age 69", "Age 70", "Age 71", "Age 72", "Age 73", "Age 74", "Age 75", "Age 76", "Age 77", "Age 78", "Age 79", "Age 80", "Age 81", "Age 82", "Age 83", "Age 84", "Age 85", "Age 86", "Age 87", "Age 88", "Age 89", "Age 90", "Age 91", "Age 92", "Age 93", "Age 94", "Age 95", "Age 96", "Age 97", "Age 98", "Age 99", "Age 100"};
    vector<string> disease = {"Flu", "Cold", "Pneumonia", "Infection", "Malaria", "Tuberculosis", "HIV", "Diabetes", "Cancer", "Cholera", "Plague", "Dysentery", "Food Poisoning", "Exhaustion", "Hunger", "Dehydration", "Stress", "Heart Disease", "Rash", "Blindness", "Paralysis", "Fever", "Injury Infection", "Nausea", "Vomiting", "Tetanus", "Skin Infection", "Sore Throat", "Bacterial Infection", "Fungal Infection", "Lung Disease", "Leprosy", "Bite Wound Infection", "Frostbite", "Hypothermia", "Heat Stroke", "Sepsis", "Intestinal Infection", "Cystitis", "Stroke", "Mental Illness", "Depression", "Anxiety", "Migraine", "Psychosis", "Insomnia", "Nervous Breakdown", "Epilepsy", "Scurvy", "Worms", "Foot Rot", "Blood Poisoning", "Scabies"};
    srand(static_cast<unsigned int>(time(0)));
    int randomIndex = rand() % jobs.size();
    cout << " Your job is : " << jobs[randomIndex] << endl;
    cout << " Your tools is : " << tool1[randomIndex] << " , " << tool2[randomIndex] << endl;
    cout << " Your hobby is : " << hobby[randomIndex] << endl;
    cout << " Your age is : " << age[randomIndex] << endl;
    cout << " Your disease is : " << disease[randomIndex] << endl;
}

void rules(){
    cout << "Gameplay: The game is played over five rounds, each consisting of the following phases:" << endl;
    cout << "1. Bunker Exploration :" << endl;
    cout << "    - Players explore the bunker to discover resources and tools." << endl;
    cout << "    - Draw cards from the Tools deck to find items that can aid survival." << endl;
    cout << "2. Open Card Round :" << endl;
    cout << "    - Players reveal and discuss their Fact, Personality, and Sickness cards." << endl;
    cout << "    - This phase encourages interaction and strategy formulation based on the revealed information." << endl;
    cout << "3. Voting :" << endl;
    cout << "    - Some rounds may include voting phases where players decide on actions or resolve conflicts." << endl;
    cout << "    - Voting can lead to the exile of a player, removing them from the game." << endl;
    cout << "Now if you readed all the stuff and if you wanna play this game , restart the whole program" << endl;
}

int main() {
    string options;
    cout << "Welcome to Bunker game , options : rules , start , leave" << endl;
    cin >> options;
    if (options == "Start" || options == "start" || options == "START") {
        allthestuff();
    }
    else if (options == "Rules" || options == "rules" || options == "RULES"){
        rules();
    }
    else if (options == "Leave" || options == "leave" || options == "LEAVE") {
        cout << "Bye" << endl;
    }
    else {
        cout << "Try again, you have to choose and write only these options : Leave , Start , Rules : ";
        cin >> options;
    }
}
