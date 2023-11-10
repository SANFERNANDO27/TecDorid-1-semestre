#include <frc2/command/CommandScheduler.h>
#include "Robot.h"
#include <frc/RobotBase.h>

// movimiento del robot
void RobotContainer::movimientoDelRobot() {

    // mover el robot segun los angulos del joystick
    m_drive.ArcadeDrive(-control.GetRightY(), -control.GetLeftX());
}

void Robot::RobotInit() {}

void Robot::RobotPeriodic() {
  frc2::CommandScheduler::GetInstance().Run();

  /* utilizamos m_container para llamar directamente a una variable o función dentro de la clase
  RobotContainer, esta misma se encuentra dentro de Robot.h */
  m_container.movimientoDelRobot();

}

void Robot::DisabledInit() {}

void Robot::DisabledPeriodic() {}

void Robot::AutonomousInit() {}

void Robot::AutonomousPeriodic() {}

void Robot::TeleopInit() {}

void Robot::TeleopPeriodic() {}

void Robot::TestPeriodic() {}

void Robot::SimulationInit() {}

void Robot::SimulationPeriodic() {}

#ifndef RUNNING_FRC_TESTS
int main() {
  return frc::StartRobot<Robot>();
}
#endif
