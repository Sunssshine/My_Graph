#############################################################################
# Makefile for building: elasticnodes
# Generated by qmake (3.1) (Qt 5.9.1)
# Project:  elasticnodes.pro
# Template: app
# Command: D:\Programs\qt\5.9.1\mingw53_32\bin\qmake.exe -o Makefile elasticnodes.pro -spec win32-g++
#############################################################################

MAKEFILE      = Makefile

first: release
install: release-install
uninstall: release-uninstall
QMAKE         = D:\Programs\qt\5.9.1\mingw53_32\bin\qmake.exe
DEL_FILE      = del
CHK_DIR_EXISTS= if not exist
MKDIR         = mkdir
COPY          = copy /y
COPY_FILE     = copy /y
COPY_DIR      = xcopy /s /q /y /i
INSTALL_FILE  = copy /y
INSTALL_PROGRAM = copy /y
INSTALL_DIR   = xcopy /s /q /y /i
QINSTALL      = D:\Programs\qt\5.9.1\mingw53_32\bin\qmake.exe -install qinstall
QINSTALL_PROGRAM = D:\Programs\qt\5.9.1\mingw53_32\bin\qmake.exe -install qinstall -exe
DEL_FILE      = del
SYMLINK       = $(QMAKE) -install ln -f -s
DEL_DIR       = rmdir
MOVE          = move
SUBTARGETS    =  \
		release \
		debug


release: FORCE
	$(MAKE) -f $(MAKEFILE).Release
release-make_first: FORCE
	$(MAKE) -f $(MAKEFILE).Release 
release-all: FORCE
	$(MAKE) -f $(MAKEFILE).Release all
release-clean: FORCE
	$(MAKE) -f $(MAKEFILE).Release clean
release-distclean: FORCE
	$(MAKE) -f $(MAKEFILE).Release distclean
release-install: FORCE
	$(MAKE) -f $(MAKEFILE).Release install
release-uninstall: FORCE
	$(MAKE) -f $(MAKEFILE).Release uninstall
debug: FORCE
	$(MAKE) -f $(MAKEFILE).Debug
debug-make_first: FORCE
	$(MAKE) -f $(MAKEFILE).Debug 
debug-all: FORCE
	$(MAKE) -f $(MAKEFILE).Debug all
debug-clean: FORCE
	$(MAKE) -f $(MAKEFILE).Debug clean
debug-distclean: FORCE
	$(MAKE) -f $(MAKEFILE).Debug distclean
debug-install: FORCE
	$(MAKE) -f $(MAKEFILE).Debug install
debug-uninstall: FORCE
	$(MAKE) -f $(MAKEFILE).Debug uninstall

Makefile: elasticnodes.pro ../../5.9.1/mingw53_32/mkspecs/win32-g++/qmake.conf ../../5.9.1/mingw53_32/mkspecs/features/spec_pre.prf \
		../../5.9.1/mingw53_32/mkspecs/qdevice.pri \
		../../5.9.1/mingw53_32/mkspecs/features/device_config.prf \
		../../5.9.1/mingw53_32/mkspecs/common/g++-base.conf \
		../../5.9.1/mingw53_32/mkspecs/common/angle.conf \
		../../5.9.1/mingw53_32/mkspecs/common/sanitize.conf \
		../../5.9.1/mingw53_32/mkspecs/common/gcc-base.conf \
		../../5.9.1/mingw53_32/mkspecs/qconfig.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_3danimation.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_3danimation_private.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_3dcore.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_3dcore_private.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_3dextras.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_3dextras_private.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_3dinput.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_3dinput_private.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_3dlogic.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_3dlogic_private.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_3dquick.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_3dquick_private.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_3dquickanimation.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_3dquickanimation_private.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_3dquickextras.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_3dquickextras_private.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_3dquickinput.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_3dquickinput_private.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_3dquickrender.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_3dquickrender_private.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_3dquickscene2d.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_3dquickscene2d_private.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_3drender.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_3drender_private.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_accessibility_support_private.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_axbase.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_axbase_private.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_axcontainer.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_axcontainer_private.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_axserver.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_axserver_private.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_bluetooth.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_bluetooth_private.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_bootstrap_private.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_charts.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_charts_private.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_concurrent.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_concurrent_private.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_core.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_core_private.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_datavisualization.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_datavisualization_private.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_dbus.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_dbus_private.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_designer.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_designer_private.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_designercomponents_private.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_devicediscovery_support_private.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_egl_support_private.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_eventdispatcher_support_private.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_fb_support_private.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_fontdatabase_support_private.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_gamepad.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_gamepad_private.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_gui.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_gui_private.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_help.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_help_private.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_location.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_location_private.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_multimedia.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_multimedia_private.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_multimediawidgets.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_multimediawidgets_private.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_network.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_network_private.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_networkauth.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_networkauth_private.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_nfc.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_nfc_private.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_opengl.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_opengl_private.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_openglextensions.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_openglextensions_private.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_packetprotocol_private.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_platformcompositor_support_private.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_positioning.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_positioning_private.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_printsupport.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_printsupport_private.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_purchasing.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_purchasing_private.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_qml.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_qml_private.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_qmldebug_private.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_qmldevtools_private.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_qmltest.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_qmltest_private.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_qtmultimediaquicktools_private.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_quick.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_quick_private.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_quickcontrols2.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_quickcontrols2_private.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_quickparticles_private.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_quicktemplates2_private.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_quickwidgets.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_quickwidgets_private.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_remoteobjects.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_remoteobjects_private.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_repparser.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_repparser_private.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_script.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_script_private.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_scripttools.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_scripttools_private.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_scxml.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_scxml_private.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_sensors.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_sensors_private.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_serialbus.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_serialbus_private.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_serialport.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_serialport_private.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_sql.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_sql_private.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_svg.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_svg_private.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_testlib.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_testlib_private.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_texttospeech.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_texttospeech_private.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_theme_support_private.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_uiplugin.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_uitools.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_uitools_private.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_webchannel.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_webchannel_private.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_websockets.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_websockets_private.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_widgets.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_widgets_private.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_winextras.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_winextras_private.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_xml.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_xml_private.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_xmlpatterns.pri \
		../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_xmlpatterns_private.pri \
		../../5.9.1/mingw53_32/mkspecs/features/qt_functions.prf \
		../../5.9.1/mingw53_32/mkspecs/features/qt_config.prf \
		../../5.9.1/mingw53_32/mkspecs/win32-g++/qmake.conf \
		../../5.9.1/mingw53_32/mkspecs/features/spec_post.prf \
		.qmake.stash \
		../../5.9.1/mingw53_32/mkspecs/features/exclusive_builds.prf \
		../../5.9.1/mingw53_32/mkspecs/features/toolchain.prf \
		../../5.9.1/mingw53_32/mkspecs/features/default_pre.prf \
		../../5.9.1/mingw53_32/mkspecs/features/win32/default_pre.prf \
		../../5.9.1/mingw53_32/mkspecs/features/resolve_config.prf \
		../../5.9.1/mingw53_32/mkspecs/features/exclusive_builds_post.prf \
		../../5.9.1/mingw53_32/mkspecs/features/default_post.prf \
		../../5.9.1/mingw53_32/mkspecs/features/precompile_header.prf \
		../../5.9.1/mingw53_32/mkspecs/features/warn_on.prf \
		../../5.9.1/mingw53_32/mkspecs/features/qt.prf \
		../../5.9.1/mingw53_32/mkspecs/features/resources.prf \
		../../5.9.1/mingw53_32/mkspecs/features/moc.prf \
		../../5.9.1/mingw53_32/mkspecs/features/win32/opengl.prf \
		../../5.9.1/mingw53_32/mkspecs/features/uic.prf \
		../../5.9.1/mingw53_32/mkspecs/features/qmake_use.prf \
		../../5.9.1/mingw53_32/mkspecs/features/file_copies.prf \
		../../5.9.1/mingw53_32/mkspecs/features/win32/windows.prf \
		../../5.9.1/mingw53_32/mkspecs/features/testcase_targets.prf \
		../../5.9.1/mingw53_32/mkspecs/features/exceptions.prf \
		../../5.9.1/mingw53_32/mkspecs/features/yacc.prf \
		../../5.9.1/mingw53_32/mkspecs/features/lex.prf \
		elasticnodes.pro \
		../../5.9.1/mingw53_32/lib/qtmain.prl \
		../../5.9.1/mingw53_32/lib/Qt5Widgets.prl \
		../../5.9.1/mingw53_32/lib/Qt5Gui.prl \
		../../5.9.1/mingw53_32/lib/Qt5Core.prl
	$(QMAKE) -o Makefile elasticnodes.pro -spec win32-g++
../../5.9.1/mingw53_32/mkspecs/features/spec_pre.prf:
../../5.9.1/mingw53_32/mkspecs/qdevice.pri:
../../5.9.1/mingw53_32/mkspecs/features/device_config.prf:
../../5.9.1/mingw53_32/mkspecs/common/g++-base.conf:
../../5.9.1/mingw53_32/mkspecs/common/angle.conf:
../../5.9.1/mingw53_32/mkspecs/common/sanitize.conf:
../../5.9.1/mingw53_32/mkspecs/common/gcc-base.conf:
../../5.9.1/mingw53_32/mkspecs/qconfig.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_3danimation.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_3danimation_private.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_3dcore.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_3dcore_private.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_3dextras.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_3dextras_private.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_3dinput.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_3dinput_private.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_3dlogic.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_3dlogic_private.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_3dquick.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_3dquick_private.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_3dquickanimation.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_3dquickanimation_private.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_3dquickextras.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_3dquickextras_private.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_3dquickinput.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_3dquickinput_private.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_3dquickrender.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_3dquickrender_private.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_3dquickscene2d.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_3dquickscene2d_private.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_3drender.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_3drender_private.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_accessibility_support_private.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_axbase.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_axbase_private.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_axcontainer.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_axcontainer_private.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_axserver.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_axserver_private.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_bluetooth.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_bluetooth_private.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_bootstrap_private.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_charts.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_charts_private.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_concurrent.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_concurrent_private.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_core.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_core_private.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_datavisualization.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_datavisualization_private.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_dbus.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_dbus_private.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_designer.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_designer_private.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_designercomponents_private.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_devicediscovery_support_private.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_egl_support_private.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_eventdispatcher_support_private.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_fb_support_private.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_fontdatabase_support_private.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_gamepad.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_gamepad_private.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_gui.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_gui_private.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_help.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_help_private.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_location.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_location_private.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_multimedia.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_multimedia_private.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_multimediawidgets.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_multimediawidgets_private.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_network.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_network_private.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_networkauth.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_networkauth_private.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_nfc.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_nfc_private.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_opengl.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_opengl_private.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_openglextensions.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_openglextensions_private.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_packetprotocol_private.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_platformcompositor_support_private.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_positioning.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_positioning_private.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_printsupport.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_printsupport_private.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_purchasing.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_purchasing_private.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_qml.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_qml_private.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_qmldebug_private.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_qmldevtools_private.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_qmltest.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_qmltest_private.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_qtmultimediaquicktools_private.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_quick.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_quick_private.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_quickcontrols2.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_quickcontrols2_private.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_quickparticles_private.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_quicktemplates2_private.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_quickwidgets.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_quickwidgets_private.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_remoteobjects.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_remoteobjects_private.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_repparser.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_repparser_private.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_script.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_script_private.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_scripttools.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_scripttools_private.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_scxml.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_scxml_private.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_sensors.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_sensors_private.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_serialbus.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_serialbus_private.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_serialport.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_serialport_private.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_sql.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_sql_private.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_svg.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_svg_private.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_testlib.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_testlib_private.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_texttospeech.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_texttospeech_private.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_theme_support_private.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_uiplugin.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_uitools.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_uitools_private.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_webchannel.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_webchannel_private.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_websockets.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_websockets_private.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_widgets.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_widgets_private.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_winextras.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_winextras_private.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_xml.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_xml_private.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_xmlpatterns.pri:
../../5.9.1/mingw53_32/mkspecs/modules/qt_lib_xmlpatterns_private.pri:
../../5.9.1/mingw53_32/mkspecs/features/qt_functions.prf:
../../5.9.1/mingw53_32/mkspecs/features/qt_config.prf:
../../5.9.1/mingw53_32/mkspecs/win32-g++/qmake.conf:
../../5.9.1/mingw53_32/mkspecs/features/spec_post.prf:
.qmake.stash:
../../5.9.1/mingw53_32/mkspecs/features/exclusive_builds.prf:
../../5.9.1/mingw53_32/mkspecs/features/toolchain.prf:
../../5.9.1/mingw53_32/mkspecs/features/default_pre.prf:
../../5.9.1/mingw53_32/mkspecs/features/win32/default_pre.prf:
../../5.9.1/mingw53_32/mkspecs/features/resolve_config.prf:
../../5.9.1/mingw53_32/mkspecs/features/exclusive_builds_post.prf:
../../5.9.1/mingw53_32/mkspecs/features/default_post.prf:
../../5.9.1/mingw53_32/mkspecs/features/precompile_header.prf:
../../5.9.1/mingw53_32/mkspecs/features/warn_on.prf:
../../5.9.1/mingw53_32/mkspecs/features/qt.prf:
../../5.9.1/mingw53_32/mkspecs/features/resources.prf:
../../5.9.1/mingw53_32/mkspecs/features/moc.prf:
../../5.9.1/mingw53_32/mkspecs/features/win32/opengl.prf:
../../5.9.1/mingw53_32/mkspecs/features/uic.prf:
../../5.9.1/mingw53_32/mkspecs/features/qmake_use.prf:
../../5.9.1/mingw53_32/mkspecs/features/file_copies.prf:
../../5.9.1/mingw53_32/mkspecs/features/win32/windows.prf:
../../5.9.1/mingw53_32/mkspecs/features/testcase_targets.prf:
../../5.9.1/mingw53_32/mkspecs/features/exceptions.prf:
../../5.9.1/mingw53_32/mkspecs/features/yacc.prf:
../../5.9.1/mingw53_32/mkspecs/features/lex.prf:
elasticnodes.pro:
../../5.9.1/mingw53_32/lib/qtmain.prl:
../../5.9.1/mingw53_32/lib/Qt5Widgets.prl:
../../5.9.1/mingw53_32/lib/Qt5Gui.prl:
../../5.9.1/mingw53_32/lib/Qt5Core.prl:
qmake: FORCE
	@$(QMAKE) -o Makefile elasticnodes.pro -spec win32-g++

qmake_all: FORCE

make_first: release-make_first debug-make_first  FORCE
all: release-all debug-all  FORCE
clean: release-clean debug-clean  FORCE
distclean: release-distclean debug-distclean  FORCE
	-$(DEL_FILE) Makefile
	-$(DEL_FILE) .qmake.stash

release-mocclean:
	$(MAKE) -f $(MAKEFILE).Release mocclean
debug-mocclean:
	$(MAKE) -f $(MAKEFILE).Debug mocclean
mocclean: release-mocclean debug-mocclean

release-mocables:
	$(MAKE) -f $(MAKEFILE).Release mocables
debug-mocables:
	$(MAKE) -f $(MAKEFILE).Debug mocables
mocables: release-mocables debug-mocables

check: first

benchmark: first
FORCE:

$(MAKEFILE).Release: Makefile
$(MAKEFILE).Debug: Makefile
