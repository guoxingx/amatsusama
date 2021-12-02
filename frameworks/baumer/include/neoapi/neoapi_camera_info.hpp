/* \file neoapi_camera_info.hpp
 \brief        This file is part of the NeoAPI - It provides the C++ API Interface.

 Copyright (c) by Baumer Optronic GmbH. All rights reserved, please see the provided licence document for full details.
 */
#ifndef _NEOAPI_CAMERA_INFO_HPP__
#define _NEOAPI_CAMERA_INFO_HPP__
#include "./neoapi_common.hpp"

class CamInfoData;
class CamInfoListIteratorData;
class CamInfoListData;

namespace NeoAPI {
/**
    \ingroup    All
    \brief      Camera info class which offers basic informations about an available camera
*/
class NEOAPI_CPP_DECL CamInfo {
 public:
    /**
        \brief      Constructor
    */
    CamInfo();
    /**
        \brief      Copy-Constructor
        \param[in]  object A CamInfo object
    */
    CamInfo(const CamInfo& object);
    /**
        \brief     Provides the "=" operator
        \param[in] object A CamInfo object
        \return    The CamInfo object
    */
    CamInfo& operator = (const CamInfo& object);
    /**
        \brief      Destructor
    */
    virtual ~CamInfo();
    /**
        \brief      Get the id.
    */
    virtual NeoString GetId() const;
    /**
        \brief      Get the model name.
    */
    virtual NeoString GetModelName() const;
    /**
        \brief      Get the serial number.
    */
    virtual NeoString GetSerialNumber() const;
    /**
        \brief      Get the transport layer type.
    */
    virtual NeoString GetTLType() const;
    /**
        \brief      Get the vendor name.
    */
    virtual NeoString GetVendorName() const;

    /**
        \brief      Get the USB3VisionGUID id.
        \note       Only valid for USB3 Vision cameras
    */
    virtual NeoString GetUSB3VisionGUID() const;
    /**
        \brief      Get the port id.
        \note       Only valid for USB3 Vision cameras
    */
    virtual NeoString GetUSBPortID() const;

    /**
        \brief      Get the IP address.
        \note       Only valid for GigE Vision cameras
    */
    virtual NeoString GetGevIpAddress() const;
    /**
        \brief      Get the subnet mask.
        \note       Only valid for GigE Vision cameras
    */
    virtual NeoString GetGevSubnetMask() const;
    /**
        \brief      Get the gateway.
        \note       Only valid for GigE Vision cameras
    */
    virtual NeoString GetGevGateway() const;
    /**
        \brief      Get the MAC address.
        \note       Only valid for GigE Vision cameras
    */
    virtual NeoString GetGevMACAddress() const;

 protected:
     /**
         \brief    internal data store
     */
     CamInfoData* data_;
};

/**
    \ingroup       All
    \ingroup       Support

    \brief         Provides iterator functionality for the CamInfoList
*/
class NEOAPI_CPP_DECL CamInfoListIterator {
 public:
     /**
        \brief    Constructor
    */
    CamInfoListIterator();

    /**
        \brief    Constructor
        \param[in] object A CamInfoListIterator object
    */
    CamInfoListIterator(const CamInfoListIterator& object);

    /**
        \brief    Destructor
    */
    virtual ~CamInfoListIterator();

    /**
        \brief     Provides the "=" operator
        \param[in] object A CamInfoListIterator object
        \return    The CamInfoListIterator object
    */
    const CamInfoListIterator& operator= (const CamInfoListIterator& object);

    /**
        \brief     provides the "==" operator
        \param[in] object A FeatureListIterator
        \return    bool
    */
    virtual bool operator==(const CamInfoListIterator& object);

    /**
        \brief     provides the "==" operator
        \param[in] object A FeatureListIterator
        \return    bool
    */
    virtual bool operator==(const CamInfoListIterator& object) const;

    /**
        \brief     provides the "!=" operator
        \param[in] object A FeatureListIterator
        \return    bool
    */
    virtual bool operator!=(const CamInfoListIterator& object);

    /**
        \brief     provides the "!=" operator
        \param[in] object A FeatureListIterator
        \return    bool
    */
    virtual bool operator!=(const CamInfoListIterator& object) const;

    /**
        \brief     provides the "++" operator
        \return    CamInfoListIterator
    */
    CamInfoListIterator& operator++();

    /**
        \brief     provides the "++" operator
        \return    CamInfoListIterator object
    */
    CamInfoListIterator operator++(int);

    /**
    \brief     provides the "*" operator
    \return    The reference to the CamInfo object
    */
    CamInfo& operator*() const;

 protected:
    /**
        \brief    internal data store
    */
     CamInfoListIteratorData* data_;
};

class NEOAPI_CPP_DECL CamInfoList {
 public:
    CamInfoList();
    CamInfoList(const CamInfoList& object);
    virtual ~CamInfoList();

    virtual CamInfo& operator[](size_t index);

    /**
    \brief     Provides the "=" operator
    \param[in] object A CamInfoList object
    \return    The CamInfoList object
    */
    CamInfoList& operator= (const CamInfoList& object);

    /**
    \brief    Update camera list
    \return   The number of cameras has changed
    */
    virtual bool Refresh();

    /**
        \brief    Provides the number of camera infos in this list
        \return   The number of cameras
    */
    virtual size_t size() const;

    /**
    \brief    Provides iterator functionality
    */
    typedef CamInfoListIterator iterator;

    /**
        \brief    Provides iterator functionality
        \return   iterator
    */
    virtual iterator begin() const;


    /**
        \brief    Provides iterator functionality
        \return   iterator
    */
    virtual iterator end() const;

 protected:
    /**
        \brief    internal data store
    */
    CamInfoListData* data_;
};

}  // namespace NeoAPI

#endif  // _NEOAPI_CAMERA_INFO_HPP__
