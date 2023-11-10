#pragma once

#include <frc2/command/CommandPtr.h>
#include <frc2/command/button/CommandXboxController.h>
#include <ctre/phoenix/motorcontrol/can/WPI_VictorSPX.h>
#include <frc/drive/DifferentialDrive.h>
#include <frc/motorcontrol/MotorControllerGroup.h>


class RobotContainer {
 public:
  RobotContainer();
  void movimientoDelRobot();

  private:

    // !!!! Motores !!!!

    //definir id's de los motores

    const int idFR = 1;
    const int idFL = 2;
    const int idBR = 3;
    const int idBL = 4;

    //definir los motores 

    ctre:: phoenix::motorcontrol::can::WPI_VictorSPX frontRight {idFR};
    ctre:: phoenix::motorcontrol::can::WPI_VictorSPX frontLeft {idFL};
    ctre:: phoenix::motorcontrol::can::WPI_VictorSPX backRight {idBR};
    ctre:: phoenix::motorcontrol::can::WPI_VictorSPX backLeft {idBL};

    //definir el grupo de motores izquierdos
    frc::MotorControllerGroup leftMotors{frontLeft,backLeft};
    //definir el grupo de motores derechos
    frc::MotorControllerGroup rightMotors{frontRight,backRight};

    // objeto de control diferencial
    frc::DifferentialDrive m_drive{leftMotors, rightMotors};

    // !!!! Control !!!!

    // Control
	  frc::XboxController control{0};

};

