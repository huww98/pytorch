#pragma once

#include <c10/util/Optional.h>

#include <vector>

#include "lazy_tensors/computation_client/types.h"

// Collection of lowerings for operations which only involve some form of data
// movement and no computation.
namespace torch_lazy_tensors {

std::vector<int64_t> BuildSqueezedDimensions(c10::ArrayRef<int64_t> dimensions,
                                             int64_t squeeze_dim);

std::vector<int64_t> BuildUnsqueezeDimensions(c10::ArrayRef<int64_t> dimensions,
                                              int64_t dim);

}  // namespace torch_lazy_tensors
