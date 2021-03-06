/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "PluginProcessor.h"




//==============================================================================
/**
*/
class IdraCleanVstAudioProcessorEditor  : public AudioProcessorEditor
{
public:
    IdraCleanVstAudioProcessorEditor (IdraCleanVstAudioProcessor&);
    ~IdraCleanVstAudioProcessorEditor();

    //==============================================================================
    void paint (Graphics&) override;
    void resized() override;




    

private:

    Slider mCutSlider;
    Image background;
    ImageComponent bgImage;
    
    ScopedPointer<AudioProcessorValueTreeState::SliderAttachment> sliderAttach;

    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    IdraCleanVstAudioProcessor& processor;
     


    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (IdraCleanVstAudioProcessorEditor)
};

