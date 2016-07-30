
class CfgVehicles {
    class Man;
    class CAManBase: Man {
        // Delete base game sounds.
        // These are never played for ai and remote players.
        #ifdef DISABLE_VANILLA_SCREAMS
        class SoundHitScream {
            person1[] = {{"Male08ENG"},{{EMPTY_SOUND,1}},{{EMPTY_SOUND,1}},{{EMPTY_SOUND,1}}};
            person2[] = {{"Male06ENG"},{{EMPTY_SOUND,1}},{{EMPTY_SOUND,1}},{{EMPTY_SOUND,1}}};
            person3[] = {{"Male09ENG"},{{EMPTY_SOUND,1}},{{EMPTY_SOUND,1}},{{EMPTY_SOUND,1}}};
            person4[] = {{"Male07ENG"},{{EMPTY_SOUND,1}},{{EMPTY_SOUND,1}},{{EMPTY_SOUND,1}}};
            person5[] = {{"Male03GRE"},{{EMPTY_SOUND,1}},{{EMPTY_SOUND,1}},{{EMPTY_SOUND,1}}};
            person6[] = {{"Male02ENGB"},{{EMPTY_SOUND,1}},{{EMPTY_SOUND,1}},{{EMPTY_SOUND,1}}};
            person7[] = {{"Male01ENGB"},{{EMPTY_SOUND,1}},{{EMPTY_SOUND,1}},{{EMPTY_SOUND,1}}};
            person8[] = {{"Male01GRE"},{{EMPTY_SOUND,1}},{{EMPTY_SOUND,1}},{{EMPTY_SOUND,1}}};
            person9[] = {{"Male02ENG"},{{EMPTY_SOUND,1}},{{EMPTY_SOUND,1}},{{EMPTY_SOUND,1}}};
            person10[] = {{"Male02GRE"},{{EMPTY_SOUND,1}},{{EMPTY_SOUND,1}},{{EMPTY_SOUND,1}}};
            person11[] = {{"Male03ENG"},{{EMPTY_SOUND,1}},{{EMPTY_SOUND,1}},{{EMPTY_SOUND,1}}};
            person12[] = {{"Male03ENGB"},{{EMPTY_SOUND,1}},{{EMPTY_SOUND,1}},{{EMPTY_SOUND,1}}};
            person13[] = {{"Male04ENG"},{{EMPTY_SOUND,1}},{{EMPTY_SOUND,1}},{{EMPTY_SOUND,1}}};
            person14[] = {{"Male05GRE"},{{EMPTY_SOUND,1}},{{EMPTY_SOUND,1}},{{EMPTY_SOUND,1}}};
            person15[] = {{"Male06GRE"},{{EMPTY_SOUND,1}},{{EMPTY_SOUND,1}},{{EMPTY_SOUND,1}}};
            person16[] = {{"Male04GRE"},{{EMPTY_SOUND,1}},{{EMPTY_SOUND,1}},{{EMPTY_SOUND,1}}};
            person17[] = {{"Male05ENGB"},{{EMPTY_SOUND,1}},{{EMPTY_SOUND,1}},{{EMPTY_SOUND,1}}};
            person18[] = {{"Male05ENG"},{{EMPTY_SOUND,1}},{{EMPTY_SOUND,1}},{{EMPTY_SOUND,1}}};
        };
        #endif
        #ifdef DISABLE_VANILLA_MOANS
        class SoundInjured {
            person_moan1[] = {{"Male08ENG"},{{EMPTY_SOUND,1}},{{EMPTY_SOUND,1}},{{EMPTY_SOUND,1}}};
            person_moan2[] = {{"Male06ENG"},{{EMPTY_SOUND,1}},{{EMPTY_SOUND,1}},{{EMPTY_SOUND,1}}};
            person_moan3[] = {{"Male09ENG"},{{EMPTY_SOUND,1}},{{EMPTY_SOUND,1}},{{EMPTY_SOUND,1}}};
            person_moan4[] = {{"Male07ENG"},{{EMPTY_SOUND,1}},{{EMPTY_SOUND,1}},{{EMPTY_SOUND,1}}};
            person_moan5[] = {{"Male03GRE"},{{EMPTY_SOUND,1}},{{EMPTY_SOUND,1}},{{EMPTY_SOUND,1}}};
            person_moan6[] = {{"Male02ENGB"},{{EMPTY_SOUND,1}},{{EMPTY_SOUND,1}},{{EMPTY_SOUND,1}}};
            person_moan7[] = {{"Male01ENGB"},{{EMPTY_SOUND,1}},{{EMPTY_SOUND,1}},{{EMPTY_SOUND,1}}};
            person_moan8[] = {{"Male01GRE"},{{EMPTY_SOUND,1}},{{EMPTY_SOUND,1}},{{EMPTY_SOUND,1}}};
            person_moan9[] = {{"Male02ENG"},{{EMPTY_SOUND,1}},{{EMPTY_SOUND,1}},{{EMPTY_SOUND,1}}};
            person_moan10[] = {{"Male02GRE"},{{EMPTY_SOUND,1}},{{EMPTY_SOUND,1}},{{EMPTY_SOUND,1}}};
            person_moan11[] = {{"Male03ENG"},{{EMPTY_SOUND,1}},{{EMPTY_SOUND,1}},{{EMPTY_SOUND,1}}};
            person_moan12[] = {{"Male03ENGB"},{{EMPTY_SOUND,1}},{{EMPTY_SOUND,1}},{{EMPTY_SOUND,1}}};
            person_moan13[] = {{"Male04ENG"},{{EMPTY_SOUND,1}},{{EMPTY_SOUND,1}},{{EMPTY_SOUND,1}}};
            person_moan14[] = {{"Male05GRE"},{{EMPTY_SOUND,1}},{{EMPTY_SOUND,1}},{{EMPTY_SOUND,1}}};
            person_moan15[] = {{"Male06GRE"},{{EMPTY_SOUND,1}},{{EMPTY_SOUND,1}},{{EMPTY_SOUND,1}}};
            person_moan16[] = {{"Male04GRE"},{{EMPTY_SOUND,1}},{{EMPTY_SOUND,1}},{{EMPTY_SOUND,1}}};
            person_moan17[] = {{"Male05ENGB"},{{EMPTY_SOUND,1}},{{EMPTY_SOUND,1}},{{EMPTY_SOUND,1}}};
            person_moan18[] = {{"Male05ENG"},{{EMPTY_SOUND,1}},{{EMPTY_SOUND,1}},{{EMPTY_SOUND,1}}};
        };
        #endif
        // Can't overwrite these with empty sounds -> CTD
        // Assume lock up if sound duration is 0 seconds.
        // We mute the sounds instead
        #ifdef DISABLE_VANILLA_HEARTBEAT
        class PulsationSound {
            sample0[] = {{{{"A3\sounds_f\characters\human-sfx\other\heart_4_1",0,0.7},1}}};
            sample1[] = {{{{"A3\sounds_f\characters\human-sfx\other\heart_4_3",0,0.7},1}}};
            sample2[] = {{{{"A3\sounds_f\characters\human-sfx\other\heart_4_4",0,0.7},1}}};
            sample3[] = {{{{"A3\sounds_f\characters\human-sfx\other\heart_4_5",0,0.7},1}}};
        };
        #endif
        // General
        class HitPoints {
            ADD_ACE_HITPOINTS(1,1);
        };
    };

    // BluFor
    class B_Soldier_base_F;
    class B_Soldier_04_f: B_Soldier_base_F {
        class HitPoints {
            ADD_ACE_HITPOINTS(2,2);
        };
    };
    class B_Soldier_05_f: B_Soldier_base_F {
        class HitPoints {
            ADD_ACE_HITPOINTS(2,2);
        };
    };

    // Indep
    class I_Soldier_base_F;
    class I_Soldier_03_F: I_Soldier_base_F {
        class HitPoints {
            ADD_ACE_HITPOINTS(2,2);
        };
    };
    class I_Soldier_04_F: I_Soldier_base_F {
        class HitPoints {
            ADD_ACE_HITPOINTS(2,2);
        };
    };

    // OpFor
    class SoldierEB;
    class O_Soldier_base_F: SoldierEB {
        class HitPoints {
            ADD_ACE_HITPOINTS(2,2);
        };
    };
    class O_Soldier_02_F: O_Soldier_base_F {
        class HitPoints {
            ADD_ACE_HITPOINTS(2,2);
        };
    };
    class O_officer_F: O_Soldier_base_F {
        class HitPoints {
            ADD_ACE_HITPOINTS(1,2);
        };
    };
    class O_Soldier_diver_base_F: O_Soldier_base_F {
        class HitPoints {
            ADD_ACE_HITPOINTS(1,1);
        };
    };

    // Virtual Reality
    class B_Soldier_VR_F: B_Soldier_base_F {
        class HitPoints {
            ADD_ACE_HITPOINTS(1,1);
        };
    };
    class O_Soldier_VR_F: O_Soldier_base_F {
        class HitPoints {
            ADD_ACE_HITPOINTS(1,1);
        };
    };
    class I_Soldier_VR_F: I_Soldier_base_F {
        class HitPoints {
            ADD_ACE_HITPOINTS(1,1);
        };
    };

    // Civilians
    class C_man_1;
    class C_Soldier_VR_F: C_man_1 {
        class HitPoints {
            ADD_ACE_HITPOINTS(1,1);
        };
    };
    class O_Protagonist_VR_F: O_Soldier_base_F {
        class HitPoints {
            ADD_ACE_HITPOINTS(1,1);
        };
    };

    // APEX
    class O_V_Soldier_Viper_F: O_Soldier_base_F {
        class HitPoints {
            ADD_ACE_HITPOINTS(3,3);
        };
    };
    class O_V_Soldier_base_F: O_Soldier_base_F {
        class HitPoints {
            ADD_ACE_HITPOINTS(3,3);
        };
    };
};
