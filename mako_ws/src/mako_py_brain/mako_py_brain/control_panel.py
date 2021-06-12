import rclpy
import sys
import os
import threading
import time
from rclpy.node import Node
from functools import partial
from PyQt5 import QtCore, QtGui, QtWidgets
from PyQt5.QtCore import *
from mako_nolang_interfaces.msg import MakoServerMessage

# This is a nightmare.
class ControlPanelNode(Node, QObject):
    finished = pyqtSignal()
    progress = pyqtSignal(str)

    def __init__(self):
        rclpy.init(args=None)
        QObject.__init__(self)
        super().__init__("ctrl_panel_node")
        self.get_logger().info("Control Panel Node Started")
        self.serverMsgPublisher = self.create_publisher(
            MakoServerMessage, "server_msg", 10)
        self.moduleMsgSubscriber = self.create_subscription(
            MakoServerMessage, "module_msg", self.onModuleMessage, 10)

    def onModuleMessage(self, msg):
        self.get_logger().info(str(msg))
        if(msg.message == "Request Received"):
            try:
                name = ""
                name += msg.module_name[0]
                for i, c in enumerate(msg.module_name):
                    if(i == 0):
                        continue
                    if(str.isupper(c)):
                        name += " "
                    name += c
                self.progress.emit(name)
            except Exception as e:
                self.get_logger().error(str(e))

    def run(self):
        rclpy.spin(self)
        rclpy.shutdown()
        self.finished.emit()


class ControlPanelGUI(Node):
    def __init__(self):
        self.moduleOn = False
        self.app = QtWidgets.QApplication(sys.argv)
        self.MainWindow = QtWidgets.QMainWindow()
        self.setupUi()
        self.MainWindow.show()
        self.Run_ROS_Thread()

    def Run_ROS_Thread(self):
        self.thread = QThread()
        self.ctrl_panel_node = ControlPanelNode()
        self.ctrl_panel_node.moveToThread(self.thread)
        self.thread.started.connect(self.ctrl_panel_node.run)
        self.ctrl_panel_node.finished.connect(self.thread.quit)
        self.ctrl_panel_node.finished.connect(self.ctrl_panel_node.deleteLater)
        self.thread.finished.connect(self.thread.deleteLater)
        self.ctrl_panel_node.progress.connect(self.onModuleMessage)
        self.thread.start()

    def setupUi(self):
        self.MainWindow.setObjectName("MainWindow")
        self.MainWindow.resize(1280, 800)
        self.MainWindow.setMinimumSize(QtCore.QSize(1280, 800))
        self.MainWindow.setMaximumSize(QtCore.QSize(1280, 800))
        self.MainWindow.setStyleSheet(
            "background-color: qlineargradient(spread:pad, x1:0.130095, y1:0.131, x2:1, y2:1, stop:0.253731 rgba(0, 171, 255, 255), stop:1 rgba(255, 255, 255, 255));")
        self.MainWindow.setTabShape(QtWidgets.QTabWidget.Rounded)
        self.centralwidget = QtWidgets.QWidget(self.MainWindow)
        self.centralwidget.setObjectName("centralwidget")
        self.grpBox = QtWidgets.QGroupBox(self.centralwidget)
        self.grpBox.setGeometry(QtCore.QRect(29, 19, 1231, 771))
        self.grpBox.setMinimumSize(QtCore.QSize(1100, 700))
        self.grpBox.setMaximumSize(QtCore.QSize(1300, 900))
        self.grpBox.setStyleSheet("color: rgba(0,36,61,255);")
        self.grpBox.setObjectName("grpBox")

        self.btnEmotion = QtWidgets.QPushButton(self.grpBox)
        self.btnEmotion.setGeometry(QtCore.QRect(30, 30, 291, 141))
        self.btnEmotion.setStyleSheet("background-color: \'white\';\n"
                                      "font-size:20px;")
        self.btnEmotion.setObjectName("btnEmotion")

        self.btnFace = QtWidgets.QPushButton(self.grpBox)
        self.btnFace.setGeometry(QtCore.QRect(480, 30, 291, 141))
        self.btnFace.setStyleSheet("background-color: \'white\';\n"
                                   "font-size:20px;")
        self.btnFace.setObjectName("btnFace")

        self.btnSpatial = QtWidgets.QPushButton(self.grpBox)
        self.btnSpatial.setGeometry(QtCore.QRect(920, 30, 291, 141))
        self.btnSpatial.setStyleSheet("background-color: \'white\';\n"
                                      "font-size:20px;")
        self.btnSpatial.setObjectName("btnSpatial")

        self.btnRead = QtWidgets.QPushButton(self.grpBox)
        self.btnRead.setGeometry(QtCore.QRect(30, 210, 291, 141))
        self.btnRead.setStyleSheet("background-color: \'white\';\n"
                                   "font-size:20px;")
        self.btnRead.setObjectName("btnRead")

        self.btnRobotCntrl = QtWidgets.QPushButton(self.grpBox)
        self.btnRobotCntrl.setGeometry(QtCore.QRect(480, 210, 291, 141))
        self.btnRobotCntrl.setStyleSheet("background-color: \'white\';\n"
                                         "font-size:20px;")
        self.btnRobotCntrl.setObjectName("btnRobotCntrl")

        self.btnRobotQuiz = QtWidgets.QPushButton(self.grpBox)
        self.btnRobotQuiz.setGeometry(QtCore.QRect(920, 210, 291, 141))
        self.btnRobotQuiz.setStyleSheet("background-color: \'white\';\n"
                                        "font-size:20px;")
        self.btnRobotQuiz.setObjectName("btnRobotQuiz")

        self.btnStop = QtWidgets.QPushButton(self.grpBox)
        self.btnStop.setGeometry(QtCore.QRect(920, 390, 291, 141))
        self.btnStop.setStyleSheet("background-color: rgb(150, 0, 0);\n"
                                   "font-size:20px;")
        self.btnStop.setObjectName("btnStop")

        self.lblStatus = QtWidgets.QLabel(self.grpBox)
        self.lblStatus.setGeometry(QtCore.QRect(480, 460, 111, 17))
        self.lblStatus.setStyleSheet("background-color: rgba(255, 255, 255, 0);\n"
                                     "color: rgba(0,36,61,255);")
        self.lblStatus.setObjectName("lblStatus")
        self.lblCurrentStatus = QtWidgets.QLabel(self.grpBox)
        self.lblCurrentStatus.setGeometry(QtCore.QRect(590, 460, 321, 17))
        self.lblCurrentStatus.setStyleSheet("background-color: rgba(255, 255, 255, 0);\n"
                                            "color: rgba(0,36,61,255);")
        self.lblCurrentStatus.setObjectName("lblCurrentStatus")
        self.MainWindow.setCentralWidget(self.centralwidget)

        self.retranslateUi()
        QtCore.QMetaObject.connectSlotsByName(self.MainWindow)
        self.initUI()

    def retranslateUi(self):
        _translate = QtCore.QCoreApplication.translate
        self.MainWindow.setWindowTitle(_translate(
            "MainWindow", "MAKO Modules Control"))
        self.grpBox.setTitle(_translate(
            "MainWindow", "MAKO\'s Educational Modules Control"))
        self.btnEmotion.setText(_translate(
            "MainWindow", "Emotion Recognition"))
        self.btnFace.setText(_translate("MainWindow", "Faces Recognition"))
        self.btnSpatial.setText(_translate(
            "MainWindow", "Spatial Prepositions"))
        self.btnRead.setText(_translate("MainWindow", "Social Stories"))
        self.btnRobotCntrl.setText(_translate(
            "MainWindow", "MAKO Movement Game"))
        self.btnRobotQuiz.setText(_translate("MainWindow", "MAKO Turn Taking \n"
                                             "Emotion Quiz"))
        self.btnStop.setText(_translate("MainWindow", "Stop Current Module"))
        self.lblStatus.setText(_translate("MainWindow", "Current Status:"))
        self.lblCurrentStatus.setText(_translate(
            "MainWindow", "No Module Currently Running"))

    def initUI(self):
        self.btnStop.clicked.connect(self.btnStopClick)
        self.btnEmotion.clicked.connect(self.btnEmotionClick)
        self.btnFace.clicked.connect(self.btnFaceClick)
        self.btnSpatial.clicked.connect(self.btnSpatialClick)
        self.btnRead.clicked.connect(self.btnReadClick)

    def onModuleMessage(self, msg):
        time.sleep(0.5)
        self.lblCurrentStatus.setText(str(msg) + " is running")
        self.lblCurrentStatus.adjustSize()

    def btnStopClick(self):
        if(not self.moduleOn):
            return
        self.moduleOn = False
        self.ctrl_panel_node.get_logger().info("Sending Stop Signal to Server..")
        msg = MakoServerMessage()
        msg.type = "module_request"
        msg.message = "WaitMenu"
        self.ctrl_panel_node.serverMsgPublisher.publish(msg)
        self.lblCurrentStatus.setText("No Module Currently Running")
        self.lblCurrentStatus.adjustSize()

    def btnEmotionClick(self):
        if(self.moduleOn):
            return
        self.moduleOn = True
        self.ctrl_panel_node.get_logger().info(
            "Sending Emotion Module Signal to Server..")
        msg = MakoServerMessage()
        msg.type = "module_request"
        msg.message = "EmotionModule"
        self.ctrl_panel_node.serverMsgPublisher.publish(msg)
        self.lblCurrentStatus.setText("Sending signal to MAKO")
        self.lblCurrentStatus.adjustSize()
    
    def btnFaceClick(self):
        if(self.moduleOn):
            return
        self.moduleOn = True
        self.ctrl_panel_node.get_logger().info(
            "Sending Faces Recognition Module Signal to Server..")
        msg = MakoServerMessage()
        msg.type = "module_request"
        msg.message = "FacesModule"
        self.ctrl_panel_node.serverMsgPublisher.publish(msg)
        self.lblCurrentStatus.setText("Sending signal to MAKO")
        self.lblCurrentStatus.adjustSize()

    def btnSpatialClick(self):
        if(self.moduleOn):
            return
        self.moduleOn = True
        self.ctrl_panel_node.get_logger().info(
            "Sending Emotion Module Signal to Server..")
        msg = MakoServerMessage()
        msg.type = "module_request"
        msg.message = "SpatialModule"
        self.ctrl_panel_node.serverMsgPublisher.publish(msg)
        self.lblCurrentStatus.setText("Sending signal to MAKO")
        self.lblCurrentStatus.adjustSize()

    def btnReadClick(self):
        if(self.moduleOn):
            return
        self.moduleOn = True
        self.ctrl_panel_node.get_logger().info(
            "Sending Emotion Module Signal to Server..")
        msg = MakoServerMessage()
        msg.type = "module_request"
        msg.message = "StoriesModule"
        self.ctrl_panel_node.serverMsgPublisher.publish(msg)
        self.lblCurrentStatus.setText("Sending signal to MAKO")
        self.lblCurrentStatus.adjustSize()


def main(args=None):
    node = ControlPanelGUI()
    #ros_thread = threading.Thread(target=partial(ros_spin, node))
    # rclpy.spin(node)
    # rclpy.shutdown()
    sys.exit(node.app.exec_())


if __name__ == "__main__":
    main()
