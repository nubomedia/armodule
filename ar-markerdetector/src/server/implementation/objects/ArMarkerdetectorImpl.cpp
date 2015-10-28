/* Autogenerated with kurento-module-creator */

#include <gst/gst.h>
#include "MediaPipeline.hpp"
#include "ArThing.hpp"
#include <ArMarkerdetectorImplFactory.hpp>
#include "ArMarkerdetectorImpl.hpp"
#include <jsonrpc/JsonSerializer.hpp>
#include <KurentoException.hpp>
#include "MediaPipelineImpl.hpp"

#define GST_CAT_DEFAULT kurento_ar_markerdetector_impl
GST_DEBUG_CATEGORY_STATIC (GST_CAT_DEFAULT);
#define GST_DEFAULT_NAME "KurentoArMarkerdetectorImpl"

namespace kurento
{
namespace module
{
namespace armarkerdetector
{

ArMarkerdetectorImpl::ArMarkerdetectorImpl (const boost::property_tree::ptree &config, std::shared_ptr<MediaPipeline> mediaPipeline) : OpenCVFilterImpl (config, std::dynamic_pointer_cast<MediaPipelineImpl> (mediaPipeline) )

{
}

void ArMarkerdetectorImpl::setPose (int id, int type, float value){
  ArMarkerdetectorOpenCVImpl::setPose(id, type, value);
}

void ArMarkerdetectorImpl::enableAugmentation (bool enable)
{
  ArMarkerdetectorOpenCVImpl::enableAugmentation (enable);
}

void ArMarkerdetectorImpl::enableMarkerCountEvents (bool enable)
{
  ArMarkerdetectorOpenCVImpl::enableMarkerCountEvents (enable);
}

void ArMarkerdetectorImpl::enableAugmentationSet (const std::vector<int> &arset)
{
  ArMarkerdetectorOpenCVImpl::enableAugmentationSet (arset);
}

void ArMarkerdetectorImpl::disableAugmentationSet (const std::vector<int> &arset)
{
  ArMarkerdetectorOpenCVImpl::disableAugmentationSet (arset);
}

void ArMarkerdetectorImpl::setArThing (const std::vector<std::shared_ptr<ArThing>> &arThing)
{
  ArMarkerdetectorOpenCVImpl::setArThing (arThing);
}

void ArMarkerdetectorImpl::setMarkerPoseFrequency (bool enable, float frequency)
{
  ArMarkerdetectorOpenCVImpl::setMarkerPoseFrequency (enable, frequency);
}

void ArMarkerdetectorImpl::setMarkerPoseFrameFrequency (bool enable, int frequency)
{
  ArMarkerdetectorOpenCVImpl::setMarkerPoseFrameFrequency (enable, frequency);
}

void ArMarkerdetectorImpl::setShowDebugLevel (int showDebugLevel)
{
  ArMarkerdetectorOpenCVImpl::setShowDebugLevel (showDebugLevel);
}

MediaObjectImpl *
ArMarkerdetectorImplFactory::createObject (const boost::property_tree::ptree &config, std::shared_ptr<MediaPipeline> mediaPipeline) const
{
  return new ArMarkerdetectorImpl (config, mediaPipeline);
}

ArMarkerdetectorImpl::StaticConstructor ArMarkerdetectorImpl::staticConstructor;

ArMarkerdetectorImpl::StaticConstructor::StaticConstructor()
{
  GST_DEBUG_CATEGORY_INIT (GST_CAT_DEFAULT, GST_DEFAULT_NAME, 0,
                           GST_DEFAULT_NAME);
}

} /* armarkerdetector */
} /* module */
} /* kurento */