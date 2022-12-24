// This is the main project file for VC++ application project
// generated using an Application Wizard.

#include "stdafx.h"

#using <mscorlib.dll>

using namespace System;

int _tmain()
{
	Random *randomNumber = new Random();
    //

	// introduction.....
    Console::WriteLine(S"Duvall's deck test program. written by Duvall\n");

	enum CardsInOldDeck
	{
		0 == Masked_Beast_Des_Gardius,
		1 == Melchid_The_Four_Face_Beast,
		2 == Chaos_Necromancer,
		3 == Spirit_Reaper,
		4 == Ancient_Lamp,
		5 == Grand_Tiki_Elder,
		6 == Kuriboh,
		7 == Heavy_Storm,
		8 == The_Mask_Of_Remnants,
		9 == Possessed_Dark_Soul,
		10 == Dark_Necrofear,
		11 == Nobleman_Of_Crossout,
		12 == Newdoria,
		13 == Call_Of_The_Haunted,
		14 == Dark_Jeriod,
		15 == Archfiend_Soldier,
		16 == Mystic_Tomato,
		17 == Mystical_Space_Typhoon,
		18 == Newdoria,
		19 == Sakuretsu_Armor,
		20 == Sakuretsu_Armor,
		21 == Mystic_Tomato,
		22 == Brain_Control,
		23 == Giant_Orc,
		24 == Giant_Orc,
		25 == Enemy_Controller,
		26 == La_Jinn_The_Mystical_Genie_Of_The_Lamp,
		27 == Sangan,
		28 == Megamorph,
		29 == Mirror_Force,
		30 == Shrink,
		31 == Torrential_Tribute,
		32 == Premature_Burial,
		33 == Deck_Devastation_Virus,
		34 == Axe_Of_Despair,
		35 == Return_From_The_Different_Dimension,
		36 == Draining_Shield,
		37 == Slate_Warrior,
		38 == Nightmares_Steelcage,
		39 == Lightning_Vortex,
		40 == Monster_Reincarnation,
		41 == Jinzo,
		42 == Dark_Ruler_Ha_Des
	};
// initializing deck

	Console::WriteLine (S"Initializing deck one......\n");

	int oldDeckDrawn = 0;

    Console::WriteLine (S"Deck one initialized.......\n");
// deck is then shuffled...........

	if ( oldDeckDrawn < 5 ){

		int oldCards = randomObject->Next(42);

		switch ( oldCards ){
			case Masked_Beast_Des_Gardius:
				Console::WriteLine (S"Masked_Beast_Des_Gardius.");
				oldDeckDrawn++;
				oldCards--;
				break;

			case Melchid_The_Four_Face_Beast:
				Console::WriteLine (S"Melchid_The_Four_Face_Beast.");
				oldDeckDrawn++;
				oldCards--;
				break;

			case Chaos_Necromancer:
				Console::WriteLine (S"Chaos_Necromancer.");
				oldDeckDrawn++;
				oldCards--;
				break;

			case Spirit_Reaper:
				Console::WriteLine (S"Spirit_Reaper.");
				oldDeckDrawn++;
				oldCards--;
				break;

			case Ancient_Lamp:
				Console::WriteLine (S"Ancient_Lamp.");
				oldDeckDrawn++;
				oldCards--;
				break;

			case Grand_Tiki_Elder:
				Console::WriteLine (S"Grand_Tiki_Elder.");
				oldDeckDrawn++;
				oldCards--;
				break;

			case Kuriboh:
				Console::WriteLine (S"Kuriboh.");
				oldDeckDrawn++;
				oldCards--;
				break;

			case Heavy_Storm:
				Console::WriteLine (S"Heavy_Storm.");
				oldDeckDrawn++;
				oldCards--;
				break;

			case The_Mask_Of_Remnants:
				Console::WriteLine (S"The_Mask_Of_Remnants.");
				oldDeckDrawn++;
				oldCards--;
				break;

			case Possessed_Dark_Soul:
				Console::WriteLine (S"Possessed_Dark_Soul.");
				oldDeckDrawn++;
				oldCards--;
				break;

			case Dark_Necrofear:
				Console::WriteLine (S"Dark_Necrofear.");
				oldDeckDrawn++;
				oldCards--;
				break;

			case Nobleman_Of_Crossout:
				Console::WriteLine (S"Nobleman_Of_Crossout.");
				oldDeckDrawn++;
				oldCards--;
				break;

			case Newdoria:
				Console::WriteLine (S"Newdoria.");
				oldDeckDrawn++;
				oldCards--;
				break;

			case Call_Of_The_Haunted:
				Console::WriteLine (S"Call_Of_The_Haunted.");
				oldDeckDrawn++;
				oldCards--;
				break;

			case Dark_Jeriod:
				Console::WriteLine (S"Dark_Jeriod.");
				oldDeckDrawn++;
				oldCards--;
				break;

			case Archfiend_Soldier:
				Console::WriteLine (S"Archfiend_Soldier.");
				oldDeckDrawn++;
				oldCards--;
				break;

			case Mystic_Tomato:
				Console::WriteLine (S"Mystic_Tomato.");
				oldDeckDrawn++;
				oldCards--;
				break;

			case Mystical_Space_Typoon:
				Console::WriteLine (S"Mystical_Space_Typoon.");
				oldDeckDrawn++;
				oldCards--;
				break;

			case Newdoria:
				Console::WriteLine (S"Newdoria.");
				oldDeckDrawn++;
				oldCards--;
				break;

			case Sakuretsu_Armor:
				Console::WriteLine (S"Sakuretsu_Armor.");
				oldDeckDrawn++;
				oldCards--;
				break;

			case Sakuretsu_Armor:
				Console::WriteLine (S"Sakuretsu_Armor.");
				oldDeckDrawn++;
				oldCards--;
				break;

			case Mystic_Tomato:
				Console::WriteLine (S"Mystic_Tomato.");
				oldDeckDrawn++;
				oldCards--;
				break;

			case Brain_Control:
				Console::WriteLine (S"Brain_Control.");
				oldDeckDrawn++;
				oldCards--;
				break;

			case Giant_Orc:
				Console::WriteLine (S"Giant_Orc.");
				oldDeckDrawn++;
				oldCards--;
				break;

			case Giant_Orc:
				Console::WriteLine (S"Giant_Orc.");
				oldDeckDrawn++;
				oldCards--;
				break;

			case Enemy_Controller:
				Console::WriteLine (S"Enemy_Controller.");
				oldDeckDrawn++;
				oldCards--;
				break;

			case La_Jinn_The_Mystical_Genie_Of_The_Lamp:
				Console::WriteLine (S"La_Jinn_The_Mystical_Genie_Of_The_Lamp.");
				oldDeckDrawn++;
				oldCards--;
				break;

			case Sangan:
				Console::WriteLine (S"Sangan.");
				oldDeckDrawn++;
				oldCards--;
				break;

			case Megamorph:
				Console::WriteLine (S"Megamorph.");
				oldDeckDrawn++;
				oldCards--;
				break;

			case Mirror_Force:
				Console::WriteLine (S"Mirror_Force.");
				oldDeckDrawn++;
				oldCards--;
				break;

			case Shrink:
				Console::WriteLine (S"Shrink.");
				oldDeckDrawn++;
				oldCards--;
				break;

			case Torrential_Tribute:
				Console::WriteLine (S"Torrential_Tribute.");
				oldDeckDrawn++;
				oldCards--;
				break;

			case Premature_Burial:
				Console::WriteLine (S"Premature_Burial.");
				oldDeckDrawn++;
				oldCards--;
				break;

			case Deck_Devation_Virus:
				Console::WriteLine (S"Deck_Devation_Virus.");
				oldDeckDrawn++;
				oldCards--;
				break;

			case Axe_Of_Despair:
				Console::WriteLine (S"Axe_Of_Despair.");
				oldDeckDrawn++;
				oldCards--;
				break;

			case Return_From_The_Different_Dimension:
				Console::WriteLine (S"Return_From_The_Different_Dimension.");
				oldDeckDrawn++;
				oldCards--;
				break;

			case Draining_Shield:
				Console::WriteLine (S"Draining_Shield.");
				oldDeckDrawn++;
				oldCards--;
				break;

			case Slate_Warrior:
				Console::WriteLine (S"Slate_Warrior.");
				oldDeckDrawn++;
				oldCards--;
				break;

			case Nightmares_Steelcage:
				Console::WriteLine (S"Nightmares_Steelcage.");
				oldDeckDrawn++;
				oldCards--;
				break;

			case Lightning_Vortex:
				Console::WriteLine (S"Lightning_Vortex.");
				oldDeckDrawn++;
				oldCards--;
				break;

			case Monster_Reincarnation:
				Console::WriteLine (S"Monster_Reincarnation.");
				oldDeckDrawn++;
				oldCards--;
				break;

			case Jinzo:
				Console::WriteLine (S"Jinzo.");
				oldDeckDrawn++;
				oldCards--;
				break;

			case Dark_Ruler_Ha_Des:
				Console::WriteLine (S"Dark_Ruler_Ha_Des.");
				oldDeckDrawn++;
				oldCards--;
				break;
			};//end if
};// end switch.....




Console::WriteLine (S"Initializing new deck.......");
	// new deck enumeration
				// scecond deck test show results

	enum  CardsInNewDeck
	{
      1 == Dark_Ruler_Ha_Des,
	  2 == Monster_Reborn,
	  3 == Lightning_Vortex,
	  4 == Solemn_Judgement,
	  5 == Enemy_Controller,
	  6 == Contract_With_The_Dark_Master,
	  7 == Brain_Control,
	  8 == Monster_Reincarnation,
	  9 == Goblin_Zombie,
	  10 == Berserk_Dragon,
	  11 == A_Deal_With_Dark_Ruler,
	  12 == Newdoria,
	  13 == Opticlops,
	  14 == Deck_Devastation_Virus,
	  15 == Brain_Jacker,
	  16 == Ectoplasmer,
	  17 == Double_Spell,
	  18 == Newdoria,
	  19 == Jowgen_The_Spiritualist,
	  20 == Return_From_The_Different_Dimension,
	  21 == Card_Destruction,
	  22 == Mystical_Space_Typhoon,
	  23 == Headless_Knight,
	  24 == Archfiend_Soldier,
	  25 == My_Body_As_A_Shield,
	  26 == Megamorph,
	  27 == Mask_Of_Darkness,
	  28 == Despair_From_The_Dark,
	  29 == Mystic_Plasma_Zone,
	  30 == Dark_Master_-_Zorc,
	  31 == Dark_Necrofear,
	  32 == Possessed_Dark_Soul,
	  33 == Necroface,
	  34 == Sangan,
	  35 == Mirror_Force,
	  36 == Gernia,
	  37 == Shrink,
	  38 == Zoma_The_Spirit,
	  39 == Zoma_The_Spirit,
	  40 == Sakuretsu_Armor,
	  41 == Heavy_Storm,
	  42 == Malice_Doll_Of_Demise

	};

//---------------------------------------------------------------------------------------------------------
	//deck is shuffled and cards are drawn...
//----------------------------------------------------------------------------------------------------------
	Console::WriteLine (S"New deck initialized!");


	int drawn = 0;

	if ( drawn < 5 ){

    int newCards = randomObject->Next(42);

	switch ( newCards ) {
		case Dark_Ruler_Ha_Des:
			Console::WriteLine (S"Dark_Ruler_Ha_Des.");
			drawn++;
			newCards--;
			break;

		case Monster_Reborn:
			Console::WriteLine (S"Monster_Reborn.");
			drawn++;
			newCards--;
			break;

		case Lightning_Vortex:
			Console::WriteLine (S"Lightning_Vortex.");
			drawn++;
			newCards--;
			break;

		case Solemn_Judgement:
			Console::WriteLine (S"Solemn_Judgement.");
			drawn++;
			newCards--;
			break;

		case Enemy_Controller:
			Console::WriteLine (S"Enemy_Controller.");
			drawn++;
			newCards--;
			break;

		case Contract_With_The_Dark_Master:
			Console::WriteLine (S"Contract_With_The_Dark_Master.");
			drawn++;
			newCards--;
			break;

		case Brain_Control:
			Console::WriteLine (S"Brain_Control.");
			drawn++;
			newCards--;
			break;

		case Monster_Reincarnation:
			Console::WriteLine (S"Monster_Reincarnation.");
			drawn++;
			newCards--;
			break;

		case Goblin_Zombie:
			Console::WriteLine (S"Goblin_Zombie.");
			drawn++;
			newCards--;
			break;

		case Berserk_Dragon:
			Console::WriteLine (S"Berserk_Dragon.");
			drawn++;
			newCards--;
			break;

		case A_Deal_With_Dark_Ruler:
			Console::WriteLine (S"A_Deal_With_Dark_Ruler.");
			drawn++;
			newCards--;
			break;

		case Newdoria:
			Console::WriteLine (S"Newdoria.");
			drawn++;
			newCards--;
			break;

		case Opticlops:
			Console::WriteLine (S"Opticlops.");
			drawn++;
			newCards--;
			break;

		case Deck_Devastation_Virus:
			Console::WriteLine (S"Deck_Devastation_Virus.");
			drawn++;
			newCards--;
			break;

		case Brain_Jacker:
			Console::WriteLine (S"Brain_Jacker.");
			drawn++;
			newCards--;
			break;

		case Ectoplasmer:
			Console::WriteLine (S"Ectoplasmer.");
			drawn++;
			newCards--;
			break;

		case Double_Spell:
			Console::WriteLine (S"Double_Spell.");
			drawn++;
			newCards--;
			break;

		case Newdoria:
			Console::WriteLine (S"Newdoria.");
			drawn++;
			newCards--;
			break;

		case Jowgen_The_Spiritualist:
			Console::WriteLine (S"Jowgen_The_Spiritualist.");
			drawn++;
			newCards--;
			break;

		case Return_From_The_Different_Dimension:
			Console::WriteLine (S"Return_From_The_Different_Dimension.");
			drawn++;
			newCards--;
			break;

		case Card_Destruction:
			Console::WriteLine (S"Card_Destruction.");
			drawn++;
			newCards--;
			break;

		case Mystical_Space_Typhoon:
			Console::WriteLine (S"Mystical_Space_Typhoon.");
			drawn++;
			newCards--;
			break;

		case Headless_Knight:
			Console::WriteLine (S"Headless_Knight.");
			drawn++;
			newCards--;
			break;

		case Archfiend_Solder:
			Console::WriteLine (S"Archfiend_Solder.");
			drawn++;
			newCards--;
			break;

		case My_Body_As_A_Shield:
			Console::WriteLine (S"My_Body_As_A_Shield.");
			drawn++;
			newCards--;
			break;

		case Megamorph:
			Console::WriteLine (S"Megamorph.");
			drawn++;
			newCards--;
			break;

		case Mask_Of_Darkness:
			Console::WriteLine (S"Mask_Of_Darkness.");
			drawn++;
			newCards--;
			break;

		case Despair_From_The_Dark:
			Console::WriteLine (S"Despair_From_The_Dark.");
			drawn++;
			newCards--;
			break;

		case Mystic_Plasma_Zone:
			Console::WriteLine (S"Mystic_Plasma_Zone.");
			drawn++;
			newCards--;
			break;

		case Dark_Master_-_Zorc:
			Console::WriteLine (S"Dark_Mastrer_-_Zorc.");
			drawn++;
			newCards--;
			break;

		case Dark_Necrofear:
			Console::WriteLine (S"Dark_Necrofear.");
			drawn++;
			newCards--;
			break;

		case Possessed_Dark_Soul:
			Console::WriteLine (S"Possessed_Dark_Soul.");
			drawn++;
			newCards--;
			break;

		case Necroface:
			Console::WriteLine (S"Necroface.");
			drawn++;
			newCards--;
			break;

		case Sangan:
			Console::WriteLine (S"Sangan.");
			drawn++;
			newCards--;
			break;

		case Mirror_Force:
			Console::WriteLine (S"Mirror_Force.");
			drawn++;
			newCards--;
			break;

		case Gernia:
			Console::WriteLine (S"Gernia.");
			drawn++;
			newCards--;
			break;

		case Shrink:
			Console::WriteLine (S"Shrink.");
			drawn++;
			newCards--;
			break;

		case Zoma_The_Spirit:
			Console::WriteLine (S"Zoma_The_Spirit.");
			drawn++;
			newCards--;
			break;

		case Zoma_The_Spirit:
			Console::WriteLine (S"Zoma_The_Spirit.");
			drawn++;
			newCards--;
			break;

		case Sakuretsu_Armor:
			Console::WriteLine (S"Sakuretsu_Armor.");
			drawn++;
			newCards--;
			break;

		case Malice_Doll_Of_Demise:
			Console::WriteLine (S"Doll_Of_Demise.");
			drawn++;
			newCards--;
			break;
	};// end switch.....
};//end if...........
	return 0;
}
