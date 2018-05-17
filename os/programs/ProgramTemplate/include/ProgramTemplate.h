//**********************************************************************************************************************************
// Filename: ProgramTemplate.h
// Date: 09.05.2018
// Author: Joao Pombas
// Company: LOKA SYSTEMS
// Version: 1.0
// Description:
//**********************************************************************************************************************************
#ifndef PROGRAM_TEMPLATE_H_
#define PROGRAM_TEMPLATE_H_


//**********************************************************************************************************************************
//                                                      Includes Section
//**********************************************************************************************************************************
#include "../../../components/ProgramLoader/include/Program.h"
#include "BOARD_LokaV2.h"													// Aggregates all driver dependencies

//**********************************************************************************************************************************
//                                                      Global Variables
//**********************************************************************************************************************************

//**********************************************************************************************************************************
//                                                      Define Section
//**********************************************************************************************************************************

//**********************************************************************************************************************************
//                                                     Templates Section
//**********************************************************************************************************************************
class ProgramTemplate : public Program{

	public:																	// MANDATORY METHODS to the normal program behavior
		void setup ();
		bool loop ();
        unsigned long getNextTime();
        void setNextTime(unsigned long time);
        void setConfig(unsigned char * receivedMessage);
        void getConfig(char * configBuffer);
        unsigned char getProgramID();
        char* getProgramTAG();
        bool isExecutable();

	private:
        static unsigned long nextWakeUpTime;								// MANDATORY variables to the normal program behavior
        static bool executable;
};

#endif
