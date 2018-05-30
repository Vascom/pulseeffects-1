#ifndef PITCH_UI_HPP
#define PITCH_UI_HPP

#include <gtkmm/adjustment.h>
#include <gtkmm/grid.h>
#include <gtkmm/togglebutton.h>
#include "plugin_ui_base.hpp"

class PitchUi : public Gtk::Grid, public PluginUiBase {
   public:
    PitchUi(BaseObjectType* cobject,
            const Glib::RefPtr<Gtk::Builder>& refBuilder,
            const std::string& settings_name);
    ~PitchUi();

    static std::shared_ptr<PitchUi> create(std::string settings_name);

    void reset();

   private:
    Gtk::Adjustment *cents, *crispness, *semitones, *octaves;
    Gtk::ToggleButton *faster, *formant_preserving;
};

#endif