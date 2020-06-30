/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 4; tab-width: 4 -*- */
/*
 * GarminPlugin
 * Copyright (C) Andreas Diesner 2013 <garminplugin [AT] andreas.diesner [DOT] de>
 *
 * GarminPlugin is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * GarminPlugin is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef FITDEFINES_HPP_
#define FITDEFINES_HPP_

enum FIT_SPORT {
	SPORT_GENERIC=0,
	SPORT_RUNNING=1,
	SPORT_CYCLING=2,
	SPORT_TRANSITION=3, // Multisport
	SPORT_FITNESS_EQUIPMENT=4,
	SPORT_SWIMMING=5,
	SPORT_BASKETBALL=6,
	SPORT_SOCCER=7,
	SPORT_TENNIS=8,
	SPORT_AMERICAN_FOOTBALL=9,
	SPORT_TRAINING=10,
	SPORT_WALKING=11,
	SPORT_ALL=254, // All is for goals only to include all sports.
	SPORT_INVALID=0xFF,
};

#define FIT_ENUM_INVALID                                                        (0xFF)
#define FIT_POSITION_INVALID                                                    ((signed long)0x7FFFFFFF)
#define FIT_CYCLES_INVALID                                                      ((unsigned long)0xFFFFFFFF)
#define FIT_SPEED_INVALID                                                       ((float)0xFFFF/1000)
#define FIT_HEARTRATE_INVALID                                                   (0xFF)
#define FIT_CADENCE_INVALID                                                     (0xFF)
#define FIT_POWER_INVALID                                                       ((unsigned short)0xFFFF)
#define FIT_DATE_TIME_INVALID													((unsigned long)0xFFFFFFFF)
#define FIT_ALTITUDE_INVALID													((float)0xFFFFFFFF)
#define FIT_DISTANCE_INVALID													((float)0xFFFFFFFF)
#define FIT_CALORIES_INVALID 													((unsigned short)0xFFFF)
#define FIT_TOTALTIMERTIME_INVALID												((float)0xFFFFFFFF)

enum FIT_LAP_INTENSITY {
	INTENSITY_ACTIVE=0,
	INTENSITY_REST=1,
	INTENSITY_WARMUP=2,
	INTENSITY_COOLDOWN=3,
	INTENSITY_INVALID=0xFF,
};

enum FIT_LAP_TRIGGER {
	LAP_TRIGGER_MANUAL=0,
	LAP_TRIGGER_TIME=1,
	LAP_TRIGGER_DISTANCE=2,
	LAP_TRIGGER_POSITION_START=3,
	LAP_TRIGGER_POSITION_LAP=4,
	LAP_TRIGGER_POSITION_WAYPOINT=5,
	LAP_TRIGGER_POSITION_MARKED=6,
	LAP_TRIGGER_SESSION_END=7,
	LAP_TRIGGER_INVALID=0xFF,
};

enum FIT_FILEID_TYPE {
	FIT_FILE_DEVICE=1,
	FIT_FILE_SETTINGS=2,
	FIT_FILE_SPORT=3,
	FIT_FILE_ACTIVITY=4,
	FIT_FILE_WORKOUT=5,
	FIT_FILE_COURSE=6,
	FIT_FILE_SCHEDULES=7,
	FIT_FILE_WEIGHT=9,
	FIT_FILE_TOTALS=10,
	FIT_FILE_GOALS=11,
	FIT_FILE_BLOOD_PRESSURE=14,
	FIT_FILE_MONITORING=15,
	FIT_FILE_ACTIVITY_SUMMARY=20,
	FIT_FILE_MONITORING_DAILY=28,
	FIT_FILE_INVALID=0xFF,
};

enum FIT_FILEID_PRODUCT {
	FIT_GARMIN_PRODUCT_HRM1=1,
	FIT_GARMIN_PRODUCT_AXH01=2, // AXH01 HRM chipset
	FIT_GARMIN_PRODUCT_AXB01=3,
	FIT_GARMIN_PRODUCT_AXB02=4,
	FIT_GARMIN_PRODUCT_HRM2SS=5,
	FIT_GARMIN_PRODUCT_DSI_ALF02=6,
	FIT_GARMIN_PRODUCT_FR405=717, // Forerunner 405
	FIT_GARMIN_PRODUCT_FR50=782, // Forerunner 50
	FIT_GARMIN_PRODUCT_FR60=988, // Forerunner 60
	FIT_GARMIN_PRODUCT_DSI_ALF01=1011,
	FIT_GARMIN_PRODUCT_FR310XT=1018, // Forerunner 310
	FIT_GARMIN_PRODUCT_EDGE500=1036,
	FIT_GARMIN_PRODUCT_FR110=1124, // Forerunner 110
	FIT_GARMIN_PRODUCT_EDGE800=1169,
	FIT_GARMIN_PRODUCT_CHIRP=1253,
	FIT_GARMIN_PRODUCT_EDGE200=1325,
	FIT_GARMIN_PRODUCT_FR910XT=1328,
	FIT_GARMIN_PRODUCT_ALF04=1341,
	FIT_GARMIN_PRODUCT_FR610=1345,
	FIT_GARMIN_PRODUCT_FR70=1436,
	FIT_GARMIN_PRODUCT_FR310XT_4T=1446,
	FIT_GARMIN_PRODUCT_AMX=1461,
	FIT_GARMIN_PRODUCT_SDM4=10007, // SDM4 footpod
	FIT_GARMIN_PRODUCT_TRAINING_CENTER=20119,
	FIT_GARMIN_PRODUCT_CONNECT=65534, // Garmin Connect website
	FIT_GARMIN_PRODUCT_INVALID=0xFFFF
};

enum FIT_FILEID_MANUFACTURER {
	FIT_MANUFACTURER_GARMIN=1,
	FIT_MANUFACTURER_GARMIN_FR405_ANTFS=2, // Do not use.  Used by FR405 for ANTFS man id.
	FIT_MANUFACTURER_ZEPHYR=3,
	FIT_MANUFACTURER_DAYTON=4,
	FIT_MANUFACTURER_IDT=5,
	FIT_MANUFACTURER_SRM=6,
	FIT_MANUFACTURER_QUARQ=7,
	FIT_MANUFACTURER_IBIKE=8,
	FIT_MANUFACTURER_SARIS=9,
	FIT_MANUFACTURER_SPARK_HK=10,
	FIT_MANUFACTURER_TANITA=11,
	FIT_MANUFACTURER_ECHOWELL=12,
	FIT_MANUFACTURER_DYNASTREAM_OEM=13,
	FIT_MANUFACTURER_NAUTILUS=14,
	FIT_MANUFACTURER_DYNASTREAM=15,
	FIT_MANUFACTURER_TIMEX=16,
	FIT_MANUFACTURER_METRIGEAR=17,
	FIT_MANUFACTURER_XELIC=18,
	FIT_MANUFACTURER_BEURER=19,
	FIT_MANUFACTURER_CARDIOSPORT=20,
	FIT_MANUFACTURER_A_AND_D=21,
	FIT_MANUFACTURER_HMM=22,
	FIT_MANUFACTURER_SUUNTO=23,
	FIT_MANUFACTURER_THITA_ELEKTRONIK=24,
	FIT_MANUFACTURER_GPULSE=25,
	FIT_MANUFACTURER_CLEAN_MOBILE=26,
	FIT_MANUFACTURER_PEDAL_BRAIN=27,
	FIT_MANUFACTURER_PEAKSWARE=28,
	FIT_MANUFACTURER_SAXONAR=29,
	FIT_MANUFACTURER_LEMOND_FITNESS=30,
	FIT_MANUFACTURER_DEXCOM=31,
	FIT_MANUFACTURER_WAHOO_FITNESS=32,
	FIT_MANUFACTURER_OCTANE_FITNESS=33,
	FIT_MANUFACTURER_ARCHINOETICS=34,
	FIT_MANUFACTURER_THE_HURT_BOX=35,
	FIT_MANUFACTURER_CITIZEN_SYSTEMS=36,
	FIT_MANUFACTURER_MAGELLAN=37,
	FIT_MANUFACTURER_OSYNCE=38,
	FIT_MANUFACTURER_HOLUX=39,
	FIT_MANUFACTURER_CONCEPT2=40,
	FIT_MANUFACTURER_ONE_GIANT_LEAP=42,
	FIT_MANUFACTURER_ACE_SENSOR=43,
	FIT_MANUFACTURER_BRIM_BROTHERS=44,
	FIT_MANUFACTURER_XPLOVA=45,
	FIT_MANUFACTURER_PERCEPTION_DIGITAL=46,
	FIT_MANUFACTURER_BF1SYSTEMS=47,
	FIT_MANUFACTURER_PIONEER=48,
	FIT_MANUFACTURER_SPANTEC=49,
	FIT_MANUFACTURER_METALOGICS=50,
	FIT_MANUFACTURER_4IIIIS=51,
	FIT_MANUFACTURER_SEIKO_EPSON=52,
	FIT_MANUFACTURER_SEIKO_EPSON_OEM=53,
	FIT_MANUFACTURER_IFOR_POWELL=54,
	FIT_MANUFACTURER_MAXWELL_GUIDER=55,
	FIT_MANUFACTURER_STAR_TRAC=56,
	FIT_MANUFACTURER_BREAKAWAY=57,
	FIT_MANUFACTURER_ALATECH_TECHNOLOGY_LTD=58,
	FIT_MANUFACTURER_MIO_TECHNOLOGY_EUROPE=59,
	FIT_MANUFACTURER_ROTOR=60,
	FIT_MANUFACTURER_GEONAUTE=61,
	FIT_MANUFACTURER_ID_BIKE=62,
	FIT_MANUFACTURER_SPECIALIZED=63,
	FIT_MANUFACTURER_WTEK=64,
	FIT_MANUFACTURER_PHYSICAL_ENTERPRISES=65,
	FIT_MANUFACTURER_NORTH_POLE_ENGINEERING=66,
	FIT_MANUFACTURER_BKOOL=67,
	FIT_MANUFACTURER_CATEYE=68,
	FIT_MANUFACTURER_STAGES_CYCLING=69,
	FIT_MANUFACTURER_SIGMASPORT=70,
	FIT_MANUFACTURER_DEVELOPMENT=255,
	FIT_MANUFACTURER_ACTIGRAPHCORP=5759,
	FIT_MANUFACTURER_INVALID=0xFFFF
};



#endif /* FITDEFINES_HPP_ */
