
#pragma once
#include <string>
#include <vector>

namespace tools {
	void start_time(void);
	void stop_time_and_calc_sec(float* delay);
	std::string formatWithCommas(double val);
	std::string formatWithCommas(uint64_t value);
	std::string formatPrefix(double val);
	std::vector<uint8_t> hexStringToVector(const std::string& source);
	std::string byteToHexString(uint8_t data);
	std::string bytesToHexString(const uint8_t* data, int len);
	int hexStringToBytes(const std::string& source, uint8_t* bytes, int max_len);
	std::string vectorToHexString(std::vector<uint8_t>& data);
	int encodeAddressBase58(const std::string& hash160hex, std::string& addr);
	int encodeAddressBase58(const uint8_t* hash160, std::string& addr);
	int decodeAddressBase58(const std::string& addr, std::string& hash160hex);
	int decodeAddressBase58(const std::string& addr, uint8_t* hash160);
	int encodeAddressBase32(const std::string& hash160hex, std::string& addr);
	int encodeAddressBase32(const uint8_t* hash160, std::string& addr);
	int decodeAddressBase32(const std::string& addr, std::string& hash160hex);
	int decodeAddressBase32(const std::string& addr, uint8_t* bytes);
	int encodeAddressBIP49(const uint8_t* hash160, std::string& addr);
}