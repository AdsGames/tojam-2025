#pragma once

#include <asw/asw.h>

#include "state.h"

class Intro : public asw::scene::Scene<ProgramState> {
 public:
  using asw::scene::Scene<ProgramState>::Scene;

  void init() override;
  void update(float dt) override;
  void draw() override;

 private:
  asw::Texture intro_1;
  asw::Font font;
  asw::Font font_small;
  float timer{0};
  asw::Music music;
};
