// File automatically generated

/*
 * Your License or Copyright can go here
 */

#pragma once

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winconsistent-missing-override"
#endif

#include "ITKImageProcessingBase.h"

#include "SIMPLib/Common/SIMPLibSetGetMacros.h"
#include "SIMPLib/SIMPLib.h"

// Auto includes
#include <SIMPLib/FilterParameters/BooleanFilterParameter.h>
#include <itkGradientMagnitudeImageFilter.h>

#include "ITKImageProcessing/ITKImageProcessingDLLExport.h"

/**
 * @brief The ITKGradientMagnitudeImage class. See [Filter documentation](@ref ITKGradientMagnitudeImage) for details.
 */
class ITKImageProcessing_EXPORT ITKGradientMagnitudeImage : public ITKImageProcessingBase
{
  Q_OBJECT
  PYB11_CREATE_BINDINGS(ITKGradientMagnitudeImage SUPERCLASS ITKImageProcessingBase)
  PYB11_PROPERTY(bool UseImageSpacing READ getUseImageSpacing WRITE setUseImageSpacing)

public:
  SIMPL_SHARED_POINTERS(ITKGradientMagnitudeImage)
  SIMPL_FILTER_NEW_MACRO(ITKGradientMagnitudeImage)
  SIMPL_TYPE_MACRO_SUPER_OVERRIDE(ITKGradientMagnitudeImage, AbstractFilter)

  ~ITKGradientMagnitudeImage() override;

  SIMPL_FILTER_PARAMETER(bool, UseImageSpacing)
  Q_PROPERTY(bool UseImageSpacing READ getUseImageSpacing WRITE setUseImageSpacing)


  /**
   * @brief newFilterInstance Reimplemented from @see AbstractFilter class
   */
  AbstractFilter::Pointer newFilterInstance(bool copyFilterParameters) const override;

  /**
   * @brief getHumanLabel Reimplemented from @see AbstractFilter class
   */
  const QString getHumanLabel() const override;

  /**
   * @brief getSubGroupName Reimplemented from @see AbstractFilter class
   */
  const QString getSubGroupName() const override;

  /**
   * @brief getUuid Return the unique identifier for this filter.
   * @return A QUuid object.
   */
  const QUuid getUuid() override;

  /**
   * @brief setupFilterParameters Reimplemented from @see AbstractFilter class
   */
  void setupFilterParameters() override;

  /**
   * @brief readFilterParameters Reimplemented from @see AbstractFilter class
   */
  void readFilterParameters(AbstractFilterParametersReader* reader, int index) override;

protected:
  ITKGradientMagnitudeImage();

  /**
   * @brief dataCheckInternal overloads dataCheckInternal in ITKImageBase and calls templated dataCheck
   */
  void virtual dataCheckInternal() override;

  /**
   * @brief dataCheck Checks for the appropriate parameter values and availability of arrays
   */
  template <typename InputImageType, typename OutputImageType, unsigned int Dimension> void dataCheck();

  /**
  * @brief filterInternal overloads filterInternal in ITKImageBase and calls templated filter
  */
  void virtual filterInternal() override;

  /**
  * @brief Applies the filter
  */
  template <typename InputImageType, typename OutputImageType, unsigned int Dimension> void filter();

private:
  ITKGradientMagnitudeImage(const ITKGradientMagnitudeImage&) = delete;    // Copy Constructor Not Implemented
  ITKGradientMagnitudeImage(ITKGradientMagnitudeImage&&) = delete;         // Move Constructor Not Implemented
  ITKGradientMagnitudeImage& operator=(const ITKGradientMagnitudeImage&) = delete; // Copy Assignment Not Implemented
  ITKGradientMagnitudeImage& operator=(ITKGradientMagnitudeImage&&) = delete;      // Move Assignment Not Implemented
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

