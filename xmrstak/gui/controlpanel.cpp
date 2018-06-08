#include "controlpanel.h"

ControlPanel::ControlPanel(QWidget* parent) : QWidget(parent) {
	setGeometry(0, 0, 500, 80);
	setStyleSheet("background-color:green;");
	//setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
	setMinimumSize(500, 100);

	// Left button panel
	_main_L_Frame = new QFrame(this);
	_main_L_Frame->setGeometry(0, 0, 200, 100);
	_main_L_Frame->setStyleSheet("background-color:rgba(0,0,0,0)");

	_sec_T_LFrame = new QFrame(_main_L_Frame);
	_sec_T_LFrame->setGeometry(0, 0, 200, 25);
	_sec_T_LFrame->setStyleSheet("background-color:rgba(0,0,0,0)");

	_sec_C_LFrame = new QFrame(_main_L_Frame);
	_sec_C_LFrame->setGeometry(0, 25, 200, 50);
	_sec_C_LFrame->setStyleSheet("background-color: gray");

	_console_button = new QPushButton(_sec_C_LFrame);
	_console_button->setAccessibleName("console_button");
	_console_button->setText("Console");
	_console_button->setToolTip("Show/hide console panel");
	_console_button->setToolTipDuration(2000);
	_console_button->setGeometry(144, 2, 46, 46);
	_console_button->setStyleSheet("[accessibleName=\"console_button\"] { background-color: white; \
								     border-style: solid; \
									 border-width:2px; \
									 border-radius:22px; \
									 border-color: red; \
									 max-width:42px; \
									 max-height:42px; \
									 min-width:42px; \
									 min-height:42px; }");

	_config_button = new QPushButton(_sec_C_LFrame);
	_config_button->setAccessibleName("configuration_button");
	_config_button->setText("Configuration");
	_config_button->setToolTip("Show/Hide configuration panel");
	_config_button->setToolTipDuration(2000);
	_config_button->setGeometry(104, 8, 34, 34);
	_config_button->setStyleSheet("[accessibleName=\"configuration_button\"] { background-color: white; \
								    border-style: solid; \
							        border-width:2px; \
							        border-radius:16px; \
							 	    border-color: red; \
								    max-width:30px; \
								    max-height:30px; \
								    min-width:30px; \
								    min-height:30px; }");

	_sec_B_LFrame = new QFrame(_main_L_Frame);
	_sec_B_LFrame->setGeometry(0,75, 200, 25);
	_sec_B_LFrame->setStyleSheet("background-color:rgba(0,0,0,0)");
	//---
	
	// Center button panel
	_main_C_Frame = new QFrame(this);
	_main_C_Frame->setGeometry(200, 0, 100, 100);
	_main_C_Frame->setStyleSheet("background-color:rgba(0,0,0,0)");

	_sec_T_CFrame = new QFrame(_main_C_Frame);
	_sec_T_CFrame->setGeometry(0, 0, 100, 25);
	_sec_T_CFrame->setStyleSheet("background-color:rgba(0,0,0,0)");

	_sec_C_CFrame = new QFrame(_main_C_Frame);
	_sec_C_CFrame->setGeometry(0, 25, 100, 50);
	_sec_C_CFrame->setStyleSheet("background-color: gray");

	_sec_B_CFrame = new QFrame(_main_C_Frame);
	_sec_B_CFrame->setGeometry(0, 75, 100, 25);
	_sec_B_CFrame->setStyleSheet("background-color:rgba(0,0,0,0)");

	_play_button = new QPushButton(_main_C_Frame);
	_play_button->setAccessibleName("play_button");
	_play_button->setText("Play");
	_play_button->setToolTip("Start/Stop mining");
	_play_button->setToolTipDuration(2000);
	_play_button->setGeometry(1, 1, 98, 98);
	_play_button->setStyleSheet("[accessibleName=\"play_button\"] {  background-color: white; \
								  border-style: solid; \
							      border-width:4px; \
							      border-radius:49px; \
							 	  border-color: red; \
								  max-width:90px; \
								  max-height:90px; \
								  min-width:90px; \
								  min-height:90px; }");
	//---

	// Right button panel
	_main_R_Frame = new QFrame(this);
	_main_R_Frame->setGeometry(300, 0, 200, 100);
	_main_R_Frame->setStyleSheet("background-color:rgba(0,0,0,0)");

	_sec_T_RFrame = new QFrame(_main_R_Frame);
	_sec_T_RFrame->setGeometry(0, 0, 200, 25);
	_sec_T_RFrame->setStyleSheet("background-color:rgba(0,0,0,0)");

	_sec_C_RFrame = new QFrame(_main_R_Frame);
	_sec_C_RFrame->setGeometry(0, 25, 200, 50);
	_sec_C_RFrame->setStyleSheet("background-color: gray");

	_stats_button = new QPushButton(_sec_C_RFrame);
	_stats_button->setAccessibleName("stats_button");
	_stats_button->setText("Stats");
	_stats_button->setToolTip("Show/Hide stats panel");
	_stats_button->setToolTipDuration(2000);
	_stats_button->setGeometry(10, 2, 46, 46);
	_stats_button->setStyleSheet("[accessibleName=\"stats_button\"] {  background-color: white; \
								   border-style: solid; \
							       border-width:2px; \
							       border-radius:22px; \
							 	   border-color: red; \
								   max-width:42px; \
								   max-height:42px; \
								   min-width:42px; \
								   min-height:42px; }");

	_result_button = new QPushButton(_sec_C_RFrame);
	_result_button->setAccessibleName("result_button");
	_result_button->setText("Results");
	_result_button->setToolTip("Show/Hide results panel");
	_result_button->setToolTipDuration(2000);
	_result_button->setGeometry(64, 8, 34, 34);
	_result_button->setStyleSheet("[accessibleName=\"result_button\"] {  background-color: white; \
								    border-style: solid; \
							        border-width:2px; \
							        border-radius:16px; \
							 	    border-color: red; \
								    max-width:30px; \
								    max-height:30px; \
								    min-width:30px; \
								    min-height:30px; }");

	_sec_B_RFrame = new QFrame(_main_R_Frame);
	_sec_B_RFrame->setGeometry(0, 75, 200, 25);
	_sec_B_RFrame->setStyleSheet("background-color:rgba(0,0,0,0)");
	//---

	// windows system buttons panel
	_win_L_CFrame = new QFrame(_main_C_Frame);
	//_sec_T_CFrame->stackUnder(_win_L_CFrame);
	_win_L_CFrame->stackUnder(_play_button);
	_win_L_CFrame->setGeometry(50, 5, 50, 20);
	_win_L_CFrame->setStyleSheet("background-color: white");

	_win_R_RFrame = new QFrame(_main_R_Frame);
	_win_R_RFrame->setAccessibleName("winr_frame");
	_win_R_RFrame->setGeometry(0, 5, 80, 20);
	_win_R_RFrame->setStyleSheet("[accessibleName=\"winr_frame\"] { background-color: white; \
								  border-top-right-radius:5px; }");

	_win_minimize_button = new QPushButton(_win_R_RFrame);
	_win_minimize_button->setAccessibleName("minimize_button");
	_win_minimize_button->setGeometry(20, 2, 16, 16);
	_win_minimize_button->setStyleSheet("[accessibleName=\"minimize_button\"] {  background-color: green; \
							        border-radius:8px; \
								    max-width:16px; \
								    max-height:16px; \
								    min-width:16px; \
								    min-height:16px; }");

	_win_maximize_button = new QPushButton(_win_R_RFrame);
	_win_maximize_button->setAccessibleName("maximize_button");
	_win_maximize_button->setGeometry(40, 2, 16, 16);
	_win_maximize_button->setStyleSheet("[accessibleName=\"maximize_button\"] {  background-color: yellow; \
							        border-radius:8px; \
								    max-width:16px; \
								    max-height:16px; \
								    min-width:16px; \
								    min-height:16px; }");

	_win_close_button = new QPushButton(_win_R_RFrame);
	_win_close_button->setAccessibleName("close_button");
	_win_close_button->setGeometry(60, 2, 16, 16);
	_win_close_button->setStyleSheet("[accessibleName=\"close_button\"] {  background-color: red; \
							        border-radius:8px; \
								    max-width:16px; \
								    max-height:16px; \
								    min-width:16px; \
								    min-height:16px; }");

	//---
}

ControlPanel::~ControlPanel() {
	// TODO: delete all pointer objects
}