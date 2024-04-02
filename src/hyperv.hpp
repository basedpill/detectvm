#pragma once
#include <Windows.h>

namespace DetectVM
{
	namespace HyperV
	{
		bool DetectBySystemManufacturer()
		{
            HKEY hKey = 0; DWORD dwType = REG_SZ; char buf[255] = { 0 }; DWORD dwBufSize = sizeof(buf);

            //System manufacturer
            if (RegOpenKeyEx(HKEY_LOCAL_MACHINE, TEXT("SYSTEM\\HardwareConfig\\Current\\"), 0, KEY_QUERY_VALUE, &hKey) == ERROR_SUCCESS)
            {
                LSTATUS result = RegGetValue(hKey, NULL, TEXT("SystemManufacturer"), RRF_RT_REG_SZ, NULL, buf, &dwBufSize);
                if (result == ERROR_SUCCESS)
                {
                    if (strcmp(buf, "Microsoft Corporation") == 0)
                        return true;

#ifdef _DEBUG
                    printf("System manufacturer: %s\n", buf);
#endif
                }
            }

            return false;
		}

        bool DetectByBiosVendor()
        {
            HKEY hKey = 0; DWORD dwType = REG_SZ; char buf[255] = { 0 }; DWORD dwBufSize = sizeof(buf);

            if (RegOpenKeyEx(HKEY_LOCAL_MACHINE, TEXT("SYSTEM\\HardwareConfig\\Current\\"), 0, KEY_QUERY_VALUE, &hKey) == ERROR_SUCCESS)
            {
                LSTATUS result = RegGetValue(hKey, NULL, TEXT("BIOSVendor"), RRF_RT_REG_SZ, NULL, buf, &dwBufSize);
                if (result == ERROR_SUCCESS)
                {
                    if (strcmp(buf, "Microsoft Corporation") == 0)
                        return true;

#ifdef _DEBUG
                    printf("BIOS Vendor: %s\n", buf);
#endif
                }
            }

            return false;
        }

        bool DetectBySystemFamily()
        {
            HKEY hKey = 0; DWORD dwType = REG_SZ; char buf[255] = { 0 }; DWORD dwBufSize = sizeof(buf);

            if (RegOpenKeyEx(HKEY_LOCAL_MACHINE, TEXT("SYSTEM\\HardwareConfig\\Current\\"), 0, KEY_QUERY_VALUE, &hKey) == ERROR_SUCCESS)
            {
                LSTATUS result = RegGetValue(hKey, NULL, TEXT("SystemFamily"), RRF_RT_REG_SZ, NULL, buf, &dwBufSize);
                if (result == ERROR_SUCCESS)
                {
                    if (strcmp(buf, "Virtual Machine") == 0)
                        return true;

#ifdef _DEBUG
                    printf("System Family: %s\n", buf);
#endif
                }
            }

            return false;
        }

        bool DetectByProductName()
        {
            HKEY hKey = 0; DWORD dwType = REG_SZ; char buf[255] = { 0 }; DWORD dwBufSize = sizeof(buf);

            if (RegOpenKeyEx(HKEY_LOCAL_MACHINE, TEXT("SYSTEM\\HardwareConfig\\Current\\"), 0, KEY_QUERY_VALUE, &hKey) == ERROR_SUCCESS)
            {
                LSTATUS result = RegGetValue(hKey, NULL, TEXT("SystemProductName"), RRF_RT_REG_SZ, NULL, buf, &dwBufSize);
                if (result == ERROR_SUCCESS)
                {
                    if (strcmp(buf, "Virtual Machine") == 0)
                        return true;

#ifdef _DEBUG
                    printf("System Product Name: %s\n", buf);
#endif
                }
            }

            return false;
        }
	}
}