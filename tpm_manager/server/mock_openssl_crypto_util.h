//
// Copyright (C) 2015 The Android Open Source Project
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//

#ifndef TPM_MANAGER_SERVER_MOCK_OPENSSL_CRYPT_UTIL_H_
#define TPM_MANAGER_SERVER_MOCK_OPENSSL_CRYPT_UTIL_H_

#include <gmock/gmock.h>

#include "tpm_manager/server/openssl_crypto_util.h"

namespace tpm_manager {

class MockOpensslCryptoUtil : public OpensslCryptoUtil {
 public:
  MockOpensslCryptoUtil();
  ~MockOpensslCryptoUtil() override;

  MOCK_METHOD2(GetRandomBytes, bool(size_t, std::string*));

 private:
  bool FakeGetRandomBytes(size_t num_bytes, std::string* random_data);
};

}  // namespace tpm_manager

#endif  // TPM_MANAGER_SERVER_MOCK_OPENSSL_CRYPT_UTIL_H_
