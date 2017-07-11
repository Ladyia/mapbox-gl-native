#pragma once

#include <mbgl/util/optional.hpp>
#include <mbgl/style/filter.hpp>

#include <string>
#include <vector>

namespace mbgl {

using StringVector = std::vector<std::string>;

/**
 * Options for query rendered features.
 */
class RenderedQueryOptions {
public:
    RenderedQueryOptions(optional<StringVector> layerIDs_ = optional<StringVector>(),
                         optional<style::Filter> filter_ = optional<style::Filter>())
        : layerIDs(std::move(layerIDs_)),
          filter(std::move(filter_)) {}

    /** layerIDs to include in the query */
    optional<StringVector> layerIDs;

    optional<style::Filter> filter;
};

/**
 * Options for query source features
 */
class SourceQueryOptions {
public:
    SourceQueryOptions(optional<StringVector> sourceLayers_ = optional<StringVector>(),
                       optional<style::Filter> filter_ = optional<style::Filter>())
        : sourceLayers(std::move(sourceLayers_)),
          filter(std::move(filter_)) {}

    // Required for VectorSource, ignored for GeoJSONSource
    optional<StringVector> sourceLayers;

    optional<style::Filter> filter;
};

} // namespace mbgl
