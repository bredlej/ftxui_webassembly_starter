#include <ftxui/dom/elements.hpp>  // for text, operator|, vbox, border, Element, Fit, hbox
#include <ftxui/screen/screen.hpp>  // for Full, Screen
#include <memory>                   // for allocator

#include "ftxui/dom/node.hpp"      // for Render
#include "ftxui/screen/color.hpp"  // for ftxui

int main(int argc, const char* argv[]) {
    using namespace ftxui;
    auto document =  //
            hbox({
                         vbox({
                                      text("FTXUI"),
                                      text(".    "),
                                      text(" .   "),
                                      text("  .  "),
                                      text("   . "),
                                      text("    ."),
                              }) | border,

                         vbox({
                                      color(Color::Green, text("WebAssembly")),
                              }) | border,

                         vbox({
                                      text("Starter"),
                              }) | border,
                 });
    auto screen = Screen::Create(Dimension::Full(), Dimension::Fit(document));
    Render(screen, document);
    screen.Print();
}

// Copyright 2020 Arthur Sonzogni. All rights reserved.
// Use of this source code is governed by the MIT license that can be found in
// the LICENSE file.