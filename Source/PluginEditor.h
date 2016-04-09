/*
  ==============================================================================

    This file was auto-generated by the Introjucer!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#ifndef PLUGINEDITOR_H_INCLUDED
#define PLUGINEDITOR_H_INCLUDED

#include "../JuceLibraryCode/JuceHeader.h"
#include "PluginProcessor.h"


class JparamTestAudioProcessorEditor  : public AudioProcessorEditor
{
public:
  JparamTestAudioProcessorEditor (JparamTestAudioProcessor&);
  ~JparamTestAudioProcessorEditor();

  void paint (Graphics&) override;
  void resized() override;

private:
  JparamTestAudioProcessor& processor;

  JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (JparamTestAudioProcessorEditor)
};


#endif  // PLUGINEDITOR_H_INCLUDED