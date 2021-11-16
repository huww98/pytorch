#pragma once

#include <torch/csrc/lazy/backend/backend_data.h>

#include "lazy_tensor_core/csrc/ts_backend/TsNode.h"

namespace torch_lazy_tensors {
namespace ir {
namespace ops {

class DeviceData : public TsNode {
 public:
  DeviceData(std::shared_ptr<torch::lazy::BackendData> data);

  std::string ToString() const override;

  const std::shared_ptr<torch::lazy::BackendData>& data() const {
    return data_;
  }

  static const DeviceData* Cast(const torch::lazy::Node* node);

 private:
  std::shared_ptr<torch::lazy::BackendData> data_;
};

}  // namespace ops
}  // namespace ir
}  // namespace torch_lazy_tensors
