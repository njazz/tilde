#-------------------------------------------------
#
# Project created by QtCreator 2017-02-28T13:10:14
#
#-------------------------------------------------

QT       -= core gui

TARGET = pdlib
TEMPLATE = lib
CONFIG += staticlib

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS \
    APPLE \
    PD \
    HAVE_UNISTD_H


# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += pdlib.cpp \
    ceammc-lib/ceammc.cpp \
    ceammc-lib/ceammc_atom.cpp \
    ceammc-lib/ceammc_atomlist.cpp \
    ceammc-lib/ceammc_fn_list.cpp \
    ceammc-lib/ceammc_fn_vector.cpp \
    ceammc-lib/ceammc_format.cpp \
    ceammc-lib/ceammc_impl.cpp \
    ceammc-lib/ceammc_log.cpp \
    ceammc-lib/ceammc_message.cpp \
    ceammc-lib/ceammc_object.cpp \
    ceammc-lib/ceammc_property.cpp \
    ceammc-lib/ceammc_timeline.cpp \
    ceammc-lib/ceammc.c \
    src/d_arithmetic.c \
    src/d_array.c \
    src/d_ctl.c \
    src/d_dac.c \
    src/d_delay.c \
    src/d_fft.c \
#    src/d_fft_fftsg.c \
#    src/d_fft_fftw.c \
    src/d_filter.c \
    src/d_global.c \
    src/d_math.c \
    src/d_misc.c \
    src/d_osc.c \
    src/d_resample.c \
    src/d_soundfile.c \
    src/d_ugen.c \
    src/g_all_guis.c \
    src/g_array.c \
    src/g_bang.c \
    src/g_canvas.c \
    src/g_clone.c \
    src/g_draw.c \
    src/g_draw_tcl.c \
    src/g_editor.c \
    src/g_graph.c \
    src/g_guiconnect.c \
    src/g_hdial.c \
    src/g_hslider.c \
    src/g_io.c \
    src/g_mycanvas.c \
    src/g_numbox.c \
    src/g_readwrite.c \
    src/g_rtext.c \
    src/g_scalar.c \
    src/g_template.c \
    src/g_text.c \
    src/g_toggle.c \
    src/g_traversal.c \
    src/g_vdial.c \
    src/g_vslider.c \
    src/g_vumeter.c \
    src/m_atom.c \
    src/m_binbuf.c \
    src/m_class.c \
    src/m_conf.c \
    src/m_glob.c \
    src/m_memory.c \
    src/m_obj.c \
    src/m_pd.c \
    src/m_sched.c \
    src/s_audio.c \
#    src/s_audio_alsa.c \
#    src/s_audio_alsamm.c \
#    src/s_audio_audiounit.c \
    src/s_audio_dummy.c \
#    src/s_audio_esd.c \
#    src/s_audio_jack.c \
#    src/s_audio_mmio.c \
#    src/s_audio_oss.c \
#    src/s_audio_pa.c \
    src/s_audio_paring.c \
    src/s_entry.c \
    src/s_file.c \
    src/s_inter.c \
    src/s_loader.c \
    src/s_main.c \
    src/s_midi.c \
#    src/s_midi_alsa.c \
    src/s_midi_dummy.c \
#    src/s_midi_oss.c \
#    src/s_midi_pm.c \
    src/s_path.c \
    src/s_print.c \
    src/s_utf8.c \
    src/s_watchdog.c \
    src/u_pdreceive.c \
    src/u_pdsend.c \
    src/x_acoustics.c \
    src/x_arithmetic.c \
    src/x_array.c \
    src/x_connective.c \
    src/x_gui.c \
    src/x_interface.c \
    src/x_list.c \
    src/x_midi.c \
    src/x_misc.c \
    src/x_net.c \
    src/x_scalar.c \
    src/x_text.c \
    src/x_time.c \
    src/x_vexp.c \
    src/x_vexp_fun.c \
    src/x_vexp_if.c

HEADERS += pdlib.h \
    ceammc-lib/ceammc.h \
    ceammc-lib/ceammc.hpp \
    ceammc-lib/ceammc_atom.h \
    ceammc-lib/ceammc_atomlist.h \
    ceammc-lib/ceammc_autopreset.h \
    ceammc-lib/ceammc_bpf.h \
    ceammc-lib/ceammc_factory.h \
    ceammc-lib/ceammc_faust.h \
    ceammc-lib/ceammc_fn_list.h \
    ceammc-lib/ceammc_fn_vector.h \
    ceammc-lib/ceammc_format.h \
    ceammc-lib/ceammc_globaldata.h \
    ceammc-lib/ceammc_gui.h \
    ceammc-lib/ceammc_impl.h \
    ceammc-lib/ceammc_log.h \
    ceammc-lib/ceammc_message.h \
    ceammc-lib/ceammc_object.h \
    ceammc-lib/ceammc_property.h \
    ceammc-lib/ceammc_timeline.h \
    ceammc-lib/memrss.h \
    ceammc-lib/memsize.h \
    src/g_all_guis.h \
    src/g_canvas.h \
    src/g_draw.h \
    src/g_draw_tcl.h \
    src/g_style.h \
    src/m_imp.h \
    src/m_pd.h \
    src/s_audio_alsa.h \
    src/s_audio_paring.h \
    src/s_stuff.h \
    src/s_utf8.h \
    src/x_vexp.h

INCLUDEPATH += src/

unix {
    target.path = /usr/lib
    INSTALLS += target
}

#DISTFILES += \
#    src/pd.ico \
#    src/pd.rc \
#    ceammc-lib/CMakeLists.txt
