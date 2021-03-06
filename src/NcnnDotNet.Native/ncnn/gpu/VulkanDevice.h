#ifndef _CPP_GPU_VULKANDEVICE_H_
#define _CPP_GPU_VULKANDEVICE_H_

#include "../export.h"
#include <ncnn/gpu.h>
#include "../shared.h"

#if NCNN_VULKAN

DLLEXPORT int gpu_VulkanDevice_new(const int device_index, ncnn::VulkanDevice** returnValue)
{
    int32_t error = ERR_OK;

    *returnValue = new ncnn::VulkanDevice(device_index);

    return error;
}

DLLEXPORT void gpu_VulkanDevice_delete(ncnn::VulkanDevice* device)
{
    if (device != nullptr) delete device;
}

#endif

#endif